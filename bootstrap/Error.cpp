// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult ErrorList(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & ErrorList, (void*) "ErrorList"},
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
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
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

refalrts::FnResult EL_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eErrors_1_b_1;
    static refalrts::Iter eErrors_1_e_1;
    static refalrts::Iter eMessage_1_b_1;
    static refalrts::Iter eMessage_1_e_1;
    // (~1 & ErrorList e.Errors#1 )~1 e.Message#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & ErrorList, bb_1, be_1 ) )
      break;
    eErrors_1_b_1 = bb_1;
    eErrors_1_e_1 = be_1;
    eMessage_1_b_1 = bb_0;
    eMessage_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & ErrorList, (void*) "ErrorList"},
      {refalrts::icSpliceEVar, & eErrors_1_b_1, & eErrors_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eMessage_1_b_1, & eMessage_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n2, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eMessage_1_b_1, eMessage_1_e_1 );
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
    res = refalrts::splice_evar( res, eErrors_1_b_1, eErrors_1_e_1 );
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

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eErrors_1_b_1;
    static refalrts::Iter eErrors_1_e_1;
    static refalrts::Iter sLineNumber_1_1;
    static refalrts::Iter eMessage_1_b_1;
    static refalrts::Iter eMessage_1_e_1;
    // (~1 & ErrorList e.Errors#1 )~1 s.LineNumber#1 e.Message#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & ErrorList, bb_1, be_1 ) )
      break;
    eErrors_1_b_1 = bb_1;
    eErrors_1_e_1 = be_1;
    if( ! refalrts::svar_left( sLineNumber_1_1, bb_0, be_0 ) )
      break;
    eMessage_1_b_1 = bb_0;
    eMessage_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & ErrorList, (void*) "ErrorList"},
      {refalrts::icSpliceEVar, & eErrors_1_b_1, & eErrors_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sLineNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eMessage_1_b_1, & eMessage_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n20 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n2, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eMessage_1_b_1, eMessage_1_e_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sLineNumber_1_1 );
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
    res = refalrts::splice_evar( res, eErrors_1_b_1, eErrors_1_e_1 );
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

extern refalrts::FnResult StrFromToken(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkError(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult EL_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tErrorList_1_1;
    static refalrts::Iter sLineNumber_1_1;
    static refalrts::Iter eMessage_1_b_1;
    static refalrts::Iter eMessage_1_e_1;
    // t.ErrorList#1 (~1 & TkError s.LineNumber#1 e.Message#1 )~1 e.Expected#1
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkError, bb_1, be_1 ) )
      break;
    // Unused closed variable e.Expected#1#1
    if( ! refalrts::svar_left( sLineNumber_1_1, bb_1, be_1 ) )
      break;
    eMessage_1_b_1 = bb_1;
    eMessage_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLineNumber_1_1},
      {refalrts::icSpliceEVar, & eMessage_1_b_1, & eMessage_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMessage_1_b_1, eMessage_1_e_1 );
    res = refalrts::splice_stvar( res, sLineNumber_1_1 );
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
    static refalrts::Iter sLineNumber_1_1;
    static refalrts::Iter eUnexpected_1_b_1;
    static refalrts::Iter eUnexpected_1_e_1;
    // t.ErrorList#1 (~1 & TkUnexpected s.LineNumber#1 e.Unexpected#1 )~1 e.Expected#1
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkUnexpected, bb_1, be_1 ) )
      break;
    // Unused closed variable e.Expected#1#1
    if( ! refalrts::svar_left( sLineNumber_1_1, bb_1, be_1 ) )
      break;
    eUnexpected_1_b_1 = bb_1;
    eUnexpected_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLineNumber_1_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icSpliceEVar, & eUnexpected_1_b_1, & eUnexpected_1_e_1},
      {refalrts::icChar, 0, 0, '"'},
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'a' ) )
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
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eUnexpected_1_b_1, eUnexpected_1_e_1 );
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
    res = refalrts::splice_stvar( res, sLineNumber_1_1 );
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
    static refalrts::Iter eExpected_1_b_1;
    static refalrts::Iter eExpected_1_e_1;
    static refalrts::Iter sUnexpected_1_1;
    static refalrts::Iter sLineNumber_1_1;
    static refalrts::Iter eInfo_1_b_1;
    static refalrts::Iter eInfo_1_e_1;
    // t.ErrorList#1 (~1 s.Unexpected#1 s.LineNumber#1 e.Info#1 )~1 e.Expected#1
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eExpected_1_b_1 = bb_0;
    eExpected_1_e_1 = be_0;
    if( ! refalrts::svar_left( sUnexpected_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sLineNumber_1_1, bb_1, be_1 ) )
      break;
    eInfo_1_b_1 = bb_1;
    eInfo_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1_1},
      {refalrts::icSpliceSTVar, & sLineNumber_1_1},
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromToken, (void*) "StrFromToken"},
      {refalrts::icSpliceSTVar, & sUnexpected_1_1},
      {refalrts::icSpliceEVar, & eInfo_1_b_1, & eInfo_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
      {refalrts::icSpliceEVar, & eExpected_1_b_1, & eExpected_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
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
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StrFromToken, "StrFromToken" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eExpected_1_b_1, eExpected_1_e_1 );
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
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eInfo_1_b_1, eInfo_1_e_1 );
    res = refalrts::splice_stvar( res, sUnexpected_1_1 );
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
    res = refalrts::splice_stvar( res, sLineNumber_1_1 );
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

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    static refalrts::Iter eLine_1_e_1;
    // (~1 e.Line#1 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_1;
    eLine_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icSpliceEVar, & eLine_1_b_1, & eLine_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
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

refalrts::FnResult EL_Print(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eErrors_1_b_1;
    static refalrts::Iter eErrors_1_e_1;
    static refalrts::Iter eErrors_1_b_2;
    static refalrts::Iter eErrors_1_e_2;
    // (~1 & ErrorList e.Errors#1 )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & ErrorList, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eErrors_1_b_1 = bb_1;
    eErrors_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & PrintError, (void*) "PrintError"},
      {refalrts::icSpliceEVar, & eErrors_1_b_1, & eErrors_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & ErrorList, (void*) "ErrorList"},
      {refalrts::icCopyEVar, & eErrors_1_b_1, & eErrors_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eErrors_1_b_2, eErrors_1_e_2, eErrors_1_b_1, eErrors_1_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & PrintError, "PrintError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & ErrorList, "ErrorList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eErrors_1_b_2, eErrors_1_e_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eErrors_1_b_1, eErrors_1_e_1 );
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

refalrts::FnResult EL_NoErrors(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_HasErrors(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult EL_IsEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // (~1 & ErrorList )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & ErrorList, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & EL_NoErrors, (void*) "EL_NoErrors"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & EL_NoErrors, "EL_NoErrors" ) )
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
    static refalrts::Iter tErrorList_1_1;
    // t.ErrorList#1
    if( ! refalrts::tvar_left( tErrorList_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & EL_HasErrors, (void*) "EL_HasErrors"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & EL_HasErrors, "EL_HasErrors" ) )
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


//End of file
