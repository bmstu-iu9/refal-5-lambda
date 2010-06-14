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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sFn_1;
    refalrts::use( sFn_1 );
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
    // s.Fn e.Argument
    if( ! refalrts::svar_left( sFn_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, sFn_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sFn_1;
    refalrts::use( sFn_1 );
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
#ifdef OLD_PATTERN
    // s.Fn e.Argument
    if( ! refalrts::svar_left( sFn_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
#else
    // s.Fn e.Argument
    if( ! refalrts::svar_left( sFn_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sFn_1},
      {refalrts::icSpliceEVar, & eArgument_b_1, & eArgument_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, sFn_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
    static refalrts::Iter tClosure_1;
    refalrts::use( tClosure_1 );
    static refalrts::Iter eBounded_b_1;
    refalrts::use( eBounded_b_1 );
    static refalrts::Iter eBounded_e_1;
    refalrts::use( eBounded_e_1 );
    // (~1 t.Closure e.Bounded )~1 e.Argument
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
    if( ! refalrts::tvar_left( tClosure_1, bb_1, be_1 ) ) 
      break;
    eBounded_b_1 = bb_1;
    refalrts::use( eBounded_b_1 );
    eBounded_e_1 = be_1;
    refalrts::use( eBounded_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    refalrts::reinit_name( n3, & Apply, "Apply" );
    //}}} REINITS
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_evar( res, eBounded_b_1, eBounded_e_1 );
    res = refalrts::splice_stvar( res, tClosure_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
    static refalrts::Iter tClosure_1;
    refalrts::use( tClosure_1 );
    static refalrts::Iter eBounded_b_1;
    refalrts::use( eBounded_b_1 );
    static refalrts::Iter eBounded_e_1;
    refalrts::use( eBounded_e_1 );
#ifdef OLD_PATTERN
    // (~1 t.Closure e.Bounded )~1 e.Argument
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
    if( ! refalrts::tvar_left( tClosure_1, bb_1, be_1 ) ) 
      break;
    eBounded_b_1 = bb_1;
    refalrts::use( eBounded_b_1 );
    eBounded_e_1 = be_1;
    refalrts::use( eBounded_e_1 );
#else
    // (~1 t.Closure e.Bounded )~1 e.Argument
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
    if( ! refalrts::tvar_left( tClosure_1, bb_1, be_1 ) ) 
      break;
    eBounded_b_1 = bb_1;
    refalrts::use( eBounded_b_1 );
    eBounded_e_1 = be_1;
    refalrts::use( eBounded_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tClosure_1},
      {refalrts::icSpliceEVar, & eBounded_b_1, & eBounded_e_1},
      {refalrts::icSpliceEVar, & eArgument_b_1, & eArgument_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_evar( res, eBounded_b_1, eBounded_e_1 );
    res = refalrts::splice_stvar( res, tClosure_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // t.Fn t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Map, "Map" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elems( res, n5, n7 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
#ifdef OLD_PATTERN
    // t.Fn t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // t.Fn t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tFn_1},
      {refalrts::icSpliceSTVar, & tNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icCopySTVar, & tFn_1},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    // t.Fn
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
#ifdef OLD_PATTERN
    // t.Fn
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Fn
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // t.Fn t.Acc t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elems( res, n6, n7 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
#ifdef OLD_PATTERN
    // t.Fn t.Acc t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // t.Fn t.Acc t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reduce, (void*) "Reduce"},
      {refalrts::icSpliceSTVar, & tFn_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icCopySTVar, & tFn_1},
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icSpliceSTVar, & tNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    // t.Fn t.Acc
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
#ifdef OLD_PATTERN
    // t.Fn t.Acc
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Fn t.Acc
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFunction_1;
    refalrts::use( tFunction_1 );
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
    // e.Argument t.Function
    if( ! refalrts::tvar_right( tFunction_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, tFunction_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFunction_1;
    refalrts::use( tFunction_1 );
    static refalrts::Iter eArgument_b_1;
    refalrts::use( eArgument_b_1 );
    static refalrts::Iter eArgument_e_1;
    refalrts::use( eArgument_e_1 );
#ifdef OLD_PATTERN
    // e.Argument t.Function
    if( ! refalrts::tvar_right( tFunction_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
#else
    // e.Argument t.Function
    if( ! refalrts::tvar_right( tFunction_1, bb_0, be_0 ) ) 
      break;
    eArgument_b_1 = bb_0;
    refalrts::use( eArgument_b_1 );
    eArgument_e_1 = be_0;
    refalrts::use( eArgument_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icSpliceSTVar, & tFunction_1},
      {refalrts::icSpliceEVar, & eArgument_b_1, & eArgument_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eArgument_b_1, eArgument_e_1 );
    res = refalrts::splice_stvar( res, tFunction_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sY_Func_1;
    refalrts::use( sY_Func_1 );
    static refalrts::Iter eArg_b_1;
    refalrts::use( eArg_b_1 );
    static refalrts::Iter eArg_e_1;
    refalrts::use( eArg_e_1 );
    // s.Y_Func e.Arg
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Y, "Y" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sY_Func_2;
    refalrts::use( sY_Func_2 );
    if( ! refalrts::copy_stvar( sY_Func_2, sY_Func_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    res = refalrts::splice_elems( res, n6, n7 );
    res = refalrts::splice_stvar( res, sY_Func_2 );
    res = refalrts::splice_elems( res, n4, n5 );
    res = refalrts::splice_stvar( res, sY_Func_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sY_Func_1;
    refalrts::use( sY_Func_1 );
    static refalrts::Iter eArg_b_1;
    refalrts::use( eArg_b_1 );
    static refalrts::Iter eArg_e_1;
    refalrts::use( eArg_e_1 );
    static refalrts::Iter sY_Func_2;
    refalrts::use( sY_Func_2 );
#ifdef OLD_PATTERN
    // s.Y_Func e.Arg
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );
#else
    // s.Y_Func e.Arg
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icSpliceSTVar, & sY_Func_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Y, (void*) "Y"},
      {refalrts::icCopySTVar, & sY_Func_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eArg_b_1, & eArg_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sY_Func_2, sY_Func_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Y, "Y" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sY_Func_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sY_Func_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Y(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sY_Func_1;
    refalrts::use( sY_Func_1 );
    // s.Y_Func
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & lambda_Y_0, "lambda_Y_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sY_Func_1 );
    res = refalrts::splice_elems( res, n1, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sY_Func_1;
    refalrts::use( sY_Func_1 );
#ifdef OLD_PATTERN
    // s.Y_Func
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Y_Func
    if( ! refalrts::svar_left( sY_Func_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_Y_0, (void*) "lambda_Y_0"},
      {refalrts::icSpliceSTVar, & sY_Func_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & lambda_Y_0, "lambda_Y_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sY_Func_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // t.Fn t.Acc e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & DoMapReduce, "DoMapReduce" ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n5, n6 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
#ifdef OLD_PATTERN
    // t.Fn t.Acc e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // t.Fn t.Acc e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoMapReduce, (void*) "DoMapReduce"},
      {refalrts::icSpliceSTVar, & tFn_1},
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & DoMapReduce, "DoMapReduce" ) )
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
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // t.Fn t.Acc (~1 e.Scanned )~1 t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & DoMapReduce, "DoMapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & MapReduce__AddScanned, "MapReduce__AddScanned" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n2, n4 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elems( res, n9, n12 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elems( res, n7, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tNext_1;
    refalrts::use( tNext_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter tFn_2;
    refalrts::use( tFn_2 );
#ifdef OLD_PATTERN
    // t.Fn t.Acc (~1 e.Scanned )~1 t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // t.Fn t.Acc (~1 e.Scanned )~1 t.Next e.Tail
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tNext_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoMapReduce, (void*) "DoMapReduce"},
      {refalrts::icSpliceSTVar, & tFn_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce__AddScanned, (void*) "MapReduce__AddScanned"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Apply, (void*) "Apply"},
      {refalrts::icCopySTVar, & tFn_1},
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icSpliceSTVar, & tNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( tFn_2, tFn_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & DoMapReduce, "DoMapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & MapReduce__AddScanned, "MapReduce__AddScanned" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Apply, "Apply" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
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
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, tNext_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    res = refalrts::splice_stvar( res, tFn_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, tFn_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    // t.Fn t.Acc (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter tFn_1;
    refalrts::use( tFn_1 );
#ifdef OLD_PATTERN
    // t.Fn t.Acc (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Fn t.Acc (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tFn_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MapReduce__AddScanned(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eStepScanned_b_1;
    refalrts::use( eStepScanned_b_1 );
    static refalrts::Iter eStepScanned_e_1;
    refalrts::use( eStepScanned_e_1 );
    // t.Acc e.StepScanned (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eStepScanned_b_1 = bb_0;
    refalrts::use( eStepScanned_b_1 );
    eStepScanned_e_1 = be_0;
    refalrts::use( eStepScanned_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eStepScanned_b_1, eStepScanned_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eStepScanned_b_1;
    refalrts::use( eStepScanned_b_1 );
    static refalrts::Iter eStepScanned_e_1;
    refalrts::use( eStepScanned_e_1 );
#ifdef OLD_PATTERN
    // t.Acc e.StepScanned (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eStepScanned_b_1 = bb_0;
    refalrts::use( eStepScanned_b_1 );
    eStepScanned_e_1 = be_0;
    refalrts::use( eStepScanned_e_1 );
#else
    // t.Acc e.StepScanned (~1 e.Scanned )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eStepScanned_b_1 = bb_0;
    refalrts::use( eStepScanned_b_1 );
    eStepScanned_e_1 = be_0;
    refalrts::use( eStepScanned_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tAcc_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icSpliceEVar, & eStepScanned_b_1, & eStepScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eStepScanned_b_1, eStepScanned_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, tAcc_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eExpr_b_1;
    refalrts::use( eExpr_b_1 );
    static refalrts::Iter eExpr_e_1;
    refalrts::use( eExpr_e_1 );
    // (~1 e.Expr )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eExpr_b_1 = bb_1;
    refalrts::use( eExpr_b_1 );
    eExpr_e_1 = be_1;
    refalrts::use( eExpr_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eExpr_b_1, eExpr_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eExpr_b_1;
    refalrts::use( eExpr_b_1 );
    static refalrts::Iter eExpr_e_1;
    refalrts::use( eExpr_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Expr )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eExpr_b_1 = bb_1;
    refalrts::use( eExpr_b_1 );
    eExpr_e_1 = be_1;
    refalrts::use( eExpr_e_1 );
#else
    // (~1 e.Expr )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eExpr_b_1 = bb_1;
    refalrts::use( eExpr_b_1 );
    eExpr_e_1 = be_1;
    refalrts::use( eExpr_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eExpr_b_1, & eExpr_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eExpr_b_1, eExpr_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult DelAccummulator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // t.Acc e.Tail
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter tAcc_1;
    refalrts::use( tAcc_1 );
#ifdef OLD_PATTERN
    // t.Acc e.Tail
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // t.Acc e.Tail
    if( ! refalrts::tvar_left( tAcc_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elems( res, n8, n10 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n1, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
#ifdef OLD_PATTERN
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#else
    // e.FileName
    eFileName_b_1 = bb_0;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_0;
    refalrts::use( eFileName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLoadFile, (void*) "DoLoadFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FReadLine, (void*) "FReadLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FOpen, (void*) "FOpen"},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
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
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoLoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    // t.File 0
    refalrts::Iter n1;
    if( (n1 = refalrts::number_right( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
#ifdef OLD_PATTERN
    // t.File 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.File 0
    refalrts::Iter n1;
    if( (n1 = refalrts::number_right( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icSpliceSTVar, & tFile_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // t.File e.Line 0
    refalrts::Iter n2;
    if( (n2 = refalrts::number_right( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    if( ! refalrts::alloc_name( n6, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n3, n4 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elems( res, n4, n6 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // t.File e.Line 0
    if( ! refalrts::number_right( 0UL, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // t.File e.Line 0
    refalrts::Iter n2;
    if( (n2 = refalrts::number_right( 0UL, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FClose, (void*) "FClose"},
      {refalrts::icSpliceSTVar, & tFile_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n6, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // t.File e.Line
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    if( ! refalrts::alloc_name( n5, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n2, n3 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elems( res, n3, n7 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // t.File e.Line
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // t.File e.Line
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLoadFile, (void*) "DoLoadFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FReadLine, (void*) "FReadLine"},
      {refalrts::icSpliceSTVar, & tFile_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n5, & DoLoadFile, "DoLoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & FReadLine, "FReadLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eLines_b_1;
    refalrts::use( eLines_b_1 );
    static refalrts::Iter eLines_e_1;
    refalrts::use( eLines_e_1 );
    // (~1 e.FileName )~1 e.Lines
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eLines_b_1 = bb_0;
    refalrts::use( eLines_b_1 );
    eLines_e_1 = be_0;
    refalrts::use( eLines_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & WriteBracketLine, "WriteBracketLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'w' ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    refalrts::reinit_name( n2, & FClose, "FClose" );
    //}}} REINITS
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elems( res, n4, n9 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eFileName_b_1;
    refalrts::use( eFileName_b_1 );
    static refalrts::Iter eFileName_e_1;
    refalrts::use( eFileName_e_1 );
    static refalrts::Iter eLines_b_1;
    refalrts::use( eLines_b_1 );
    static refalrts::Iter eLines_e_1;
    refalrts::use( eLines_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.FileName )~1 e.Lines
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eLines_b_1 = bb_0;
    refalrts::use( eLines_b_1 );
    eLines_e_1 = be_0;
    refalrts::use( eLines_e_1 );
#else
    // (~1 e.FileName )~1 e.Lines
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eFileName_b_1 = bb_1;
    refalrts::use( eFileName_b_1 );
    eFileName_e_1 = be_1;
    refalrts::use( eFileName_e_1 );
    eLines_b_1 = bb_0;
    refalrts::use( eLines_b_1 );
    eLines_e_1 = be_0;
    refalrts::use( eLines_e_1 );
#endif
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
      {refalrts::icSpliceEVar, & eFileName_b_1, & eFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eLines_b_1, & eLines_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FClose, "FClose" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & WriteBracketLine, "WriteBracketLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & FOpen, "FOpen" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eLines_b_1, eLines_e_1 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult WriteBracketLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
    // t.File (~1 e.Line )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eLine_b_1 = bb_1;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_1;
    refalrts::use( eLine_e_1 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n3, & FWriteLine, "FWriteLine" );
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    static refalrts::Iter tFile_1;
    refalrts::use( tFile_1 );
#ifdef OLD_PATTERN
    // t.File (~1 e.Line )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_1;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_1;
    refalrts::use( eLine_e_1 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.File (~1 e.Line )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eLine_b_1 = bb_1;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_1;
    refalrts::use( eLine_e_1 );
    if( ! refalrts::tvar_left( tFile_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FWriteLine, (void*) "FWriteLine"},
      {refalrts::icSpliceSTVar, & tFile_1},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FWriteLine, "FWriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_stvar( res, tFile_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Add, (void*) "Add"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Sub, "Sub" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Num
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Sub, (void*) "Sub"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Sub, "Sub" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // & Success s.Number
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Success, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sNumber_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // & Success s.Number
    if( ! refalrts::function_left( & Success, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & Success s.Number
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & Success, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sNumber_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult FastIntFromStr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eDigits_b_1;
    refalrts::use( eDigits_b_1 );
    static refalrts::Iter eDigits_e_1;
    refalrts::use( eDigits_e_1 );
    // e.Digits
    eDigits_b_1 = bb_0;
    refalrts::use( eDigits_b_1 );
    eDigits_e_1 = be_0;
    refalrts::use( eDigits_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & FastIntFromStr_Guard, "FastIntFromStr_Guard" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & IntFromStr, "IntFromStr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n6 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
    res = refalrts::splice_elems( res, n1, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eDigits_b_1;
    refalrts::use( eDigits_b_1 );
    static refalrts::Iter eDigits_e_1;
    refalrts::use( eDigits_e_1 );
#ifdef OLD_PATTERN
    // e.Digits
    eDigits_b_1 = bb_0;
    refalrts::use( eDigits_b_1 );
    eDigits_e_1 = be_0;
    refalrts::use( eDigits_e_1 );
#else
    // e.Digits
    eDigits_b_1 = bb_0;
    refalrts::use( eDigits_b_1 );
    eDigits_e_1 = be_0;
    refalrts::use( eDigits_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FastIntFromStr_Guard, (void*) "FastIntFromStr_Guard"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & IntFromStr, (void*) "IntFromStr"},
      {refalrts::icSpliceEVar, & eDigits_b_1, & eDigits_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & FastIntFromStr_Guard, "FastIntFromStr_Guard" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & IntFromStr, "IntFromStr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elems( res, n0, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
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
  } while ( 0 );
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
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & SwDoArgList, "SwDoArgList" ) )
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Arg, "Arg" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sNext_2;
    refalrts::use( sNext_2 );
    if( ! refalrts::copy_stvar( sNext_2, sNext_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n9 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_stvar( res, sNext_2 );
    res = refalrts::splice_elems( res, n5, n7 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elems( res, n1, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
    static refalrts::Iter sNext_2;
    refalrts::use( sNext_2 );
#ifdef OLD_PATTERN
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwDoArgList, (void*) "SwDoArgList"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Arg, (void*) "Arg"},
      {refalrts::icCopySTVar, & sNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sNext_2, sNext_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & SwDoArgList, "SwDoArgList" ) )
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Arg, "Arg" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNext_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwDoArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
#ifdef OLD_PATTERN
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Next
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
    static refalrts::Iter eArg_b_1;
    refalrts::use( eArg_b_1 );
    static refalrts::Iter eArg_e_1;
    refalrts::use( eArg_e_1 );
    // s.Next e.Arg
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    if( ! refalrts::alloc_name( n5, & DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n2, n3 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elems( res, n3, n5 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNext_1;
    refalrts::use( sNext_1 );
    static refalrts::Iter eArg_b_1;
    refalrts::use( eArg_b_1 );
    static refalrts::Iter eArg_e_1;
    refalrts::use( eArg_e_1 );
#ifdef OLD_PATTERN
    // s.Next e.Arg
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );
#else
    // s.Next e.Arg
    if( ! refalrts::svar_left( sNext_1, bb_0, be_0 ) ) 
      break;
    eArg_b_1 = bb_0;
    refalrts::use( eArg_b_1 );
    eArg_e_1 = be_0;
    refalrts::use( eArg_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eArg_b_1, & eArg_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoArgList, (void*) "DoArgList"},
      {refalrts::icSpliceSTVar, & sNext_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n5, & DoArgList, "DoArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eArg_b_1, eArg_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Lexicon, "Lexicon" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n6, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon, (void*) "Lexicon"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Lexicon, "Lexicon" ) )
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
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '>' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
#ifdef OLD_PATTERN
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '>' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, '<' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
#ifdef OLD_PATTERN
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '<' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
#ifdef OLD_PATTERN
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbCompare, (void*) "SymbCompare"},
      {refalrts::icSpliceSTVar, & sLeft_1},
      {refalrts::icSpliceSTVar, & sRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFirstLeft_1;
    refalrts::use( tFirstLeft_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter tFirstRight_1;
    refalrts::use( tFirstRight_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 t.FirstLeft e.Left )~1 (~2 t.FirstRight e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_1, be_1 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_2, be_2 ) ) 
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Lexicon_Aux, "Lexicon_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Compare, "Compare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    refalrts::link_brackets( n4, n7 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, tFirstRight_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1 );
    res = refalrts::splice_elems( res, n8, n11 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFirstLeft_1;
    refalrts::use( tFirstLeft_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter tFirstRight_1;
    refalrts::use( tFirstRight_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 t.FirstLeft e.Left )~1 (~2 t.FirstRight e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_1, be_1 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_2, be_2 ) ) 
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // (~1 t.FirstLeft e.Left )~1 (~2 t.FirstRight e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_1, be_1 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_2, be_2 ) ) 
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_Aux, (void*) "Lexicon_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compare, (void*) "Compare"},
      {refalrts::icSpliceSTVar, & tFirstLeft_1},
      {refalrts::icSpliceSTVar, & tFirstRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Lexicon_Aux, "Lexicon_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Compare, "Compare" ) )
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
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n15, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, tFirstRight_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    // (~1 )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n1 = 0; // Right
    if( ! refalrts::brackets_match( n1, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n2 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '=' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // (~1 )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n1 = 0; // Right
    if( ! refalrts::brackets_match( n1, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n2 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '=' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n1 = 0; // Right
    if( ! refalrts::brackets_match( n1, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '<' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // (~1 )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n1 = 0; // Right
    if( ! refalrts::brackets_match( n1, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '<' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    // (~1 e.Left )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '>' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Left )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
#else
    // (~1 e.Left )~1 (~2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '>' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Lexicon_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // '< (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '<', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // '< (~1 e.Left )~1 (~2 e.Right )~2
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // '< (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '<', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '<' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // '= (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '=', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Lexicon, "Lexicon" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    refalrts::link_brackets( n4, n6 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // '= (~1 e.Left )~1 (~2 e.Right )~2
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // '= (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '=', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon, (void*) "Lexicon"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Lexicon, "Lexicon" ) )
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
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // '> (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '>', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // '> (~1 e.Left )~1 (~2 e.Right )~2
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // '> (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '>', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '>' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Lexicon_T, "Lexicon_T" ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n8, n9 );
    refalrts::link_brackets( n10, n11 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n8, n10 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n6, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#else
    // (~1 e.Left )~1 (~2 e.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_2;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_2;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T, (void*) "Lexicon_T"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Lexicon_T, "Lexicon_T" ) )
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
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '>' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
#ifdef OLD_PATTERN
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.Left )~1 s.Right
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eLeft_b_1 = bb_1;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_1;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sRight_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '>' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sRight_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '<' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
#ifdef OLD_PATTERN
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Left (~1 e.Right )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eRight_b_1 = bb_1;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_1;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icSpliceSTVar, & sLeft_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '<' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sLeft_2;
    refalrts::use( sLeft_2 );
    if( ! refalrts::copy_stvar( sLeft_2, sLeft_1 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sRight_2;
    refalrts::use( sRight_2 );
    if( ! refalrts::copy_stvar( sRight_2, sRight_1 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_stvar( res, sRight_2 );
    res = refalrts::splice_stvar( res, sLeft_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    static refalrts::Iter sLeft_2;
    refalrts::use( sLeft_2 );
    static refalrts::Iter sRight_2;
    refalrts::use( sRight_2 );
#ifdef OLD_PATTERN
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Left s.Right
    if( ! refalrts::svar_left( sLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbCompare, (void*) "SymbCompare"},
      {refalrts::icSpliceSTVar, & sLeft_1},
      {refalrts::icSpliceSTVar, & sRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sLeft_1},
      {refalrts::icCopySTVar, & sRight_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sLeft_2, sLeft_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sRight_2, sRight_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbCompare, "SymbCompare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sRight_2 );
    res = refalrts::splice_stvar( res, sLeft_2 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_stvar( res, sLeft_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter tFirstLeft_1;
    refalrts::use( tFirstLeft_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter tFirstRight_1;
    refalrts::use( tFirstRight_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 e.ScannedLeft )~1 (~2 t.FirstLeft e.Left )~2 (~3 e.ScannedRight )~3 (~4 t.FirstRight e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n10 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_2, be_2 ) ) 
      break;
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_4, be_4 ) ) 
      break;
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Lexicon_T_Aux, "Lexicon_T_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & Compare_T, "Compare_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n6 );
    refalrts::link_brackets( n7, n9 );
    refalrts::link_brackets( n10, n13 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, tFirstRight_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1 );
    res = refalrts::splice_elems( res, n16, n17 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n14, n15 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter tFirstLeft_1;
    refalrts::use( tFirstLeft_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter tFirstRight_1;
    refalrts::use( tFirstRight_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 t.FirstLeft e.Left )~2 (~3 e.ScannedRight )~3 (~4 t.FirstRight e.Right )~4
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_2, be_2 ) ) 
      break;
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_4, be_4 ) ) 
      break;
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
#else
    // (~1 e.ScannedLeft )~1 (~2 t.FirstLeft e.Left )~2 (~3 e.ScannedRight )~3 (~4 t.FirstRight e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n10 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    if( ! refalrts::tvar_left( tFirstLeft_1, bb_2, be_2 ) ) 
      break;
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    if( ! refalrts::tvar_left( tFirstRight_1, bb_4, be_4 ) ) 
      break;
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T_Aux, (void*) "Lexicon_T_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compare_T, (void*) "Compare_T"},
      {refalrts::icSpliceSTVar, & tFirstLeft_1},
      {refalrts::icSpliceSTVar, & tFirstRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Lexicon_T_Aux, "Lexicon_T_Aux" ) )
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
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & Compare_T, "Compare_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n27 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n25, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n23, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_stvar( res, tFirstRight_1 );
    res = refalrts::splice_stvar( res, tFirstLeft_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n8;
    if( (n8 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n8 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n5, '=' );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 )~4
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
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
#else
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n8;
    if( (n8 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n8 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '=' ) )
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
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n8;
    if( (n8 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n8 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n5, '<' );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 e.Right )~4
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
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
#else
    // (~1 e.ScannedLeft )~1 (~2 )~2 (~3 e.ScannedRight )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n7 = 0; // Right
    if( ! refalrts::brackets_match( n7, n5 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n8;
    if( (n8 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n8 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '<' ) )
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
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    // (~1 e.ScannedLeft )~1 (~2 e.Left )~2 (~3 e.ScannedRight )~3 (~4 )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n9 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n6, '>' );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 e.Left )~2 (~3 e.ScannedRight )~3 (~4 )~4
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
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
#else
    // (~1 e.ScannedLeft )~1 (~2 e.Left )~2 (~3 e.ScannedRight )~3 (~4 )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n9 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eLeft_b_1 = bb_2;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_2;
    refalrts::use( eLeft_e_1 );
    eScannedRight_b_1 = bb_3;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_3;
    refalrts::use( eScannedRight_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '>' ) )
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
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Lexicon_T_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '< t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '<', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '< t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
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
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '< t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '<', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '<'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '<' ) )
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
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '= t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '=', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Lexicon_T, "Lexicon_T" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n6 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n9, n11 );
    refalrts::link_brackets( n12, n14 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '= t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
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
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '= t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '=', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lexicon_T, (void*) "Lexicon_T"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Lexicon_T, "Lexicon_T" ) )
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
    refalrts::push_stack( n25 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n23, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '> t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '>', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedLeft_b_1;
    refalrts::use( eScannedLeft_b_1 );
    static refalrts::Iter eScannedLeft_e_1;
    refalrts::use( eScannedLeft_e_1 );
    static refalrts::Iter eScannedRight_b_1;
    refalrts::use( eScannedRight_b_1 );
    static refalrts::Iter eScannedRight_e_1;
    refalrts::use( eScannedRight_e_1 );
    static refalrts::Iter eLeft_b_1;
    refalrts::use( eLeft_b_1 );
    static refalrts::Iter eLeft_e_1;
    refalrts::use( eLeft_e_1 );
    static refalrts::Iter eRight_b_1;
    refalrts::use( eRight_b_1 );
    static refalrts::Iter eRight_e_1;
    refalrts::use( eRight_e_1 );
    static refalrts::Iter tNextLeft_1;
    refalrts::use( tNextLeft_1 );
    static refalrts::Iter tNextRight_1;
    refalrts::use( tNextRight_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '> t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
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
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.ScannedLeft )~1 (~2 e.ScannedRight )~2 '> t.NextLeft t.NextRight (~3 e.Left )~3 (~4 e.Right )~4
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( '>', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n12;
    if( (n12 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n12 );
    refalrts::Iter n14 = 0; // Right
    if( ! refalrts::brackets_match( n14, n12 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eScannedLeft_b_1 = bb_1;
    refalrts::use( eScannedLeft_b_1 );
    eScannedLeft_e_1 = be_1;
    refalrts::use( eScannedLeft_e_1 );
    eScannedRight_b_1 = bb_2;
    refalrts::use( eScannedRight_b_1 );
    eScannedRight_e_1 = be_2;
    refalrts::use( eScannedRight_e_1 );
    eLeft_b_1 = bb_3;
    refalrts::use( eLeft_b_1 );
    eLeft_e_1 = be_3;
    refalrts::use( eLeft_e_1 );
    eRight_b_1 = bb_4;
    refalrts::use( eRight_b_1 );
    eRight_e_1 = be_4;
    refalrts::use( eRight_e_1 );
    if( ! refalrts::tvar_left( tNextLeft_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tNextRight_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '>'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedLeft_b_1, & eScannedLeft_e_1},
      {refalrts::icSpliceSTVar, & tNextLeft_1},
      {refalrts::icSpliceEVar, & eLeft_b_1, & eLeft_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedRight_b_1, & eScannedRight_e_1},
      {refalrts::icSpliceSTVar, & tNextRight_1},
      {refalrts::icSpliceEVar, & eRight_b_1, & eRight_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '>' ) )
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
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eRight_b_1, eRight_e_1 );
    res = refalrts::splice_stvar( res, tNextRight_1 );
    res = refalrts::splice_evar( res, eScannedRight_b_1, eScannedRight_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eLeft_b_1, eLeft_e_1 );
    res = refalrts::splice_stvar( res, tNextLeft_1 );
    res = refalrts::splice_evar( res, eScannedLeft_b_1, eScannedLeft_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult SymbType(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult TypeBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Type(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eInBracket_b_1;
    refalrts::use( eInBracket_b_1 );
    static refalrts::Iter eInBracket_e_1;
    refalrts::use( eInBracket_e_1 );
    // (~1 e.InBracket )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eInBracket_b_1 = bb_1;
    refalrts::use( eInBracket_b_1 );
    eInBracket_e_1 = be_1;
    refalrts::use( eInBracket_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & TypeBracket, "TypeBracket" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eInBracket_b_1;
    refalrts::use( eInBracket_b_1 );
    static refalrts::Iter eInBracket_e_1;
    refalrts::use( eInBracket_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.InBracket )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eInBracket_b_1 = bb_1;
    refalrts::use( eInBracket_b_1 );
    eInBracket_e_1 = be_1;
    refalrts::use( eInBracket_e_1 );
#else
    // (~1 e.InBracket )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eInBracket_b_1 = bb_1;
    refalrts::use( eInBracket_b_1 );
    eInBracket_e_1 = be_1;
    refalrts::use( eInBracket_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TypeBracket, (void*) "TypeBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TypeBracket, "TypeBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sSymbol_1;
    refalrts::use( sSymbol_1 );
    // s.Symbol
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sSymbol_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sSymbol_1;
    refalrts::use( sSymbol_1 );
#ifdef OLD_PATTERN
    // s.Symbol
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Symbol
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbType, (void*) "SymbType"},
      {refalrts::icSpliceSTVar, & sSymbol_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sSymbol_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Type_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eInBrackets_b_1;
    refalrts::use( eInBrackets_b_1 );
    static refalrts::Iter eInBrackets_e_1;
    refalrts::use( eInBrackets_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // (~1 e.InBrackets )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eInBrackets_b_1 = bb_1;
    refalrts::use( eInBrackets_b_1 );
    eInBrackets_e_1 = be_1;
    refalrts::use( eInBrackets_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TypeBracket, "TypeBracket" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eInBrackets_b_1, eInBrackets_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eInBrackets_b_1;
    refalrts::use( eInBrackets_b_1 );
    static refalrts::Iter eInBrackets_e_1;
    refalrts::use( eInBrackets_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.InBrackets )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eInBrackets_b_1 = bb_1;
    refalrts::use( eInBrackets_b_1 );
    eInBrackets_e_1 = be_1;
    refalrts::use( eInBrackets_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // (~1 e.InBrackets )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eInBrackets_b_1 = bb_1;
    refalrts::use( eInBrackets_b_1 );
    eInBrackets_e_1 = be_1;
    refalrts::use( eInBrackets_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & TypeBracket, (void*) "TypeBracket"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eInBrackets_b_1, & eInBrackets_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TypeBracket, "TypeBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInBrackets_b_1, eInBrackets_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sSymbol_1;
    refalrts::use( sSymbol_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // s.Symbol e.Tail
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sSymbol_2;
    refalrts::use( sSymbol_2 );
    if( ! refalrts::copy_stvar( sSymbol_2, sSymbol_1 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sSymbol_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sSymbol_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sSymbol_1;
    refalrts::use( sSymbol_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sSymbol_2;
    refalrts::use( sSymbol_2 );
#ifdef OLD_PATTERN
    // s.Symbol e.Tail
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // s.Symbol e.Tail
    if( ! refalrts::svar_left( sSymbol_1, bb_0, be_0 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SymbType, (void*) "SymbType"},
      {refalrts::icSpliceSTVar, & sSymbol_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sSymbol_1},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sSymbol_2, sSymbol_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & SymbType, "SymbType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sSymbol_2 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sSymbol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '*' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
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
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // '  e.Line
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( ' ', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // '  e.Line
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // '  e.Line
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( ' ', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // '\t e.Line
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // '\t e.Line
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // '\t e.Line
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim, (void*) "Trim"},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Trim, "Trim" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Trim_R(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // e.Line ' '
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( ' ', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // e.Line ' '
    if( ! refalrts::char_right( ' ', bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // e.Line ' '
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( ' ', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // e.Line '\t'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // e.Line '\t'
    if( ! refalrts::char_right( '\t', bb_0, be_0 ) ) 
      break;
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // e.Line '\t'
    refalrts::Iter n1;
    if( (n1 = refalrts::char_right( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Trim_R, (void*) "Trim_R"},
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Trim_R, "Trim_R" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eLine_b_1;
    refalrts::use( eLine_b_1 );
    static refalrts::Iter eLine_e_1;
    refalrts::use( eLine_e_1 );
#ifdef OLD_PATTERN
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#else
    // e.Line
    eLine_b_1 = bb_0;
    refalrts::use( eLine_b_1 );
    eLine_e_1 = be_0;
    refalrts::use( eLine_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eLine_b_1, & eLine_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}


//End of file
