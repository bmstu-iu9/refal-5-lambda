// Automatically generated file. Don't edit!
#include "refalrts.h"


refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sFn_1_1;
    refalrts::use( sFn_1_1 );
    static refalrts::Iter eArgument_1_b_1;
    refalrts::use( eArgument_1_b_1 );
    static refalrts::Iter eArgument_1_e_1;
    refalrts::use( eArgument_1_e_1 );
    // s.Fn1  e.Argument1 
    if( ! refalrts::svar_left( sFn_1_1, bb_0, be_0 ) )
      break;
    eArgument_1_b_1 = bb_0;
    refalrts::use( eArgument_1_b_1 );
    eArgument_1_e_1 = be_0;
    refalrts::use( eArgument_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sFn_1_1},
      {refalrts::icSpliceEVar, & eArgument_1_b_1, & eArgument_1_e_1},
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
    if( ! refalrts::alloc_close_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n1 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eArgument_1_b_1, eArgument_1_e_1 );
    res = refalrts::splice_stvar( res, sFn_1_1 );
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
    static refalrts::Iter eArgument_1_b_1;
    refalrts::use( eArgument_1_b_1 );
    static refalrts::Iter eArgument_1_e_1;
    refalrts::use( eArgument_1_e_1 );
    static refalrts::Iter tClosure_1_1;
    refalrts::use( tClosure_1_1 );
    static refalrts::Iter eBounded_1_b_1;
    refalrts::use( eBounded_1_b_1 );
    static refalrts::Iter eBounded_1_e_1;
    refalrts::use( eBounded_1_e_1 );
    // (~1 t.Closure1  e.Bounded1  )~1 e.Argument1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eArgument_1_b_1 = bb_0;
    refalrts::use( eArgument_1_b_1 );
    eArgument_1_e_1 = be_0;
    refalrts::use( eArgument_1_e_1 );
    if( ! refalrts::tvar_left( tClosure_1_1, bb_1, be_1 ) )
      break;
    eBounded_1_b_1 = bb_1;
    refalrts::use( eBounded_1_b_1 );
    eBounded_1_e_1 = be_1;
    refalrts::use( eBounded_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tClosure_1_1},
      {refalrts::icSpliceEVar, & eBounded_1_b_1, & eBounded_1_e_1},
      {refalrts::icSpliceEVar, & eArgument_1_b_1, & eArgument_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_1_b_1, eArgument_1_e_1 );
    res = refalrts::splice_evar( res, eBounded_1_b_1, eBounded_1_e_1 );
    res = refalrts::splice_stvar( res, tClosure_1_1 );
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

refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    static refalrts::Iter tNext_1_1;
    refalrts::use( tNext_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tFn_1_2;
    refalrts::use( tFn_1_2 );
    // t.Fn1  t.Next1  e.Tail1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNext_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tFn_1_1},
      {refalrts::icSpliceSTVar, & tNext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icCopySTVar, & tFn_1_1},
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
    if( ! refalrts::copy_stvar( tFn_1_2, tFn_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, tFn_1_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tNext_1_1 );
    res = refalrts::splice_stvar( res, tFn_1_1 );
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
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    // t.Fn1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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

refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter tNext_1_1;
    refalrts::use( tNext_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tFn_1_2;
    refalrts::use( tFn_1_2 );
    // t.Fn1  t.Acc1  t.Next1  e.Tail1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNext_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reduce, (void*) "Reduce"},
      {refalrts::icSpliceSTVar, & tFn_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icCopySTVar, & tFn_1_1},
      {refalrts::icSpliceSTVar, & tAcc_1_1},
      {refalrts::icSpliceSTVar, & tNext_1_1},
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
    if( ! refalrts::copy_stvar( tFn_1_2, tFn_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Apply, "Apply" ) )
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
    res = refalrts::splice_stvar( res, tNext_1_1 );
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    res = refalrts::splice_stvar( res, tFn_1_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFn_1_1 );
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
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    // t.Fn1  t.Acc1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFunction_1_1;
    refalrts::use( tFunction_1_1 );
    static refalrts::Iter eArgument_1_b_1;
    refalrts::use( eArgument_1_b_1 );
    static refalrts::Iter eArgument_1_e_1;
    refalrts::use( eArgument_1_e_1 );
    // e.Argument1  t.Function1 
    if( ! refalrts::tvar_right( tFunction_1_1, bb_0, be_0 ) )
      break;
    eArgument_1_b_1 = bb_0;
    refalrts::use( eArgument_1_b_1 );
    eArgument_1_e_1 = be_0;
    refalrts::use( eArgument_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tFunction_1_1},
      {refalrts::icSpliceEVar, & eArgument_1_b_1, & eArgument_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eArgument_1_b_1, eArgument_1_e_1 );
    res = refalrts::splice_stvar( res, tFunction_1_1 );
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

extern refalrts::FnResult Y(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_Y_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sFunc_1_1;
    refalrts::use( sFunc_1_1 );
    static refalrts::Iter eArg_2_b_1;
    refalrts::use( eArg_2_b_1 );
    static refalrts::Iter eArg_2_e_1;
    refalrts::use( eArg_2_e_1 );
    static refalrts::Iter sFunc_1_2;
    refalrts::use( sFunc_1_2 );
    // s.Func1  e.Arg2 
    if( ! refalrts::svar_left( sFunc_1_1, bb_0, be_0 ) )
      break;
    eArg_2_b_1 = bb_0;
    refalrts::use( eArg_2_b_1 );
    eArg_2_e_1 = be_0;
    refalrts::use( eArg_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sFunc_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Y, (void*) "Y"},
      {refalrts::icCopySTVar, & sFunc_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eArg_2_b_1, & eArg_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sFunc_1_2, sFunc_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Y, "Y" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
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
    res = refalrts::splice_evar( res, eArg_2_b_1, eArg_2_e_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sFunc_1_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sFunc_1_1 );
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

refalrts::FnResult Y(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sFunc_1_1;
    refalrts::use( sFunc_1_1 );
    // s.Func1 
    if( ! refalrts::svar_left( sFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_Y_0, (void*) "lambda_Y_0"},
      {refalrts::icSpliceSTVar, & sFunc_1_1},
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
    if( ! refalrts::alloc_name( n1, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & lambda_Y_0, "lambda_Y_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sFunc_1_1 );
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

static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // t.Fn1  t.Acc1  e.Tail1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoMapReduce, (void*) "DoMapReduce"},
      {refalrts::icSpliceSTVar, & tFn_1_1},
      {refalrts::icSpliceSTVar, & tAcc_1_1},
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
    if( ! refalrts::alloc_name( n1, & DoMapReduce, "DoMapReduce" ) )
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    res = refalrts::splice_stvar( res, tFn_1_1 );
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

static refalrts::FnResult MapReduce__AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoMapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter tNext_1_1;
    refalrts::use( tNext_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tFn_1_2;
    refalrts::use( tFn_1_2 );
    // t.Fn1  t.Acc1  (~1 e.Scanned1  )~1 t.Next1  e.Tail1 
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_1;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::tvar_left( tNext_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoMapReduce, (void*) "DoMapReduce"},
      {refalrts::icSpliceSTVar, & tFn_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce__AddScanned, (void*) "MapReduce__AddScanned"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icCopySTVar, & tFn_1_1},
      {refalrts::icSpliceSTVar, & tAcc_1_1},
      {refalrts::icSpliceSTVar, & tNext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::copy_stvar( tFn_1_2, tFn_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoMapReduce, "DoMapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & MapReduce__AddScanned, "MapReduce__AddScanned" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Apply, "Apply" ) )
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
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tNext_1_1 );
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    res = refalrts::splice_stvar( res, tFn_1_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFn_1_1 );
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
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter tFn_1_1;
    refalrts::use( tFn_1_1 );
    // t.Fn1  t.Acc1  (~1 e.Scanned1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_1;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::tvar_left( tFn_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1_1},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MapReduce__AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    static refalrts::Iter eStepScanned_1_b_1;
    refalrts::use( eStepScanned_1_b_1 );
    static refalrts::Iter eStepScanned_1_e_1;
    refalrts::use( eStepScanned_1_e_1 );
    // t.Acc1  e.StepScanned1  (~1 e.Scanned1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_1;
    refalrts::use( eScanned_1_e_1 );
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    eStepScanned_1_b_1 = bb_0;
    refalrts::use( eStepScanned_1_b_1 );
    eStepScanned_1_e_1 = be_0;
    refalrts::use( eStepScanned_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icSpliceEVar, & eStepScanned_1_b_1, & eStepScanned_1_e_1},
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
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eStepScanned_1_b_1, eStepScanned_1_e_1 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tAcc_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eExpr_1_b_1;
    refalrts::use( eExpr_1_b_1 );
    static refalrts::Iter eExpr_1_e_1;
    refalrts::use( eExpr_1_e_1 );
    // (~1 e.Expr1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eExpr_1_b_1 = bb_1;
    refalrts::use( eExpr_1_b_1 );
    eExpr_1_e_1 = be_1;
    refalrts::use( eExpr_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eExpr_1_b_1, & eExpr_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eExpr_1_b_1, eExpr_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter tAcc_1_1;
    refalrts::use( tAcc_1_1 );
    // t.Acc1  e.Tail1 
    if( ! refalrts::tvar_left( tAcc_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult FOpen(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FClose(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult FWriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    refalrts::use( eFileName_1_b_1 );
    static refalrts::Iter eFileName_1_e_1;
    refalrts::use( eFileName_1_e_1 );
    // e.FileName1 
    eFileName_1_b_1 = bb_0;
    refalrts::use( eFileName_1_b_1 );
    eFileName_1_e_1 = be_0;
    refalrts::use( eFileName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLoadFile, (void*) "DoLoadFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FReadLine, (void*) "FReadLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FOpen, (void*) "FOpen"},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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

static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFile_1_1;
    refalrts::use( tFile_1_1 );
    // t.File1  0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icSpliceSTVar, & tFile_1_1},
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
    if( ! refalrts::alloc_name( n1, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tFile_1_1 );
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
    static refalrts::Iter tFile_1_1;
    refalrts::use( tFile_1_1 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // t.File1  e.Line1  0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFile_1_1, bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLine_1_b_1, & eLine_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icSpliceSTVar, & tFile_1_1},
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tFile_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
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
    static refalrts::Iter tFile_1_1;
    refalrts::use( tFile_1_1 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // t.File1  e.Line1 
    if( ! refalrts::tvar_left( tFile_1_1, bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLine_1_b_1, & eLine_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLoadFile, (void*) "DoLoadFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FReadLine, (void*) "FReadLine"},
      {refalrts::icSpliceSTVar, & tFile_1_1},
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FReadLine, "FReadLine" ) )
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
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tFile_1_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
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

static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult SaveFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    refalrts::use( eFileName_1_b_1 );
    static refalrts::Iter eFileName_1_e_1;
    refalrts::use( eFileName_1_e_1 );
    static refalrts::Iter eLines_1_b_1;
    refalrts::use( eLines_1_b_1 );
    static refalrts::Iter eLines_1_e_1;
    refalrts::use( eLines_1_e_1 );
    // (~1 e.FileName1  )~1 e.Lines1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_1;
    refalrts::use( eFileName_1_b_1 );
    eFileName_1_e_1 = be_1;
    refalrts::use( eFileName_1_e_1 );
    eLines_1_b_1 = bb_0;
    refalrts::use( eLines_1_b_1 );
    eLines_1_e_1 = be_0;
    refalrts::use( eLines_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reduce, (void*) "Reduce"},
      {refalrts::icFunc, (void*) & WriteBracketLine, (void*) "WriteBracketLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FOpen, (void*) "FOpen"},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eLines_1_b_1, & eLines_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & WriteBracketLine, "WriteBracketLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'w' ) )
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
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eLines_1_b_1, eLines_1_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    static refalrts::Iter tFile_1_1;
    refalrts::use( tFile_1_1 );
    // t.File1  (~1 e.Line1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_1;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_1;
    refalrts::use( eLine_1_e_1 );
    if( ! refalrts::tvar_left( tFile_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FWriteLine, (void*) "FWriteLine"},
      {refalrts::icSpliceSTVar, & tFile_1_1},
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
    if( ! refalrts::alloc_name( n1, & FWriteLine, "FWriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
    res = refalrts::splice_stvar( res, tFile_1_1 );
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

extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Sub(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // s.Num1 
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Add, (void*) "Add"},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icInt, 0, 0, 1 },
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
    if( ! refalrts::alloc_name( n1, & Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
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

refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // s.Num1 
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Sub, (void*) "Sub"},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icInt, 0, 0, 1 },
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
    if( ! refalrts::alloc_name( n1, & Sub, "Sub" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
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

extern refalrts::FnResult IntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fails(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FastIntFromStr_Guard(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // & Success s.Number1 
    if( ! refalrts::function_left( & Success, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eDigits_1_b_1;
    refalrts::use( eDigits_1_b_1 );
    static refalrts::Iter eDigits_1_e_1;
    refalrts::use( eDigits_1_e_1 );
    // e.Digits1 
    eDigits_1_b_1 = bb_0;
    refalrts::use( eDigits_1_b_1 );
    eDigits_1_e_1 = be_0;
    refalrts::use( eDigits_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastIntFromStr_Guard, (void*) "FastIntFromStr_Guard"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & IntFromStr, (void*) "IntFromStr"},
      {refalrts::icSpliceEVar, & eDigits_1_b_1, & eDigits_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & FastIntFromStr_Guard, "FastIntFromStr_Guard" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & IntFromStr, "IntFromStr" ) )
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
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eDigits_1_b_1, eDigits_1_e_1 );
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

extern refalrts::FnResult Arg(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoArgList, (void*) "DoArgList"},
      {refalrts::icInt, 0, 0, 0 },
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
    if( ! refalrts::alloc_name( n1, & DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
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

static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNext_1_1;
    refalrts::use( sNext_1_1 );
    static refalrts::Iter sNext_1_2;
    refalrts::use( sNext_1_2 );
    // s.Next1 
    if( ! refalrts::svar_left( sNext_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwDoArgList, (void*) "SwDoArgList"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNext_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Arg, (void*) "Arg"},
      {refalrts::icCopySTVar, & sNext_1_1},
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
    if( ! refalrts::copy_stvar( sNext_1_2, sNext_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SwDoArgList, "SwDoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Arg, "Arg" ) )
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
    res = refalrts::splice_stvar( res, sNext_1_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1_1 );
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

static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNext_1_1;
    refalrts::use( sNext_1_1 );
    // s.Next1 
    if( ! refalrts::svar_left( sNext_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    static refalrts::Iter sNext_1_1;
    refalrts::use( sNext_1_1 );
    static refalrts::Iter eArg_1_b_1;
    refalrts::use( eArg_1_b_1 );
    static refalrts::Iter eArg_1_e_1;
    refalrts::use( eArg_1_e_1 );
    // s.Next1  e.Arg1 
    if( ! refalrts::svar_left( sNext_1_1, bb_0, be_0 ) )
      break;
    eArg_1_b_1 = bb_0;
    refalrts::use( eArg_1_b_1 );
    eArg_1_e_1 = be_0;
    refalrts::use( eArg_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eArg_1_b_1, & eArg_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoArgList, (void*) "DoArgList"},
      {refalrts::icSpliceSTVar, & sNext_1_1},
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eArg_1_b_1, eArg_1_e_1 );
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

static refalrts::FnResult Lexicon(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult SymbCompare(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Compare(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 e.Left1  )~1 (~2 e.Right1  )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon, (void*) "Lexicon"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon, "Lexicon" ) )
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
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
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
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter sRight_1_1;
    refalrts::use( sRight_1_1 );
    // (~1 e.Left1  )~1 s.Right1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    if( ! refalrts::svar_left( sRight_1_1, bb_0, be_0 ) )
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
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    static refalrts::Iter sLeft_1_1;
    refalrts::use( sLeft_1_1 );
    // s.Left1  (~1 e.Right1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eRight_1_b_1 = bb_1;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_1;
    refalrts::use( eRight_1_e_1 );
    if( ! refalrts::svar_left( sLeft_1_1, bb_0, be_0 ) )
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
    static refalrts::Iter sLeft_1_1;
    refalrts::use( sLeft_1_1 );
    static refalrts::Iter sRight_1_1;
    refalrts::use( sRight_1_1 );
    // s.Left1  s.Right1 
    if( ! refalrts::svar_left( sLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbCompare, (void*) "SymbCompare"},
      {refalrts::icSpliceSTVar, & sLeft_1_1},
      {refalrts::icSpliceSTVar, & sRight_1_1},
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
    if( ! refalrts::alloc_name( n1, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRight_1_1 );
    res = refalrts::splice_stvar( res, sLeft_1_1 );
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

static refalrts::FnResult Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Lexicon(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFirstLeft_1_1;
    refalrts::use( tFirstLeft_1_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter tFirstRight_1_1;
    refalrts::use( tFirstRight_1_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 t.FirstLeft1  e.Left1  )~1 (~2 t.FirstRight1  e.Right1  )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFirstLeft_1_1, bb_1, be_1 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1_1, bb_2, be_2 ) )
      break;
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_Aux, (void*) "Lexicon_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compare, (void*) "Compare"},
      {refalrts::icSpliceSTVar, & tFirstLeft_1_1},
      {refalrts::icSpliceSTVar, & tFirstRight_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon_Aux, "Lexicon_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Compare, "Compare" ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tFirstRight_1_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1_1 );
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
    // (~1 )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '=' ) )
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
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 )~1 (~2 e.Right1  )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
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
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    // (~1 e.Left1  )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // '< (~1 e.Left1  )~1 (~2 e.Right1  )~2
    if( ! refalrts::char_left( '<', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
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
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // '= (~1 e.Left1  )~1 (~2 e.Right1  )~2
    if( ! refalrts::char_left( '=', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon, (void*) "Lexicon"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon, "Lexicon" ) )
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
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
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
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // '> (~1 e.Left1  )~1 (~2 e.Right1  )~2
    if( ! refalrts::char_left( '>', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Lexicon_T(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Compare_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 e.Left1  )~1 (~2 e.Right1  )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_2;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_2;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T, (void*) "Lexicon_T"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon_T, "Lexicon_T" ) )
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
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter sRight_1_1;
    refalrts::use( sRight_1_1 );
    // (~1 e.Left1  )~1 s.Right1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eLeft_1_b_1 = bb_1;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_1;
    refalrts::use( eLeft_1_e_1 );
    if( ! refalrts::svar_left( sRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sRight_1_1},
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
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sRight_1_1 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
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
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    static refalrts::Iter sLeft_1_1;
    refalrts::use( sLeft_1_1 );
    // s.Left1  (~1 e.Right1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eRight_1_b_1 = bb_1;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_1;
    refalrts::use( eRight_1_e_1 );
    if( ! refalrts::svar_left( sLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icSpliceSTVar, & sLeft_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sLeft_1_1 );
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
    static refalrts::Iter sLeft_1_1;
    refalrts::use( sLeft_1_1 );
    static refalrts::Iter sRight_1_1;
    refalrts::use( sRight_1_1 );
    static refalrts::Iter sLeft_1_2;
    refalrts::use( sLeft_1_2 );
    static refalrts::Iter sRight_1_2;
    refalrts::use( sRight_1_2 );
    // s.Left1  s.Right1 
    if( ! refalrts::svar_left( sLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbCompare, (void*) "SymbCompare"},
      {refalrts::icSpliceSTVar, & sLeft_1_1},
      {refalrts::icSpliceSTVar, & sRight_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sLeft_1_1},
      {refalrts::icCopySTVar, & sRight_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLeft_1_2, sLeft_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sRight_1_2, sRight_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sRight_1_2 );
    res = refalrts::splice_stvar( res, sLeft_1_2 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRight_1_1 );
    res = refalrts::splice_stvar( res, sLeft_1_1 );
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

static refalrts::FnResult Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Lexicon_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    static refalrts::Iter tFirstLeft_1_1;
    refalrts::use( tFirstLeft_1_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter tFirstRight_1_1;
    refalrts::use( tFirstRight_1_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 t.FirstLeft1  e.Left1  )~2 (~3 e.ScannedRight1  )~3 (~4 t.FirstRight1  e.Right1  )~4
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_3;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_3;
    refalrts::use( eScannedRight_1_e_1 );
    if( ! refalrts::tvar_left( tFirstLeft_1_1, bb_2, be_2 ) )
      break;
    eLeft_1_b_1 = bb_2;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_2;
    refalrts::use( eLeft_1_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1_1, bb_4, be_4 ) )
      break;
    eRight_1_b_1 = bb_4;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_4;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T_Aux, (void*) "Lexicon_T_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compare_T, (void*) "Compare_T"},
      {refalrts::icSpliceSTVar, & tFirstLeft_1_1},
      {refalrts::icSpliceSTVar, & tFirstRight_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon_T_Aux, "Lexicon_T_Aux" ) )
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
    if( ! refalrts::alloc_name( n7, & Compare_T, "Compare_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
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
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tFirstRight_1_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 )~2 (~3 e.ScannedRight1  )~3 (~4 )~4
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
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_3;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_3;
    refalrts::use( eScannedRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 )~2 (~3 e.ScannedRight1  )~3 (~4 e.Right1  )~4
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
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_3;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_3;
    refalrts::use( eScannedRight_1_e_1 );
    eRight_1_b_1 = bb_4;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_4;
    refalrts::use( eRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 e.Left1  )~2 (~3 e.ScannedRight1  )~3 (~4 )~4
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
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eLeft_1_b_1 = bb_2;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_2;
    refalrts::use( eLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_3;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_3;
    refalrts::use( eScannedRight_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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

static refalrts::FnResult Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    static refalrts::Iter tNextLeft_1_1;
    refalrts::use( tNextLeft_1_1 );
    static refalrts::Iter tNextRight_1_1;
    refalrts::use( tNextRight_1_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 e.ScannedRight1  )~2 '< t.NextLeft1  t.NextRight1  (~3 e.Left1  )~3 (~4 e.Right1  )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '<', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_2;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_2;
    refalrts::use( eScannedRight_1_e_1 );
    eLeft_1_b_1 = bb_3;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_3;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_4;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_4;
    refalrts::use( eRight_1_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNextRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1_1},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1_1},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1_1 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1_1 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    static refalrts::Iter tNextLeft_1_1;
    refalrts::use( tNextLeft_1_1 );
    static refalrts::Iter tNextRight_1_1;
    refalrts::use( tNextRight_1_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 e.ScannedRight1  )~2 '= t.NextLeft1  t.NextRight1  (~3 e.Left1  )~3 (~4 e.Right1  )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '=', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_2;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_2;
    refalrts::use( eScannedRight_1_e_1 );
    eLeft_1_b_1 = bb_3;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_3;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_4;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_4;
    refalrts::use( eRight_1_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNextRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T, (void*) "Lexicon_T"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Lexicon_T, "Lexicon_T" ) )
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
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tNextRight_1_1 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, tNextLeft_1_1 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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
    static refalrts::Iter eScannedLeft_1_b_1;
    refalrts::use( eScannedLeft_1_b_1 );
    static refalrts::Iter eScannedLeft_1_e_1;
    refalrts::use( eScannedLeft_1_e_1 );
    static refalrts::Iter eScannedRight_1_b_1;
    refalrts::use( eScannedRight_1_b_1 );
    static refalrts::Iter eScannedRight_1_e_1;
    refalrts::use( eScannedRight_1_e_1 );
    static refalrts::Iter eLeft_1_b_1;
    refalrts::use( eLeft_1_b_1 );
    static refalrts::Iter eLeft_1_e_1;
    refalrts::use( eLeft_1_e_1 );
    static refalrts::Iter eRight_1_b_1;
    refalrts::use( eRight_1_b_1 );
    static refalrts::Iter eRight_1_e_1;
    refalrts::use( eRight_1_e_1 );
    static refalrts::Iter tNextLeft_1_1;
    refalrts::use( tNextLeft_1_1 );
    static refalrts::Iter tNextRight_1_1;
    refalrts::use( tNextRight_1_1 );
    // (~1 e.ScannedLeft1  )~1 (~2 e.ScannedRight1  )~2 '> t.NextLeft1  t.NextRight1  (~3 e.Left1  )~3 (~4 e.Right1  )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '>', bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eScannedLeft_1_b_1 = bb_1;
    refalrts::use( eScannedLeft_1_b_1 );
    eScannedLeft_1_e_1 = be_1;
    refalrts::use( eScannedLeft_1_e_1 );
    eScannedRight_1_b_1 = bb_2;
    refalrts::use( eScannedRight_1_b_1 );
    eScannedRight_1_e_1 = be_2;
    refalrts::use( eScannedRight_1_e_1 );
    eLeft_1_b_1 = bb_3;
    refalrts::use( eLeft_1_b_1 );
    eLeft_1_e_1 = be_3;
    refalrts::use( eLeft_1_e_1 );
    eRight_1_b_1 = bb_4;
    refalrts::use( eRight_1_b_1 );
    eRight_1_e_1 = be_4;
    refalrts::use( eRight_1_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tNextRight_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_1_b_1, & eScannedLeft_1_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1_1},
      {refalrts::icSpliceEVar, & eLeft_1_b_1, & eLeft_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_1_b_1, & eScannedRight_1_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1_1},
      {refalrts::icSpliceEVar, & eRight_1_b_1, & eRight_1_e_1},
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
    if( ! refalrts::alloc_char( n0, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eRight_1_b_1, eRight_1_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1_1 );
    res = refalrts::splice_evar( res, eScannedRight_1_b_1, eScannedRight_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLeft_1_b_1, eLeft_1_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1_1 );
    res = refalrts::splice_evar( res, eScannedLeft_1_b_1, eScannedLeft_1_e_1 );
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

extern refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult TypeBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eInBracket_1_b_1;
    refalrts::use( eInBracket_1_b_1 );
    static refalrts::Iter eInBracket_1_e_1;
    refalrts::use( eInBracket_1_e_1 );
    // (~1 e.InBracket1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eInBracket_1_b_1 = bb_1;
    refalrts::use( eInBracket_1_b_1 );
    eInBracket_1_e_1 = be_1;
    refalrts::use( eInBracket_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TypeBracket, (void*) "TypeBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & TypeBracket, "TypeBracket" ) )
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
    static refalrts::Iter sSymbol_1_1;
    refalrts::use( sSymbol_1_1 );
    // s.Symbol1 
    if( ! refalrts::svar_left( sSymbol_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbType, (void*) "SymbType"},
      {refalrts::icSpliceSTVar, & sSymbol_1_1},
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
    if( ! refalrts::alloc_name( n1, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sSymbol_1_1 );
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

refalrts::FnResult Type_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eInBrackets_1_b_1;
    refalrts::use( eInBrackets_1_b_1 );
    static refalrts::Iter eInBrackets_1_e_1;
    refalrts::use( eInBrackets_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // (~1 e.InBrackets1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eInBrackets_1_b_1 = bb_1;
    refalrts::use( eInBrackets_1_b_1 );
    eInBrackets_1_e_1 = be_1;
    refalrts::use( eInBrackets_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TypeBracket, (void*) "TypeBracket"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eInBrackets_1_b_1, & eInBrackets_1_e_1},
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
    if( ! refalrts::alloc_name( n0, & TypeBracket, "TypeBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eInBrackets_1_b_1, eInBrackets_1_e_1 );
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
    static refalrts::Iter sSymbol_1_1;
    refalrts::use( sSymbol_1_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sSymbol_1_2;
    refalrts::use( sSymbol_1_2 );
    // s.Symbol1  e.Tail1 
    if( ! refalrts::svar_left( sSymbol_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbType, (void*) "SymbType"},
      {refalrts::icSpliceSTVar, & sSymbol_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sSymbol_1_1},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sSymbol_1_2, sSymbol_1_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_stvar( res, sSymbol_1_2 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sSymbol_1_1 );
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
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '*' ) )
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

static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Trim(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // '  e.Line1 
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
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
    if( ! refalrts::alloc_name( n1, & Trim, "Trim" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // '\t e.Line1 
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
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
    if( ! refalrts::alloc_name( n1, & Trim, "Trim" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // '\r e.Line1 
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
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
    if( ! refalrts::alloc_name( n1, & Trim, "Trim" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // '\n e.Line1 
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
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
    if( ! refalrts::alloc_name( n1, & Trim, "Trim" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1 
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
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
    if( ! refalrts::alloc_name( n1, & Trim_R, "Trim_R" ) )
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

static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1  ' '
    if( ! refalrts::char_right( ' ', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
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
    if( ! refalrts::alloc_name( n1, & Trim_R, "Trim_R" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1  '\t'
    if( ! refalrts::char_right( '\t', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
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
    if( ! refalrts::alloc_name( n1, & Trim_R, "Trim_R" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1  '\r'
    if( ! refalrts::char_right( '\r', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
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
    if( ! refalrts::alloc_name( n1, & Trim_R, "Trim_R" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1  '\n'
    if( ! refalrts::char_right( '\n', bb_0, be_0 ) )
      break;
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
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
    if( ! refalrts::alloc_name( n1, & Trim_R, "Trim_R" ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eLine_1_b_1;
    refalrts::use( eLine_1_b_1 );
    static refalrts::Iter eLine_1_e_1;
    refalrts::use( eLine_1_e_1 );
    // e.Line1 
    eLine_1_b_1 = bb_0;
    refalrts::use( eLine_1_b_1 );
    eLine_1_e_1 = be_0;
    refalrts::use( eLine_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eLine_1_b_1, & eLine_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eLine_1_b_1, eLine_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_Seq_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFunc_1_1;
    refalrts::use( tFunc_1_1 );
    static refalrts::Iter eFuncs_1_b_1;
    refalrts::use( eFuncs_1_b_1 );
    static refalrts::Iter eFuncs_1_e_1;
    refalrts::use( eFuncs_1_e_1 );
    static refalrts::Iter eArg_2_b_1;
    refalrts::use( eArg_2_b_1 );
    static refalrts::Iter eArg_2_e_1;
    refalrts::use( eArg_2_e_1 );
    // t.Func1  (~1 e.Funcs1  )~1 e.Arg2 
    if( ! refalrts::tvar_left( tFunc_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFuncs_1_b_1 = bb_1;
    refalrts::use( eFuncs_1_b_1 );
    eFuncs_1_e_1 = be_1;
    refalrts::use( eFuncs_1_e_1 );
    eArg_2_b_1 = bb_0;
    refalrts::use( eArg_2_b_1 );
    eArg_2_e_1 = be_0;
    refalrts::use( eArg_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tFunc_1_1},
      {refalrts::icSpliceEVar, & eArg_2_b_1, & eArg_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Seq, (void*) "Seq"},
      {refalrts::icSpliceEVar, & eFuncs_1_b_1, & eFuncs_1_e_1},
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
    if( ! refalrts::alloc_name( n3, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Seq, "Seq" ) )
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
    res = refalrts::splice_evar( res, eFuncs_1_b_1, eFuncs_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eArg_2_b_1, eArg_2_e_1 );
    res = refalrts::splice_stvar( res, tFunc_1_1 );
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

static refalrts::FnResult lambda_Seq_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eArg_2_b_1;
    refalrts::use( eArg_2_b_1 );
    static refalrts::Iter eArg_2_e_1;
    refalrts::use( eArg_2_e_1 );
    // e.Arg2 
    eArg_2_b_1 = bb_0;
    refalrts::use( eArg_2_b_1 );
    eArg_2_e_1 = be_0;
    refalrts::use( eArg_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eArg_2_b_1, & eArg_2_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eArg_2_b_1, eArg_2_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFunc_1_1;
    refalrts::use( tFunc_1_1 );
    // t.Func1 
    if( ! refalrts::tvar_left( tFunc_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tFunc_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tFunc_1_1 );
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
    static refalrts::Iter tFunc_1_1;
    refalrts::use( tFunc_1_1 );
    static refalrts::Iter eFuncs_1_b_1;
    refalrts::use( eFuncs_1_b_1 );
    static refalrts::Iter eFuncs_1_e_1;
    refalrts::use( eFuncs_1_e_1 );
    // t.Func1  e.Funcs1 
    if( ! refalrts::tvar_left( tFunc_1_1, bb_0, be_0 ) )
      break;
    eFuncs_1_b_1 = bb_0;
    refalrts::use( eFuncs_1_b_1 );
    eFuncs_1_e_1 = be_0;
    refalrts::use( eFuncs_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_Seq_0, (void*) "lambda_Seq_0"},
      {refalrts::icSpliceSTVar, & tFunc_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFuncs_1_b_1, & eFuncs_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & lambda_Seq_0, "lambda_Seq_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eFuncs_1_b_1, eFuncs_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, tFunc_1_1 );
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
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & lambda_Seq_1, (void*) "lambda_Seq_1"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & lambda_Seq_1, "lambda_Seq_1" ) )
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
