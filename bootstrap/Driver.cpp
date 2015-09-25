// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fails(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult LexFolding(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ParseAndGenerate(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrepareBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSrcName_1_b_1;
    refalrts::use( eSrcName_1_b_1 );
    static refalrts::Iter eSrcName_1_e_1;
    refalrts::use( eSrcName_1_e_1 );
    static refalrts::Iter eOutputName_1_b_1;
    refalrts::use( eOutputName_1_b_1 );
    static refalrts::Iter eOutputName_1_e_1;
    refalrts::use( eOutputName_1_e_1 );
    // (~1 e.SrcName1  )~1 e.OutputName1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eSrcName_1_b_1 = bb_1;
    refalrts::use( eSrcName_1_b_1 );
    eSrcName_1_e_1 = be_1;
    refalrts::use( eSrcName_1_e_1 );
    eOutputName_1_b_1 = bb_0;
    refalrts::use( eOutputName_1_b_1 );
    eOutputName_1_e_1 = be_0;
    refalrts::use( eOutputName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseAndGenerate, (void*) "ParseAndGenerate"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & PrepareBracket, (void*) "PrepareBracket"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & LexFolding, (void*) "LexFolding"},
      {refalrts::icSpliceEVar, & eSrcName_1_b_1, & eSrcName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eSrcName_1_b_1, eSrcName_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutputName_1_b_1, eOutputName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkOpenBracket s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & COpen<int>::name},
      {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkCloseBracket s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & CClose<int>::name},
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkOpenADT s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & COpen<int>::name},
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkCloseADT s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & CClose<int>::name},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkOpenCall s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & COpen<int>::name},
      {refalrts::icFunc, (void*) & TkOpenCall, (void*) "TkOpenCall"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 & TkCloseCall s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseCall, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & CClose<int>::name},
      {refalrts::icFunc, (void*) & TkCloseCall, (void*) "TkCloseCall"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tOtherToken_1_1;
    refalrts::use( tOtherToken_1_1 );
    // t.OtherToken1 
    if( ! refalrts::tvar_left( tOtherToken_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOtherToken_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOtherToken_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOutputName_1_b_1;
    refalrts::use( eOutputName_1_b_1 );
    static refalrts::Iter eOutputName_1_e_1;
    refalrts::use( eOutputName_1_e_1 );
    static refalrts::Iter eLexFolding_1_b_1;
    refalrts::use( eLexFolding_1_b_1 );
    static refalrts::Iter eLexFolding_1_e_1;
    refalrts::use( eLexFolding_1_e_1 );
    // (~1 e.OutputName1  )~1 e.LexFolding1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eOutputName_1_b_1 = bb_1;
    refalrts::use( eOutputName_1_b_1 );
    eOutputName_1_e_1 = be_1;
    refalrts::use( eOutputName_1_e_1 );
    eLexFolding_1_b_1 = bb_0;
    refalrts::use( eLexFolding_1_b_1 );
    eLexFolding_1_e_1 = be_0;
    refalrts::use( eLexFolding_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteGenerated, (void*) "WriteGenerated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCommonHeaders, (void*) "GenCommonHeaders"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_Create, (void*) "EL_Create"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_Create, (void*) "ST_Create"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eLexFolding_1_b_1, & eLexFolding_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eLexFolding_1_b_1, eLexFolding_1_e_1 );
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
    res = refalrts::splice_evar( res, eOutputName_1_b_1, eOutputName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOutputName_1_b_1;
    refalrts::use( eOutputName_1_b_1 );
    static refalrts::Iter eOutputName_1_e_1;
    refalrts::use( eOutputName_1_e_1 );
    static refalrts::Iter eLines_1_b_1;
    refalrts::use( eLines_1_b_1 );
    static refalrts::Iter eLines_1_e_1;
    refalrts::use( eLines_1_e_1 );
    static refalrts::Iter eOutputName_1_b_2;
    refalrts::use( eOutputName_1_b_2 );
    static refalrts::Iter eOutputName_1_e_2;
    refalrts::use( eOutputName_1_e_2 );
    // (~1 e.OutputName1  )~1 e.Lines1  & EL_NoErrors
    if( ! refalrts::function_right( & EL_NoErrors, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eOutputName_1_b_1 = bb_1;
    refalrts::use( eOutputName_1_b_1 );
    eOutputName_1_e_1 = be_1;
    refalrts::use( eOutputName_1_e_1 );
    eLines_1_b_1 = bb_0;
    refalrts::use( eLines_1_b_1 );
    eLines_1_e_1 = be_0;
    refalrts::use( eLines_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SaveFile, (void*) "SaveFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eLines_1_b_1, & eLines_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icFunc, (void*) & Success, (void*) "Success"},
      {refalrts::icCopyEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eOutputName_1_b_2, eOutputName_1_e_2, eOutputName_1_b_1, eOutputName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eOutputName_1_b_2, eOutputName_1_e_2 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLines_1_b_1, eLines_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutputName_1_b_1, eOutputName_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOutputName_1_b_1;
    refalrts::use( eOutputName_1_b_1 );
    static refalrts::Iter eOutputName_1_e_1;
    refalrts::use( eOutputName_1_e_1 );
    static refalrts::Iter eLines_1_b_1;
    refalrts::use( eLines_1_b_1 );
    static refalrts::Iter eLines_1_e_1;
    refalrts::use( eLines_1_e_1 );
    // (~1 e.OutputName1  )~1 e.Lines1  & EL_HasErrors
    if( ! refalrts::function_right( & EL_HasErrors, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eOutputName_1_b_1 = bb_1;
    refalrts::use( eOutputName_1_b_1 );
    eOutputName_1_e_1 = be_1;
    refalrts::use( eOutputName_1_e_1 );
    eLines_1_b_1 = bb_0;
    refalrts::use( eLines_1_b_1 );
    eLines_1_e_1 = be_0;
    refalrts::use( eLines_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & Fails, (void*) "Fails"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    // t.ErrorList1  t.SymTable1  (~1 & TkEOF s.LnNum1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkEOF, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCommonTailer, (void*) "GenCommonTailer"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_IsEmpty, (void*) "EL_IsEmpty"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_Print, (void*) "EL_Print"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sDirective_1_1;
    refalrts::use( sDirective_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // t.ErrorList1  t.SymTable1  (~1 & TkDirective s.LnNum1  s.Directive1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkDirective, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sDirective_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElement_SwDirective, (void*) "ParseElement_SwDirective"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sDirective_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, sDirective_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // t.ErrorList1  t.SymTable1  (~1 & TkName s.LnNum1  e.Name1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseFunction, (void*) "ParseFunction"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // t.ErrorList1  t.SymTable1  (~1 & TkSemicolon s.LnNum1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // t.ErrorList1  t.SymTable1  t.Unexpected1  e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & EEnum
    if( ! refalrts::function_left( & EEnum, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenEEnum, (void*) "GenEEnum"},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & Enum
    if( ! refalrts::function_left( & Enum, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenEnum, (void*) "GenEnum"},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & Extern
    if( ! refalrts::function_left( & Extern, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenExtern, (void*) "GenExtern"},
      {refalrts::icFunc, (void*) & ST_AddDeclared, (void*) "ST_AddDeclared"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & Forward
    if( ! refalrts::function_left( & Forward, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenForward, (void*) "GenForward"},
      {refalrts::icFunc, (void*) & ST_AddDeclared, (void*) "ST_AddDeclared"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ESwap
    if( ! refalrts::function_left( & ESwap, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenESwap, (void*) "GenESwap"},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & Swap
    if( ! refalrts::function_left( & Swap, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenSwap, (void*) "GenSwap"},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & Ident
    if( ! refalrts::function_left( & Ident, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & GenIdent, (void*) "GenIdent"},
      {refalrts::icFunc, (void*) & ST_AddIdent, (void*) "ST_AddIdent"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // t.ErrorList1  t.SymTable1  & Entry (~1 & TkName s.LnNum1  e.Name1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Entry, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseFunction, (void*) "ParseFunction"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_AddDefined, (void*) "ST_AddDefined"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tUnexpected_1_2;
    refalrts::use( tUnexpected_1_2 );
    // t.ErrorList1  t.SymTable1  & Entry t.Unexpected1  e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Entry, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icCopySTVar, & tUnexpected_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_1_2, tUnexpected_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_1_2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter sDirective_1_1;
    refalrts::use( sDirective_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // t.ErrorList1  t.SymTable1  s.Directive1  e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirective_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseNameList, (void*) "ParseNameList"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFunctionsFromDirective, (void*) "GenFunctionsFromDirective"},
      {refalrts::icSpliceSTVar, & sDirective_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sDirective_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter sGenFunc_1_1;
    refalrts::use( sGenFunc_1_1 );
    static refalrts::Iter sTableChangeFunc_1_1;
    refalrts::use( sTableChangeFunc_1_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sGenFunc_1_2;
    refalrts::use( sGenFunc_1_2 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sTableChangeFunc_1_2;
    refalrts::use( sTableChangeFunc_1_2 );
    static refalrts::Iter sScopeClass_1_2;
    refalrts::use( sScopeClass_1_2 );
    // t.ErrorList1  t.SymTable1  s.GenFunc1  s.TableChangeFunc1  s.ScopeClass1  (~1 & TkName s.LnNum1  e.Name1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sGenFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sTableChangeFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sGenFunc_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseNameList_Tail, (void*) "ParseNameList_Tail"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sTableChangeFunc_1_1},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sGenFunc_1_1},
      {refalrts::icCopySTVar, & sTableChangeFunc_1_1},
      {refalrts::icCopySTVar, & sScopeClass_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sGenFunc_1_2, sGenFunc_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sTableChangeFunc_1_2, sTableChangeFunc_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sScopeClass_1_2, sScopeClass_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1_2 );
    res = refalrts::splice_stvar( res, sTableChangeFunc_1_2 );
    res = refalrts::splice_stvar( res, sGenFunc_1_2 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_stvar( res, sTableChangeFunc_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sGenFunc_1_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sGenFunc_1_1;
    refalrts::use( sGenFunc_1_1 );
    static refalrts::Iter sTableChangeFunc_1_1;
    refalrts::use( sTableChangeFunc_1_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter tUnexpected_1_2;
    refalrts::use( tUnexpected_1_2 );
    // t.ErrorList1  t.SymTable1  s.GenFunc1  s.TableChangeFunc1  s.ScopeClass1  t.Unexpected1  e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sGenFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sTableChangeFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icCopySTVar, & tUnexpected_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_1_2, tUnexpected_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_1_2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter sGenFunc_1_1;
    refalrts::use( sGenFunc_1_1 );
    static refalrts::Iter sTableChangeFunc_1_1;
    refalrts::use( sTableChangeFunc_1_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // t.ErrorList1  t.SymTable1  s.GenFunc1  s.TableChangeFunc1  s.ScopeClass1  (~1 & TkComma s.LnNum1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sGenFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sTableChangeFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkComma, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseNameList, (void*) "ParseNameList"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sGenFunc_1_1},
      {refalrts::icSpliceSTVar, & sTableChangeFunc_1_1},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
    res = refalrts::splice_stvar( res, sTableChangeFunc_1_1 );
    res = refalrts::splice_stvar( res, sGenFunc_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sGenFunc_1_1;
    refalrts::use( sGenFunc_1_1 );
    static refalrts::Iter sTableChangeFunc_1_1;
    refalrts::use( sTableChangeFunc_1_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // t.ErrorList1  t.SymTable1  s.GenFunc1  s.TableChangeFunc1  s.ScopeClass1  (~1 & TkSemicolon s.LnNum1  )~1 e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sGenFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sTableChangeFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sGenFunc_1_1;
    refalrts::use( sGenFunc_1_1 );
    static refalrts::Iter sTableChangeFunc_1_1;
    refalrts::use( sTableChangeFunc_1_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter tUnexpected_1_2;
    refalrts::use( tUnexpected_1_2 );
    // t.ErrorList1  t.SymTable1  s.GenFunc1  s.TableChangeFunc1  s.ScopeClass1  t.Unexpected1  e.Tail1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sGenFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sTableChangeFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icCopySTVar, & tUnexpected_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_1_2, tUnexpected_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_1_2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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

static refalrts::FnResult ParseFunction_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenFunctionBody(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CreateLambdaName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    // e.Name1  s.Number1 
    if( ! refalrts::svar_right( sNumber_1_1, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_0;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_0;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    // (~1 e.Name1  )~1 & GN_Entry
    if( ! refalrts::function_right( & GN_Entry, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenExtern, (void*) "GenExtern"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    // (~1 e.Name1  )~1 & GN_Local
    if( ! refalrts::function_right( & GN_Local, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenForward, (void*) "GenForward"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sNumber_3_1;
    refalrts::use( sNumber_3_1 );
    static refalrts::Iter eSentences_3_b_1;
    refalrts::use( eSentences_3_b_1 );
    static refalrts::Iter eSentences_3_e_1;
    refalrts::use( eSentences_3_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // (~2 e.Name1  )~2 (~1 s.Number3  e.Sentences3  )~1
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_2;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_2;
    refalrts::use( eName_1_e_1 );
    if( ! refalrts::svar_left( sNumber_3_1, bb_1, be_1 ) )
      break;
    eSentences_3_b_1 = bb_1;
    refalrts::use( eSentences_3_b_1 );
    eSentences_3_e_1 = be_1;
    refalrts::use( eSentences_3_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFunctionBody, (void*) "GenFunctionBody"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateLambdaName, (void*) "CreateLambdaName"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icSpliceSTVar, & sNumber_3_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eSentences_3_b_1, & eSentences_3_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eSentences_3_b_1, eSentences_3_e_1 );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_3_1 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eSentences_3_b_1;
    refalrts::use( eSentences_3_b_1 );
    static refalrts::Iter eSentences_3_e_1;
    refalrts::use( eSentences_3_e_1 );
    static refalrts::Iter sNumber_3_1;
    refalrts::use( sNumber_3_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // s.ScopeClass1  (~2 e.Name1  )~2 (~1 s.Number3  e.Sentences3  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_2;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_2;
    refalrts::use( eName_1_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_3_1, bb_1, be_1 ) )
      break;
    eSentences_3_b_1 = bb_1;
    refalrts::use( eSentences_3_b_1 );
    eSentences_3_e_1 = be_1;
    refalrts::use( eSentences_3_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFunctionBody, (void*) "GenFunctionBody"},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eSentences_3_b_1, & eSentences_3_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eSentences_3_b_1, eSentences_3_e_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eSentences_2_b_1;
    refalrts::use( eSentences_2_b_1 );
    static refalrts::Iter eSentences_2_e_1;
    refalrts::use( eSentences_2_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tSymTable_2_1;
    refalrts::use( tSymTable_2_1 );
    static refalrts::Iter eTail_2_b_1;
    refalrts::use( eTail_2_b_1 );
    static refalrts::Iter eTail_2_e_1;
    refalrts::use( eTail_2_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // s.ScopeClass1  (~4 e.Name1  )~4 (~1 1 (~2 0 e.Sentences2  )~2 )~1 t.ErrorList2  t.SymTable2  (~3 t.Context2  )~3 e.Tail2 
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::number_left( 0UL, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_4;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_4;
    refalrts::use( eName_1_e_1 );
    eSentences_2_b_1 = bb_2;
    refalrts::use( eSentences_2_b_1 );
    eSentences_2_e_1 = be_2;
    refalrts::use( eSentences_2_e_1 );
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_2_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eTail_2_b_1 = bb_0;
    refalrts::use( eTail_2_b_1 );
    eTail_2_e_1 = be_0;
    refalrts::use( eTail_2_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFunctionBody, (void*) "GenFunctionBody"},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eSentences_2_b_1, & eSentences_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_Destroy, (void*) "Cntx_Destroy"},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_2_1},
      {refalrts::icSpliceEVar, & eTail_2_b_1, & eTail_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_2_b_1, eTail_2_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_2_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eSentences_2_b_1, eSentences_2_e_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tSymTable_2_1;
    refalrts::use( tSymTable_2_1 );
    static refalrts::Iter eTail_2_b_1;
    refalrts::use( eTail_2_b_1 );
    static refalrts::Iter eTail_2_e_1;
    refalrts::use( eTail_2_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter tMainBody_2_1;
    refalrts::use( tMainBody_2_1 );
    static refalrts::Iter eFunctionBodies_2_b_1;
    refalrts::use( eFunctionBodies_2_b_1 );
    static refalrts::Iter eFunctionBodies_2_e_1;
    refalrts::use( eFunctionBodies_2_e_1 );
    static refalrts::Iter sNextNumber_2_1;
    refalrts::use( sNextNumber_2_1 );
    static refalrts::Iter sScopeClass_1_2;
    refalrts::use( sScopeClass_1_2 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter eName_1_b_3;
    refalrts::use( eName_1_b_3 );
    static refalrts::Iter eName_1_e_3;
    refalrts::use( eName_1_e_3 );
    // s.ScopeClass1  (~3 e.Name1  )~3 (~1 s.NextNumber2  e.FunctionBodies2  t.MainBody2  )~1 t.ErrorList2  t.SymTable2  (~2 t.Context2  )~2 e.Tail2 
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_3;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_3;
    refalrts::use( eName_1_e_1 );
    if( ! refalrts::svar_left( sNextNumber_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_2_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eTail_2_b_1 = bb_0;
    refalrts::use( eTail_2_b_1 );
    eTail_2_e_1 = be_0;
    refalrts::use( eTail_2_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::tvar_right( tMainBody_2_1, bb_1, be_1 ) )
      break;
    eFunctionBodies_2_b_1 = bb_1;
    refalrts::use( eFunctionBodies_2_b_1 );
    eFunctionBodies_2_e_1 = be_1;
    refalrts::use( eFunctionBodies_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseFunction_0, (void*) "lambda_ParseFunction_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseFunction_1, (void*) "lambda_ParseFunction_1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFunctionBodies_2_b_1, & eFunctionBodies_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icSpliceSTVar, & tMainBody_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseFunction_2, (void*) "lambda_ParseFunction_2"},
      {refalrts::icCopySTVar, & sScopeClass_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_Destroy, (void*) "Cntx_Destroy"},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_2_1},
      {refalrts::icSpliceEVar, & eTail_2_b_1, & eTail_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sScopeClass_1_2, sScopeClass_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_1_b_3, eName_1_e_3, eName_1_b_2, eName_1_e_2 ) )
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
    res = refalrts::splice_evar( res, eTail_2_b_1, eTail_2_e_1 );
    res = refalrts::splice_stvar( res, tSymTable_2_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
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
    res = refalrts::splice_evar( res, eName_1_b_3, eName_1_e_3 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sScopeClass_1_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, tMainBody_2_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFunctionBodies_2_b_1, eFunctionBodies_2_e_1 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
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
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // s.ScopeClass1  (~1 e.Name1  )~1 t.ErrorList1  t.SymTable1  (~2 & TkOpenBlock s.LnNum1  )~2 e.Tail1 
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBlock, bb_2, be_2 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseBlock, (void*) "ParseBlock"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_Create, (void*) "Cntx_Create"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseFunction_3, (void*) "lambda_ParseFunction_3"},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter tUnexpected_1_2;
    refalrts::use( tUnexpected_1_2 );
    // s.ScopeClass1  (~1 e.Name1  )~1 t.ErrorList1  t.SymTable1  t.Unexpected1  e.Tail1 
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseElements, (void*) "ParseElements"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icCopySTVar, & tUnexpected_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tUnexpected_1_2, tUnexpected_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_1_2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eMainName_1_b_1;
    refalrts::use( eMainName_1_b_1 );
    static refalrts::Iter eMainName_1_e_1;
    refalrts::use( eMainName_1_e_1 );
    static refalrts::Iter sNumber_3_1;
    refalrts::use( sNumber_3_1 );
    // (~2 e.MainName1  )~2 (~1 & TkName # CLambdaName s.Number3  )~1
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    if( ! refalrts::ident_left(  & CLambdaName<int>::name, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eMainName_1_b_1 = bb_2;
    refalrts::use( eMainName_1_b_1 );
    eMainName_1_e_1 = be_2;
    refalrts::use( eMainName_1_e_1 );
    if( ! refalrts::svar_left( sNumber_3_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CreateLambdaName, (void*) "CreateLambdaName"},
      {refalrts::icSpliceEVar, & eMainName_1_b_1, & eMainName_1_e_1},
      {refalrts::icSpliceSTVar, & sNumber_3_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sNumber_3_1 );
    res = refalrts::splice_evar( res, eMainName_1_b_1, eMainName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tOtherToken_3_1;
    refalrts::use( tOtherToken_3_1 );
    static refalrts::Iter eMainName_1_b_1;
    refalrts::use( eMainName_1_b_1 );
    static refalrts::Iter eMainName_1_e_1;
    refalrts::use( eMainName_1_e_1 );
    // (~1 e.MainName1  )~1 t.OtherToken3 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eMainName_1_b_1 = bb_1;
    refalrts::use( eMainName_1_b_1 );
    eMainName_1_e_1 = be_1;
    refalrts::use( eMainName_1_e_1 );
    if( ! refalrts::tvar_left( tOtherToken_3_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOtherToken_3_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOtherToken_3_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult lambda_GenFunctionBody_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eMainName_1_b_1;
    refalrts::use( eMainName_1_b_1 );
    static refalrts::Iter eMainName_1_e_1;
    refalrts::use( eMainName_1_e_1 );
    static refalrts::Iter ePattern_2_b_1;
    refalrts::use( ePattern_2_b_1 );
    static refalrts::Iter ePattern_2_e_1;
    refalrts::use( ePattern_2_e_1 );
    static refalrts::Iter eResult_2_b_1;
    refalrts::use( eResult_2_b_1 );
    static refalrts::Iter eResult_2_e_1;
    refalrts::use( eResult_2_e_1 );
    // (~4 e.MainName1  )~4 (~1 (~2 e.Pattern2  )~2 (~3 e.Result2  )~3 )~1
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eMainName_1_b_1 = bb_4;
    refalrts::use( eMainName_1_b_1 );
    eMainName_1_e_1 = be_4;
    refalrts::use( eMainName_1_e_1 );
    ePattern_2_b_1 = bb_2;
    refalrts::use( ePattern_2_b_1 );
    ePattern_2_e_1 = be_2;
    refalrts::use( ePattern_2_e_1 );
    eResult_2_b_1 = bb_3;
    refalrts::use( eResult_2_b_1 );
    eResult_2_e_1 = be_3;
    refalrts::use( eResult_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSentence, (void*) "GenSentence"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakeAlgorithm, (void*) "MakeAlgorithm"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_2_b_1, & ePattern_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GenFunctionBody_0, (void*) "lambda_GenFunctionBody_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMainName_1_b_1, & eMainName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_2_b_1, & eResult_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_name( n8, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & lambda_GenFunctionBody_0, "lambda_GenFunctionBody_0" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n6, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eResult_2_b_1, eResult_2_e_1 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eMainName_1_b_1, eMainName_1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePattern_2_b_1, ePattern_2_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sScopeClass_1_1;
    refalrts::use( sScopeClass_1_1 );
    static refalrts::Iter eMainName_1_b_1;
    refalrts::use( eMainName_1_b_1 );
    static refalrts::Iter eMainName_1_e_1;
    refalrts::use( eMainName_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    // s.ScopeClass1  (~1 e.MainName1  )~1 (~2 e.Name1  )~2 e.Sentences1 
    if( ! refalrts::svar_left( sScopeClass_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eMainName_1_b_1 = bb_1;
    refalrts::use( eMainName_1_b_1 );
    eMainName_1_e_1 = be_1;
    refalrts::use( eMainName_1_e_1 );
    eName_1_b_1 = bb_2;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_2;
    refalrts::use( eName_1_e_1 );
    eSentences_1_b_1 = bb_0;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_0;
    refalrts::use( eSentences_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFnStart, (void*) "GenFnStart"},
      {refalrts::icSpliceSTVar, & sScopeClass_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GenFunctionBody_1, (void*) "lambda_GenFunctionBody_1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMainName_1_b_1, & eMainName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenFnEnd, (void*) "GenFnEnd"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_name( n9, & lambda_GenFunctionBody_1, "lambda_GenFunctionBody_1" ) )
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
    res = refalrts::splice_evar( res, eMainName_1_b_1, eMainName_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eTokens_1_b_1;
    refalrts::use( eTokens_1_b_1 );
    static refalrts::Iter eTokens_1_e_1;
    refalrts::use( eTokens_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  e.Tokens1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    eTokens_1_b_1 = bb_0;
    refalrts::use( eTokens_1_b_1 );
    eTokens_1_e_1 = be_0;
    refalrts::use( eTokens_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseBlock, (void*) "DoParseBlock"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_PushScope, (void*) "Cntx_PushScope"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTokens_1_b_1, & eTokens_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTokens_1_b_1, eTokens_1_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNumber_1_1;
    refalrts::use( sLnNumber_1_1 );
    static refalrts::Iter sNumber_1_2;
    refalrts::use( sNumber_1_2 );
    // (~1 s.Number1  e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 & TkCloseBlock s.LnNumber1  )~3 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBlock, bb_3, be_3 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNumber_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseBlock_SetContext, (void*) "ParseBlock_SetContext"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sNumber_1_1},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_PopScope, (void*) "Cntx_PopScope"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNumber_1_2, sNumber_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_stvar( res, sNumber_1_2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sNumber_1_2;
    refalrts::use( sNumber_1_2 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    // (~1 s.Number1  e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 & TkEOF s.LnNum1  )~3 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkEOF, bb_3, be_3 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sNumber_1_1},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_PopScope, (void*) "Cntx_PopScope"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkEOF, (void*) "TkEOF"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNumber_1_2, sNumber_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n43, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n38, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_stvar( res, sNumber_1_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eTokens_1_b_1;
    refalrts::use( eTokens_1_b_1 );
    static refalrts::Iter eTokens_1_e_1;
    refalrts::use( eTokens_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 e.Tokens1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eTokens_1_b_1 = bb_0;
    refalrts::use( eTokens_1_b_1 );
    eTokens_1_e_1 = be_0;
    refalrts::use( eTokens_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseBlock, (void*) "DoParseBlock"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseSentence, (void*) "ParseSentence"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTokens_1_b_1, & eTokens_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTokens_1_b_1, eTokens_1_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTokens_1_b_1;
    refalrts::use( eTokens_1_b_1 );
    static refalrts::Iter eTokens_1_e_1;
    refalrts::use( eTokens_1_e_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eFreeContext_1_b_1;
    refalrts::use( eFreeContext_1_b_1 );
    static refalrts::Iter eFreeContext_1_e_1;
    refalrts::use( eFreeContext_1_e_1 );
    static refalrts::Iter eFreeContext_1_b_2;
    refalrts::use( eFreeContext_1_b_2 );
    static refalrts::Iter eFreeContext_1_e_2;
    refalrts::use( eFreeContext_1_e_2 );
    // (~1 e.Functions1  )~1 (~2 s.Number1  e.Sentences1  )~2 t.ErrorList1  t.SymTable1  (~3 t.Context1  e.FreeContext1  )~3 e.Tokens1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_2, be_2 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eTokens_1_b_1 = bb_0;
    refalrts::use( eTokens_1_b_1 );
    eTokens_1_e_1 = be_0;
    refalrts::use( eTokens_1_e_1 );
    if( ! refalrts::tvar_left( tContext_1_1, bb_3, be_3 ) )
      break;
    eFreeContext_1_b_1 = bb_3;
    refalrts::use( eFreeContext_1_b_1 );
    eFreeContext_1_e_1 = be_3;
    refalrts::use( eFreeContext_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & AddContextToSentence, (void*) "AddContextToSentence"},
      {refalrts::icSpliceEVar, & eFreeContext_1_b_1, & eFreeContext_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icCopyEVar, & eFreeContext_1_b_1, & eFreeContext_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTokens_1_b_1, & eTokens_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eFreeContext_1_b_2, eFreeContext_1_e_2, eFreeContext_1_b_1, eFreeContext_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTokens_1_b_1, eTokens_1_e_1 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFreeContext_1_b_2, eFreeContext_1_e_2 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n1, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFreeContext_1_b_1, eFreeContext_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eContext_1_b_1;
    refalrts::use( eContext_1_b_1 );
    static refalrts::Iter eContext_1_e_1;
    refalrts::use( eContext_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    // e.Context1  (~1 (~2 s.LastBracket1  e.Pattern1  )~2 (~3 e.Result1  )~3 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    eContext_1_b_1 = bb_0;
    refalrts::use( eContext_1_b_1 );
    eContext_1_e_1 = be_0;
    refalrts::use( eContext_1_e_1 );
    eResult_1_b_1 = bb_3;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_3;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_2, be_2 ) )
      break;
    ePattern_1_b_1 = bb_2;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_2;
    refalrts::use( ePattern_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & CreateContext, (void*) "CreateContext"},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icSpliceEVar, & eContext_1_b_1, & eContext_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_name( n3, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CreateContext, "CreateContext" ) )
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
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eContext_1_b_1, eContext_1_e_1 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
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

static refalrts::FnResult CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    static refalrts::Iter sBracketNumber_1_3;
    refalrts::use( sBracketNumber_1_3 );
    // s.BracketNumber1  (~1 'e e.Index1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_3, sBracketNumber_1_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TkOpenBracket, "TkOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & TkVariable, "TkVariable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & TkCloseBracket, "TkCloseBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_3 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // s.BracketNumber1  (~1 s.Mode1  e.Index1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eTokens_1_b_1;
    refalrts::use( eTokens_1_b_1 );
    static refalrts::Iter eTokens_1_e_1;
    refalrts::use( eTokens_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 e.Tokens1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eTokens_1_b_1 = bb_0;
    refalrts::use( eTokens_1_b_1 );
    eTokens_1_e_1 = be_0;
    refalrts::use( eTokens_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTokens_1_b_1, & eTokens_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_number( n7, 1UL ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eTokens_1_b_1, eTokens_1_e_1 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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

static refalrts::FnResult CoBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

static refalrts::FnResult PatternBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkOpenBracket, "TkOpenBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseCall
    if( ! refalrts::function_left( & TkCloseCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracket_1_1;
    refalrts::use( sBracket_1_1 );
    // s.Bracket1 
    if( ! refalrts::svar_left( sBracket_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracket_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracket_1_1 );
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

static refalrts::FnResult lambda_ParsePattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sMode_2_1;
    refalrts::use( sMode_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    // (~1 e.Functions1  )~1 t.SymTable1  (~2 e.Sentences1  )~2 (~3 e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 e.Index1  )~5 (~6 e.Tail1  )~6 t.ErrorList2  t.Context2  s.Mode2  s.Depth2 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eIndex_1_b_1 = bb_5;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_5;
    refalrts::use( eIndex_1_e_1 );
    eTail_1_b_1 = bb_6;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_6;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
      {refalrts::icSpliceSTVar, & sMode_2_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_2_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sMode_2_1;
    refalrts::use( sMode_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    // (~1 e.Functions1  )~1 t.SymTable1  (~2 e.Sentences1  )~2 (~3 e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 e.Index1  )~5 (~6 e.Tail1  )~6 t.ErrorList2  t.Context2  s.Mode2  s.Depth2 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eIndex_1_b_1 = bb_5;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_5;
    refalrts::use( eIndex_1_e_1 );
    eTail_1_b_1 = bb_6;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_6;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
      {refalrts::icSpliceSTVar, & sMode_2_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_2_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBrackets_1_b_1;
    refalrts::use( eMultiBrackets_1_b_1 );
    static refalrts::Iter eMultiBrackets_1_e_1;
    refalrts::use( eMultiBrackets_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBrackets1  )~3 (~4 e.Scanned1  )~4 (~5 & TkChar s.LnNum1  s.Char1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBrackets_1_b_1 = bb_3;
    refalrts::use( eMultiBrackets_1_b_1 );
    eMultiBrackets_1_e_1 = be_3;
    refalrts::use( eMultiBrackets_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sChar_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBrackets_1_b_1, & eMultiBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sChar_1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBrackets_1_b_1, eMultiBrackets_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBrackets_1_b_1;
    refalrts::use( eMultiBrackets_1_b_1 );
    static refalrts::Iter eMultiBrackets_1_e_1;
    refalrts::use( eMultiBrackets_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBrackets1  )~3 (~4 e.Scanned1  )~4 (~5 & TkNumber s.LnNum1  s.Number1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBrackets_1_b_1 = bb_3;
    refalrts::use( eMultiBrackets_1_b_1 );
    eMultiBrackets_1_e_1 = be_3;
    refalrts::use( eMultiBrackets_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBrackets_1_b_1, & eMultiBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBrackets_1_b_1, eMultiBrackets_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBrackets_1_b_1;
    refalrts::use( eMultiBrackets_1_b_1 );
    static refalrts::Iter eMultiBrackets_1_e_1;
    refalrts::use( eMultiBrackets_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBrackets1  )~3 (~4 e.Scanned1  )~4 (~5 & TkName s.LnNum1  e.Name1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBrackets_1_b_1 = bb_3;
    refalrts::use( eMultiBrackets_1_b_1 );
    eMultiBrackets_1_e_1 = be_3;
    refalrts::use( eMultiBrackets_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    eName_1_b_1 = bb_5;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_5;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckDeclared, (void*) "ST_CheckDeclared"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBrackets_1_b_1, & eMultiBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eMultiBrackets_1_b_1, eMultiBrackets_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBrackets_1_b_1;
    refalrts::use( eMultiBrackets_1_b_1 );
    static refalrts::Iter eMultiBrackets_1_e_1;
    refalrts::use( eMultiBrackets_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNumName_1_1;
    refalrts::use( sLnNumName_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sLnNumMarker_1_1;
    refalrts::use( sLnNumMarker_1_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBrackets1  )~3 (~4 e.Scanned1  )~4 (~5 & TkIdentMarker s.LnNumMarker1  )~5 (~6 & TkName s.LnNumName1  e.Name1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, bb_5, be_5 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBrackets_1_b_1 = bb_3;
    refalrts::use( eMultiBrackets_1_b_1 );
    eMultiBrackets_1_e_1 = be_3;
    refalrts::use( eMultiBrackets_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNumMarker_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sLnNumName_1_1, bb_6, be_6 ) )
      break;
    eName_1_b_1 = bb_6;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_6;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckIdent, (void*) "ST_CheckIdent"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sLnNumName_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBrackets_1_b_1, & eMultiBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n11, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eMultiBrackets_1_b_1, eMultiBrackets_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sLnNumName_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBrackets_1_b_1;
    refalrts::use( eMultiBrackets_1_b_1 );
    static refalrts::Iter eMultiBrackets_1_e_1;
    refalrts::use( eMultiBrackets_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBrackets1  )~3 (~4 e.Scanned1  )~4 (~5 & TkIdentMarker s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBrackets_1_b_1 = bb_3;
    refalrts::use( eMultiBrackets_1_b_1 );
    eMultiBrackets_1_e_1 = be_3;
    refalrts::use( eMultiBrackets_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBrackets_1_b_1, & eMultiBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eMultiBrackets_1_b_1, eMultiBrackets_1_e_1 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNumVar_1_1;
    refalrts::use( sLnNumVar_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sLnNumRedef_1_1;
    refalrts::use( sLnNumRedef_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 & TkVariable s.LnNumVar1  s.Mode1  e.Index1  )~5 (~6 & TkRedefinition s.LnNumRedef1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_5, be_5 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkRedefinition, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNumVar_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_5, be_5 ) )
      break;
    eIndex_1_b_1 = bb_5;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_5;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::svar_left( sLnNumRedef_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CheckAddVariable, (void*) "CheckAddVariable"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icFunc, (void*) & Cntx_AddNewVariable, (void*) "Cntx_AddNewVariable"},
      {refalrts::icSpliceSTVar, & sLnNumVar_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParsePattern_0, (void*) "lambda_ParsePattern_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sLnNumVar_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 & TkVariable s.LnNum1  s.Mode1  e.Index1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_5, be_5 ) )
      break;
    eIndex_1_b_1 = bb_5;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_5;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CheckAddVariable, (void*) "CheckAddVariable"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icFunc, (void*) & Cntx_AddVariable, (void*) "Cntx_AddVariable"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParsePattern_1, (void*) "lambda_ParsePattern_1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 & TkRedefinition s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkRedefinition, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 # COpen & TkOpenBracket s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_name( n8, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & TkOpenBracket, "TkOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TkCloseBracket, "TkCloseBracket" ) )
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
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n6, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNumBracket_1_1;
    refalrts::use( sLnNumBracket_1_1 );
    static refalrts::Iter sLnNumName_1_1;
    refalrts::use( sLnNumName_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 # COpen & TkOpenADT s.LnNumBracket1  )~5 (~6 & TkName s.LnNumName1  e.Name1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_5, be_5 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNumBracket_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sLnNumName_1_1, bb_6, be_6 ) )
      break;
    eName_1_b_1 = bb_6;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_6;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckDeclared, (void*) "ST_CheckDeclared"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sLnNumName_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icSpliceSTVar, & sLnNumBracket_1_1},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & TkName, "TkName" ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n18, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n19, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n9, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sLnNumBracket_1_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sLnNumName_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    static refalrts::Iter tSymTable_1_2;
    refalrts::use( tSymTable_1_2 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 # COpen & TkOpenADT s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_GetAnyName, (void*) "ST_GetAnyName"},
      {refalrts::icCopySTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( tSymTable_1_2, tSymTable_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_name( n45, & ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_close_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n49 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n41, n48 );
    res = refalrts::splice_elem( res, n48 );
    refalrts::link_brackets( n42, n47 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n44 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_stvar( res, tSymTable_1_2 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::link_brackets( n32, n40 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n36, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 # COpen & TkOpenCall s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_5, be_5 ) )
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenCall, (void*) "TkOpenCall"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icFunc, (void*) & TkCloseCall, (void*) "TkCloseCall"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_name( n56, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_call( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_bracket( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_name( n59, & TkOpenCall, "TkOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_name( n60, & TkCloseCall, "TkCloseCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_close_bracket( n61 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_bracket( n62 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_open_bracket( n63 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_close_bracket( n64 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_close_call( n65 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n65 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n63, n64 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::link_brackets( n54, n62 );
    res = refalrts::splice_elem( res, n62 );
    refalrts::link_brackets( n58, n61 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n57 );
    refalrts::push_stack( n55 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    refalrts::link_brackets( n52, n53 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eInnerScanned_1_b_1;
    refalrts::use( eInnerScanned_1_b_1 );
    static refalrts::Iter eInnerScanned_1_e_1;
    refalrts::use( eInnerScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sInnerNumber_1_1;
    refalrts::use( sInnerNumber_1_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sInnerLnNum_1_1;
    refalrts::use( sInnerLnNum_1_1 );
    static refalrts::Iter sCloseBracket_1_2;
    refalrts::use( sCloseBracket_1_2 );
    static refalrts::Iter sClosedLnNum_1_1;
    refalrts::use( sClosedLnNum_1_1 );
    static refalrts::Iter sInnerNumber_1_2;
    refalrts::use( sInnerNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  (~4 s.InnerNumber1  s.OpenBracket1  s.InnerLnNum1  s.CloseBracket1  e.Scanned1  )~4 )~3 (~5 e.InnerScanned1  )~5 (~6 # CClose s.CloseBracket1  s.ClosedLnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, bb_6, be_6 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eInnerScanned_1_b_1 = bb_5;
    refalrts::use( eInnerScanned_1_b_1 );
    eInnerScanned_1_e_1 = be_5;
    refalrts::use( eInnerScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sInnerNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sInnerLnNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::repeated_stvar_left( sCloseBracket_1_2, sCloseBracket_1_1, bb_6, be_6 ) )
      break;
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sClosedLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInnerScanned_1_b_1, & eInnerScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sInnerNumber_1_2, sInnerNumber_1_1 ) )
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
    if( ! refalrts::alloc_name( n11, & PatternBracket, "PatternBracket" ) )
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
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & PatternBracket, "PatternBracket" ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n8, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n14, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_2 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eInnerScanned_1_b_1, eInnerScanned_1_e_1 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eInnerScanned_1_b_1;
    refalrts::use( eInnerScanned_1_b_1 );
    static refalrts::Iter eInnerScanned_1_e_1;
    refalrts::use( eInnerScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sInnerNumber_1_1;
    refalrts::use( sInnerNumber_1_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sInnerLnNum_1_1;
    refalrts::use( sInnerLnNum_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sOtherCloseBracket_1_1;
    refalrts::use( sOtherCloseBracket_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sOpenBracket_1_2;
    refalrts::use( sOpenBracket_1_2 );
    static refalrts::Iter sInnerNumber_1_2;
    refalrts::use( sInnerNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  (~4 s.InnerNumber1  s.OpenBracket1  s.InnerLnNum1  s.CloseBracket1  e.Scanned1  )~4 )~3 (~5 e.InnerScanned1  )~5 (~6 # CClose s.OtherCloseBracket1  s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, bb_6, be_6 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eInnerScanned_1_b_1 = bb_5;
    refalrts::use( eInnerScanned_1_b_1 );
    eInnerScanned_1_e_1 = be_5;
    refalrts::use( eInnerScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sInnerNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sInnerLnNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_4, be_4 ) )
      break;
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sOtherCloseBracket_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sInnerLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromBracket, (void*) "StrFromBracket"},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icCopySTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInnerScanned_1_b_1, & eInnerScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & CClose<int>::name},
      {refalrts::icSpliceSTVar, & sOtherCloseBracket_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sOpenBracket_1_2, sOpenBracket_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerNumber_1_2, sInnerNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & PatternBracket, "PatternBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & PatternBracket, "PatternBracket" ) )
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
    if( ! refalrts::alloc_open_bracket( n47 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_ident( n48, & CClose<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n50 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n47, n49 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, sOtherCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::link_brackets( n35, n46 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::link_brackets( n41, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_2 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eInnerScanned_1_b_1, eInnerScanned_1_e_1 );
    refalrts::link_brackets( n36, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_1 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_2 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
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
    res = refalrts::splice_stvar( res, sInnerLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  )~3 (~4 e.Scanned1  )~4 (~5 # CClose s.CloseBracket1  s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromBracket, (void*) "StrFromBracket"},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  )~3 (~4 e.Scanned1  )~4 (~5 & TkReplace s.LnNum1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkReplace, bb_5, be_5 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::empty_seq( bb_5, be_5 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_number( n9, 1UL ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sInnerNumber_1_1;
    refalrts::use( sInnerNumber_1_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sInnerLnNum_1_1;
    refalrts::use( sInnerLnNum_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter eInnerScanned_1_b_1;
    refalrts::use( eInnerScanned_1_b_1 );
    static refalrts::Iter eInnerScanned_1_e_1;
    refalrts::use( eInnerScanned_1_e_1 );
    static refalrts::Iter sOpenBracket_1_2;
    refalrts::use( sOpenBracket_1_2 );
    static refalrts::Iter sInnerNumber_1_2;
    refalrts::use( sInnerNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  (~4 s.InnerNumber1  s.OpenBracket1  s.InnerLnNum1  s.CloseBracket1  e.InnerScanned1  )~4 )~3 (~5 e.Scanned1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sInnerNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sInnerLnNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_4, be_4 ) )
      break;
    eInnerScanned_1_b_1 = bb_4;
    refalrts::use( eInnerScanned_1_b_1 );
    eInnerScanned_1_e_1 = be_4;
    refalrts::use( eInnerScanned_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParsePattern, (void*) "ParsePattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sInnerLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromBracket, (void*) "StrFromBracket"},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icCopySTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInnerScanned_1_b_1, & eInnerScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PatternBracket, (void*) "PatternBracket"},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sOpenBracket_1_2, sOpenBracket_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerNumber_1_2, sInnerNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & PatternBracket, "PatternBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & PatternBracket, "PatternBracket" ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n35, n46 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    refalrts::link_brackets( n41, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_2 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eInnerScanned_1_b_1, eInnerScanned_1_e_1 );
    refalrts::link_brackets( n36, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_1 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_2 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
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
    res = refalrts::splice_stvar( res, sInnerLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sNextResultTerm_1_1;
    refalrts::use( sNextResultTerm_1_1 );
    static refalrts::Iter eInfo_1_b_1;
    refalrts::use( eInfo_1_b_1 );
    static refalrts::Iter eInfo_1_e_1;
    refalrts::use( eInfo_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 s.BracketNumber1  )~3 (~4 e.Scanned1  )~4 (~5 s.NextResultTerm1  s.LnNum1  e.Info1  )~5 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
    if( ! refalrts::svar_left( sNextResultTerm_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_5, be_5 ) )
      break;
    eInfo_1_b_1 = bb_5;
    refalrts::use( eInfo_1_b_1 );
    eInfo_1_e_1 = be_5;
    refalrts::use( eInfo_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    if( ! refalrts::alloc_number( n41, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_bracket( n43 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n43, n44 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n40, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n38, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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

static refalrts::FnResult CoBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenADT
    if( ! refalrts::function_left( & TkOpenADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenBracket
    if( ! refalrts::function_left( & TkOpenBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkCloseCall, (void*) "TkCloseCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseADT
    if( ! refalrts::function_left( & TkCloseADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseBracket
    if( ! refalrts::function_left( & TkCloseBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkOpenBracket, "TkOpenBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseCall
    if( ! refalrts::function_left( & TkCloseCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TkOpenCall, (void*) "TkOpenCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TkOpenCall, "TkOpenCall" ) )
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

static refalrts::FnResult InvalidModeVariableError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sOldMode_1_1;
    refalrts::use( sOldMode_1_1 );
    static refalrts::Iter sNewMode_1_1;
    refalrts::use( sNewMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // t.ErrorList1  s.LnNum1  s.OldMode1  s.NewMode1  e.Index1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sOldMode_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNewMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sOldMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sNewMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, sNewMode_1_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sOldMode_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CSuccess s.Depth2 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CSuccess<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sOldMode_2_1;
    refalrts::use( sOldMode_2_1 );
    static refalrts::Iter sOldMode_2_2;
    refalrts::use( sOldMode_2_2 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CInvalidMode s.Depth2  s.OldMode2 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CInvalidMode<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sOldMode_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & InvalidModeVariableError, (void*) "InvalidModeVariableError"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceSTVar, & sOldMode_2_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icCopySTVar, & sOldMode_2_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sOldMode_2_2, sOldMode_2_1 ) )
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
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_stvar( res, sOldMode_2_2 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sOldMode_2_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CAlreadyBounded s.Depth2 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CAlreadyBounded<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '^'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_1_2, sMode_1_1 ) )
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
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    refalrts::push_stack( n74 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter sFnContextModifier_1_1;
    refalrts::use( sFnContextModifier_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // t.ErrorList1  t.Context1  s.FnContextModifier1  s.LnNum1  s.Mode1  e.Index1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sFnContextModifier_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sFnContextModifier_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_CheckAddVariable_0, (void*) "lambda_CheckAddVariable_0"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_1_2, sMode_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, sFnContextModifier_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenBracket
    if( ! refalrts::function_left( & TkOpenBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseBracket
    if( ! refalrts::function_left( & TkCloseBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenCall
    if( ! refalrts::function_left( & TkOpenCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseCall
    if( ! refalrts::function_left( & TkCloseCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkOpenADT
    if( ! refalrts::function_left( & TkOpenADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & TkCloseADT
    if( ! refalrts::function_left( & TkCloseADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ']'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sMode_2_1;
    refalrts::use( sMode_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    // (~1 e.Functions1  )~1 t.SymTable1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 e.Tail1  )~6 (~7 e.Index1  )~7 t.ErrorList2  t.Context2  s.Mode2  s.Depth2 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_6;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_6;
    refalrts::use( eTail_1_e_1 );
    eIndex_1_b_1 = bb_7;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_7;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
      {refalrts::icSpliceSTVar, & sMode_2_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_2_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tErrorList_2_1;
    refalrts::use( tErrorList_2_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 e.Functions1  )~1 t.SymTable1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 e.Tail1  )~6 (~7 e.Index1  )~7 t.ErrorList2  t.Context2 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_6;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_6;
    refalrts::use( eTail_1_e_1 );
    eIndex_1_b_1 = bb_7;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_7;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_2_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_2_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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

static refalrts::FnResult ParseResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkChar s.LnNum1  s.Char1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sChar_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sChar_1_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkNumber s.LnNum1  s.Number1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkName s.LnNum1  e.Name1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    eName_1_b_1 = bb_6;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_6;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckDeclared, (void*) "ST_CheckDeclared"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n13, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNameLnNum_1_1;
    refalrts::use( sNameLnNum_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sMarkerLnNum_1_1;
    refalrts::use( sMarkerLnNum_1_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkIdentMarker s.MarkerLnNum1  )~6 (~7 & TkName s.NameLnNum1  e.Name1  )~7 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, bb_6, be_6 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_7, be_7 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sMarkerLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sNameLnNum_1_1, bb_7, be_7 ) )
      break;
    eName_1_b_1 = bb_7;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_7;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckIdent, (void*) "ST_CheckIdent"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sNameLnNum_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n13, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sNameLnNum_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkIdentMarker s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentMarker, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkVariable s.LnNum1  s.Mode1  e.Index1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_6, be_6 ) )
      break;
    eIndex_1_b_1 = bb_6;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_6;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CheckUseVariable, (void*) "CheckUseVariable"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseResult_0, (void*) "lambda_ParseResult_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNumADT_1_1;
    refalrts::use( sLnNumADT_1_1 );
    static refalrts::Iter sLnNumName_1_1;
    refalrts::use( sLnNumName_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 # COpen & TkOpenADT s.LnNumADT1  )~6 (~7 & TkName s.LnNumName1  e.Name1  )~7 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_6, be_6 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_6, be_6 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_7, be_7 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNumADT_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sLnNumName_1_1, bb_7, be_7 ) )
      break;
    eName_1_b_1 = bb_7;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_7;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_CheckDeclared, (void*) "ST_CheckDeclared"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & sLnNumName_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icSpliceSTVar, & sLnNumADT_1_1},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & TkCloseADT, "TkCloseADT" ) )
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
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n20, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n11, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n15, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sLnNumADT_1_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sLnNumName_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    static refalrts::Iter tSymTable_1_2;
    refalrts::use( tSymTable_1_2 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 # COpen & TkOpenADT s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_6, be_6 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ST_GetAnyName, (void*) "ST_GetAnyName"},
      {refalrts::icCopySTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( tSymTable_1_2, tSymTable_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_name( n36, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & TkOpenADT, "TkOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_name( n45, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & ST_GetAnyName, "ST_GetAnyName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n51 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n43, n50 );
    res = refalrts::splice_elem( res, n50 );
    refalrts::link_brackets( n44, n49 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::push_stack( n48 );
    refalrts::push_stack( n46 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_stvar( res, tSymTable_1_2 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n34, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::link_brackets( n38, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n37 );
    refalrts::push_stack( n35 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n32, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sBracketNumber_1_2;
    refalrts::use( sBracketNumber_1_2 );
    static refalrts::Iter sOpenBracket_1_2;
    refalrts::use( sOpenBracket_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 # COpen s.OpenBracket1  s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & COpen<int>::name, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CoBracket, (void*) "CoBracket"},
      {refalrts::icCopySTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sBracketNumber_1_2, sBracketNumber_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sOpenBracket_1_2, sOpenBracket_1_1 ) )
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
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & CoBracket, "CoBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
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
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n8, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n12, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eInnerScanned_1_b_1;
    refalrts::use( eInnerScanned_1_b_1 );
    static refalrts::Iter eInnerScanned_1_e_1;
    refalrts::use( eInnerScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sInnerNumber_1_1;
    refalrts::use( sInnerNumber_1_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sOpenLnNum_1_1;
    refalrts::use( sOpenLnNum_1_1 );
    static refalrts::Iter sCloseBracket_1_2;
    refalrts::use( sCloseBracket_1_2 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sInnerNumber_1_2;
    refalrts::use( sInnerNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  e.MultiBracket1  (~5 s.InnerNumber1  s.OpenBracket1  s.OpenLnNum1  s.CloseBracket1  e.Scanned1  )~5 )~4 (~6 e.InnerScanned1  )~6 (~7 # CClose s.CloseBracket1  s.LnNum1  )~7 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, bb_7, be_7 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eInnerScanned_1_b_1 = bb_6;
    refalrts::use( eInnerScanned_1_b_1 );
    eInnerScanned_1_e_1 = be_6;
    refalrts::use( eInnerScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sInnerNumber_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sOpenLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::repeated_stvar_left( sCloseBracket_1_2, sCloseBracket_1_1, bb_7, be_7 ) )
      break;
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_7, be_7 ) )
      break;
    if( ! refalrts::empty_seq( bb_7, be_7 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icSpliceSTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInnerScanned_1_b_1, & eInnerScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icCopySTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sInnerNumber_1_2, sInnerNumber_1_1 ) )
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
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_2 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eInnerScanned_1_b_1, eInnerScanned_1_e_1 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_1 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 e.MultiBracket1  )~4 (~5 e.Scanned1  )~5 (~6 & TkOpenBlock s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBlock, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult_Block, (void*) "ParseResult_Block"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseBlock, (void*) "ParseBlock"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eInnerBracket_1_b_1;
    refalrts::use( eInnerBracket_1_b_1 );
    static refalrts::Iter eInnerBracket_1_e_1;
    refalrts::use( eInnerBracket_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sInnerNumber_1_1;
    refalrts::use( sInnerNumber_1_1 );
    static refalrts::Iter sOpenBracket_1_1;
    refalrts::use( sOpenBracket_1_1 );
    static refalrts::Iter sOpenLnNum_1_1;
    refalrts::use( sOpenLnNum_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sOpenBracket_1_2;
    refalrts::use( sOpenBracket_1_2 );
    static refalrts::Iter sInnerNumber_1_2;
    refalrts::use( sInnerNumber_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  e.MultiBracket1  (~5 s.InnerNumber1  s.OpenBracket1  s.OpenLnNum1  s.CloseBracket1  e.Scanned1  )~5 )~4 (~6 e.InnerBracket1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_4, be_4 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eInnerBracket_1_b_1 = bb_6;
    refalrts::use( eInnerBracket_1_b_1 );
    eInnerBracket_1_e_1 = be_6;
    refalrts::use( eInnerBracket_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    eMultiBracket_1_b_1 = bb_4;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_4;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sInnerNumber_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sOpenBracket_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sOpenLnNum_1_1, bb_5, be_5 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_5, be_5 ) )
      break;
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sOpenLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromBracket, (void*) "StrFromBracket"},
      {refalrts::icSpliceSTVar, & sOpenBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sOpenBracket_1_1},
      {refalrts::icSpliceSTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInnerBracket_1_b_1, & eInnerBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icCopySTVar, & sInnerNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sOpenBracket_1_2, sOpenBracket_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerNumber_1_2, sInnerNumber_1_1 ) )
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
    if( ! refalrts::alloc_open_bracket( n40 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n37, n42 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::link_brackets( n40, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_2 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eInnerBracket_1_b_1, eInnerBracket_1_e_1 );
    refalrts::link_brackets( n38, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sInnerNumber_1_1 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_2 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sOpenBracket_1_1 );
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
    res = refalrts::splice_stvar( res, sOpenLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sCloseBracket_1_1;
    refalrts::use( sCloseBracket_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  )~4 (~5 e.Scanned1  )~5 (~6 # CClose s.CloseBracket1  s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CClose<int>::name, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sCloseBracket_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromBracket, (void*) "StrFromBracket"},
      {refalrts::icSpliceSTVar, & sCloseBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n37, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sCloseBracket_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  )~4 (~5 e.Result1  )~5 (~6 & TkSemicolon s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkSemicolon, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eResult_1_b_1 = bb_5;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_5;
    refalrts::use( eResult_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_ResetAfterSentence, (void*) "Cntx_ResetAfterSentence"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n5, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  )~4 (~5 e.Result1  )~5 (~6 & TkCloseBlock s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBlock, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eResult_1_b_1 = bb_5;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_5;
    refalrts::use( eResult_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_ResetAfterSentence, (void*) "Cntx_ResetAfterSentence"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseBlock, (void*) "TkCloseBlock"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n32, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n24, n31 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n25, n30 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter sLnNum_1_2;
    refalrts::use( sLnNum_1_2 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  )~4 (~5 e.Result1  )~5 (~6 & TkEOF s.LnNum1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkEOF, bb_6, be_6 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eResult_1_b_1 = bb_5;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_5;
    refalrts::use( eResult_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_ResetAfterSentence, (void*) "Cntx_ResetAfterSentence"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseBlock, (void*) "TkCloseBlock"},
      {refalrts::icCopySTVar, & sLnNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLnNum_1_2, sLnNum_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n30, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, sLnNum_1_2 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n22, n29 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n23, n28 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n24, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter tUnexpected_1_1;
    refalrts::use( tUnexpected_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // (~1 e.Functions1  )~1 t.ErrorList1  t.SymTable1  t.Context1  (~2 e.Sentences1  )~2 (~3 e.Pattern1  )~3 (~4 s.BracketNumber1  )~4 (~5 e.Scanned1  )~5 t.Unexpected1  e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_1;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_1;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_2;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_2;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_3;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_3;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_5;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_5;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::tvar_left( tUnexpected_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddUnexpected, (void*) "EL_AddUnexpected"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tUnexpected_1_1},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n33, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n31, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n29, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
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
    res = refalrts::splice_stvar( res, tUnexpected_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CExistVariable s.Depth2 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CExistVariable<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sOldMode_2_1;
    refalrts::use( sOldMode_2_1 );
    static refalrts::Iter sOldMode_2_2;
    refalrts::use( sOldMode_2_2 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CInvalidMode s.Depth2  s.OldMode2 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CInvalidMode<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDepth_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sOldMode_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & InvalidModeVariableError, (void*) "InvalidModeVariableError"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icSpliceSTVar, & sOldMode_2_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icCopySTVar, & sOldMode_2_1},
      {refalrts::icSpliceSTVar, & sDepth_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sOldMode_2_2, sOldMode_2_1 ) )
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
    res = refalrts::splice_stvar( res, sDepth_2_1 );
    res = refalrts::splice_stvar( res, sOldMode_2_2 );
    res = refalrts::splice_stvar( res, tContext_2_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sOldMode_2_1 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter tContext_2_1;
    refalrts::use( tContext_2_1 );
    // t.ErrorList1  s.LnNum1  s.Mode1  (~1 e.Index1  )~1 t.Context2  # CNotFound
    if( ! refalrts::ident_right(  & CNotFound<int>::name, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    if( ! refalrts::tvar_left( tContext_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tContext_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, tContext_2_1 );
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter sLnNum_1_1;
    refalrts::use( sLnNum_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // t.ErrorList1  t.Context1  s.LnNum1  s.Mode1  e.Index1 
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLnNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Cntx_CheckVariable, (void*) "Cntx_CheckVariable"},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_CheckUseVariable_0, (void*) "lambda_CheckUseVariable_0"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLnNum_1_1},
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sMode_1_2, sMode_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_stvar( res, sLnNum_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
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

static refalrts::FnResult ParseResult_Block_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNextNum_1_1;
    refalrts::use( sNextNum_1_1 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter sNextBracketNumber_2_1;
    refalrts::use( sNextBracketNumber_2_1 );
    static refalrts::Iter eRealContext_2_b_1;
    refalrts::use( eRealContext_2_b_1 );
    static refalrts::Iter eRealContext_2_e_1;
    refalrts::use( eRealContext_2_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sFunctionNumber_2_1;
    refalrts::use( sFunctionNumber_2_1 );
    static refalrts::Iter sNextBracketNumber_2_2;
    refalrts::use( sNextBracketNumber_2_2 );
    static refalrts::Iter sNextBracketNumber_2_3;
    refalrts::use( sNextBracketNumber_2_3 );
    // s.NextNum1  (~2 e.Functions1  )~2 t.ErrorList1  t.SymTable1  t.Context1  (~3 e.Sentences1  )~3 (~4 e.Pattern1  )~4 (~5 e.MultiBracket1  )~5 (~6 e.Scanned1  )~6 (~7 e.Tail1  )~7 s.FunctionNumber2  (~1 s.NextBracketNumber2  e.RealContext2  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNextNum_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eFunctions_1_b_1 = bb_2;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_2;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::svar_left( sNextBracketNumber_2_1, bb_1, be_1 ) )
      break;
    eRealContext_2_b_1 = bb_1;
    refalrts::use( eRealContext_2_b_1 );
    eRealContext_2_e_1 = be_1;
    refalrts::use( eRealContext_2_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tContext_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_7 = 0;
    refalrts::Iter be_7 = 0;
    if( ! refalrts::brackets_left( bb_7, be_7, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_3;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_3;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_4;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_4;
    refalrts::use( ePattern_1_e_1 );
    eMultiBracket_1_b_1 = bb_5;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_5;
    refalrts::use( eMultiBracket_1_e_1 );
    eScanned_1_b_1 = bb_6;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_6;
    refalrts::use( eScanned_1_e_1 );
    eTail_1_b_1 = bb_7;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_7;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sFunctionNumber_2_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sNextNum_1_1},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNextBracketNumber_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkOpenCall, (void*) "TkOpenCall"},
      {refalrts::icCopySTVar, & sNextBracketNumber_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icIdent, (void*) & CCreateClosure<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icIdent, (void*) & CLambdaName<int>::name},
      {refalrts::icSpliceSTVar, & sFunctionNumber_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eRealContext_2_b_1, & eRealContext_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseCall, (void*) "TkCloseCall"},
      {refalrts::icCopySTVar, & sNextBracketNumber_2_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNextBracketNumber_2_2, sNextBracketNumber_2_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNextBracketNumber_2_3, sNextBracketNumber_2_2 ) )
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
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
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
    if( ! refalrts::alloc_name( n15, & TkOpenCall, "TkOpenCall" ) )
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
    if( ! refalrts::alloc_ident( n19, & CCreateClosure<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_ident( n23, & CLambdaName<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & TkCloseCall, "TkCloseCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n29 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n13, n28 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n25, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sNextBracketNumber_2_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, eRealContext_2_b_1, eRealContext_2_e_1 );
    refalrts::link_brackets( n21, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_stvar( res, sFunctionNumber_2_1 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sNextBracketNumber_2_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n8, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sNextBracketNumber_2_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_stvar( res, sNextNum_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sNextNum_1_1;
    refalrts::use( sNextNum_1_1 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter sNextNum_1_2;
    refalrts::use( sNextNum_1_2 );
    // (~1 e.Sentences1  )~1 (~2 e.Pattern1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 s.NextNum1  e.Functions1  )~5 t.ErrorList1  t.SymTable1  (~6 t.Context1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_1;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_1;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_2;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_2;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sNextNum_1_1, bb_5, be_5 ) )
      break;
    eFunctions_1_b_1 = bb_5;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_5;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::tvar_left( tContext_1_1, bb_6, be_6 ) )
      break;
    if( ! refalrts::empty_seq( bb_6, be_6 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseResult, (void*) "ParseResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sNextNum_1_1},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icIdent, (void*) & CLambdaName<int>::name},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sNextNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNextNum_1_2, sNextNum_1_1 ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n10, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n11, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sNextNum_1_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_stvar( res, sNextNum_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSentences_1_b_1;
    refalrts::use( eSentences_1_b_1 );
    static refalrts::Iter eSentences_1_e_1;
    refalrts::use( eSentences_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter sBracketNumber_1_1;
    refalrts::use( sBracketNumber_1_1 );
    static refalrts::Iter eMultiBracket_1_b_1;
    refalrts::use( eMultiBracket_1_b_1 );
    static refalrts::Iter eMultiBracket_1_e_1;
    refalrts::use( eMultiBracket_1_e_1 );
    static refalrts::Iter sNextNum_1_1;
    refalrts::use( sNextNum_1_1 );
    static refalrts::Iter eFunctions_1_b_1;
    refalrts::use( eFunctions_1_b_1 );
    static refalrts::Iter eFunctions_1_e_1;
    refalrts::use( eFunctions_1_e_1 );
    static refalrts::Iter tErrorList_1_1;
    refalrts::use( tErrorList_1_1 );
    static refalrts::Iter tSymTable_1_1;
    refalrts::use( tSymTable_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tContext_1_1;
    refalrts::use( tContext_1_1 );
    static refalrts::Iter eFreeContext_1_b_1;
    refalrts::use( eFreeContext_1_b_1 );
    static refalrts::Iter eFreeContext_1_e_1;
    refalrts::use( eFreeContext_1_e_1 );
    static refalrts::Iter sNextNum_1_2;
    refalrts::use( sNextNum_1_2 );
    // (~1 e.Sentences1  )~1 (~2 e.Pattern1  )~2 (~3 s.BracketNumber1  e.MultiBracket1  )~3 (~4 e.Scanned1  )~4 (~5 s.NextNum1  e.Functions1  )~5 t.ErrorList1  t.SymTable1  (~6 t.Context1  e.FreeContext1  )~6 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eSentences_1_b_1 = bb_1;
    refalrts::use( eSentences_1_b_1 );
    eSentences_1_e_1 = be_1;
    refalrts::use( eSentences_1_e_1 );
    ePattern_1_b_1 = bb_2;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_2;
    refalrts::use( ePattern_1_e_1 );
    eScanned_1_b_1 = bb_4;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_4;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::svar_left( sBracketNumber_1_1, bb_3, be_3 ) )
      break;
    eMultiBracket_1_b_1 = bb_3;
    refalrts::use( eMultiBracket_1_b_1 );
    eMultiBracket_1_e_1 = be_3;
    refalrts::use( eMultiBracket_1_e_1 );
    if( ! refalrts::svar_left( sNextNum_1_1, bb_5, be_5 ) )
      break;
    eFunctions_1_b_1 = bb_5;
    refalrts::use( eFunctions_1_b_1 );
    eFunctions_1_e_1 = be_5;
    refalrts::use( eFunctions_1_e_1 );
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tSymTable_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_left( bb_6, be_6, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::tvar_left( tContext_1_1, bb_6, be_6 ) )
      break;
    eFreeContext_1_b_1 = bb_6;
    refalrts::use( eFreeContext_1_b_1 );
    eFreeContext_1_e_1 = be_6;
    refalrts::use( eFreeContext_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icSpliceSTVar, & sNextNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & CreateContext, (void*) "CreateContext"},
      {refalrts::icSpliceSTVar, & sBracketNumber_1_1},
      {refalrts::icSpliceEVar, & eFreeContext_1_b_1, & eFreeContext_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_ParseResult_Block_0, (void*) "lambda_ParseResult_Block_0"},
      {refalrts::icCopySTVar, & sNextNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFunctions_1_b_1, & eFunctions_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & tSymTable_1_1},
      {refalrts::icSpliceSTVar, & tContext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSentences_1_b_1, & eSentences_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eMultiBracket_1_b_1, & eMultiBracket_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNextNum_1_2, sNextNum_1_1 ) )
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
    if( ! refalrts::alloc_name( n7, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CreateContext, "CreateContext" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & lambda_ParseResult_Block_0, "lambda_ParseResult_Block_0" ) )
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
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n24, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eMultiBracket_1_b_1, eMultiBracket_1_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eSentences_1_b_1, eSentences_1_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, tContext_1_1 );
    res = refalrts::splice_stvar( res, tSymTable_1_1 );
    res = refalrts::splice_stvar( res, tErrorList_1_1 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eFunctions_1_b_1, eFunctions_1_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNextNum_1_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n5, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFreeContext_1_b_1, eFreeContext_1_e_1 );
    res = refalrts::splice_stvar( res, sBracketNumber_1_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNextNum_1_1 );
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
