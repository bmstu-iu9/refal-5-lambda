// Automatically generated file. Don't edit!
#include "refalrts.h"


refalrts::FnResult Apply(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sFn_1_1 = 2 };
    enum { __eArgument_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sFn_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eArgument_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sFn_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArgument_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Fn#1 e.Argument#1
    if( ! refalrts::svar_left( context[__sFn_1_1], context[0], context[1] ) )
      break;
    context[__eArgument_1_1] = context[0];
    context[__eArgument_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eArgument_1_1], context[__eArgument_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sFn_1_1] );
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
    enum { __eArgument_1_1 = 4 };
    enum { __tClosure_1_1 = 6 };
    enum { __eBounded_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Apply, "Apply" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eArgument_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tClosure_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eBounded_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tClosure_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eBounded_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArgument_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( t.Closure#1 e.Bounded#1 ) e.Argument#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eArgument_1_1] = context[0];
    context[__eArgument_1_1 + 1] = context[1];
    if( ! refalrts::tvar_left( context[__tClosure_1_1], context[2], context[3] ) )
      break;
    context[__eBounded_1_1] = context[2];
    context[__eBounded_1_1 + 1] = context[3];

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
    res = refalrts::splice_evar( res, context[__eArgument_1_1], context[__eArgument_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eBounded_1_1], context[__eBounded_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tClosure_1_1] );
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tFn_1_1 = 2 };
    enum { __tNext_1_1 = 3 };
    enum { __eTail_1_1 = 4 };
    enum { __tFn_1_2 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Map, "Map" },
      { & Apply, "Apply" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tNext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Next#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tNext_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tFn_1_2], context[__tFn_1_1] ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tFn_1_2] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tNext_1_1] );
    res = refalrts::splice_stvar( res, context[__tFn_1_1] );
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
    enum { __tFn_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
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

refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __tFn_1_1 = 2 };
    enum { __tAcc_1_1 = 3 };
    enum { __tNext_1_1 = 4 };
    enum { __eTail_1_1 = 5 };
    enum { __tFn_1_2 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Apply, "Apply" },
      { & Reduce, "Reduce" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tNext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Acc#1 t.Next#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tNext_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tFn_1_2], context[__tFn_1_1] ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tNext_1_1] );
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
    res = refalrts::splice_stvar( res, context[__tFn_1_2] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tFn_1_1] );
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
    enum { __tAcc_1_1 = 2 };
    enum { __tFn_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Acc#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
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
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tFunction_1_1 = 2 };
    enum { __eArgument_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Apply, "Apply" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarRight, 0, 0, __tFunction_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eArgument_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFunction_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArgument_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Argument#1 t.Function#1
    if( ! refalrts::tvar_right( context[__tFunction_1_1], context[0], context[1] ) )
      break;
    context[__eArgument_1_1] = context[0];
    context[__eArgument_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eArgument_1_1], context[__eArgument_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tFunction_1_1] );
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
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sFunc_1_1 = 2 };
    enum { __eArg_2_1 = 3 };
    enum { __sFunc_1_2 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Y, "Y" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eArg_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArg_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Func#1 e.Arg#2
    if( ! refalrts::svar_left( context[__sFunc_1_1], context[0], context[1] ) )
      break;
    context[__eArg_2_1] = context[0];
    context[__eArg_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sFunc_1_2], context[__sFunc_1_1] ) )
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
    res = refalrts::splice_evar( res, context[__eArg_2_1], context[__eArg_2_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sFunc_1_2] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sFunc_1_1] );
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
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sFunc_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_Y_0, "lambda_Y_0" },
      { & refalrts::create_closure, "refalrts::create_closure" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sFunc_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Func#1
    if( ! refalrts::svar_left( context[__sFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__sFunc_1_1] );
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
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __tFn_1_1 = 2 };
    enum { __tAcc_1_1 = 3 };
    enum { __eTail_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoMapReduce, "DoMapReduce" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Acc#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
    res = refalrts::splice_stvar( res, context[__tFn_1_1] );
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tFn_1_1 = 4 };
    enum { __tAcc_1_1 = 5 };
    enum { __eScanned_1_1 = 6 };
    enum { __tNext_1_1 = 8 };
    enum { __eTail_1_1 = 9 };
    enum { __tFn_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Apply, "Apply" },
      { & MapReduce__AddScanned, "MapReduce__AddScanned" },
      { & DoMapReduce, "DoMapReduce" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 2},
      {refalrts::ictVarLeft, 0, 0, __tNext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __tFn_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Acc#1 ( e.Scanned#1 ) t.Next#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tNext_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__tFn_1_2], context[__tFn_1_1] ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__tNext_1_1] );
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
    res = refalrts::splice_stvar( res, context[__tFn_1_2] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tFn_1_1] );
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
    enum { __eScanned_1_1 = 4 };
    enum { __tAcc_1_1 = 6 };
    enum { __tFn_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 2},
      {refalrts::ictVarLeft, 0, 0, __tFn_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Fn#1 t.Acc#1 ( e.Scanned#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tFn_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
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
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eScanned_1_1 = 4 };
    enum { __tAcc_1_1 = 6 };
    enum { __eStepScanned_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 2},
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eStepScanned_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tAcc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eStepScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Acc#1 e.StepScanned#1 ( e.Scanned#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    context[__eStepScanned_1_1] = context[0];
    context[__eStepScanned_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eStepScanned_1_1], context[__eStepScanned_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tAcc_1_1] );
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
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eExpr_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eExpr_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eExpr_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Expr#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eExpr_1_1] = context[2];
    context[__eExpr_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eExpr_1_1], context[__eExpr_1_1 + 1] );
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
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __eTail_1_1 = 2 };
    enum { __tAcc_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tAcc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Acc#1 e.Tail#1
    if( ! refalrts::tvar_left( context[__tAcc_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eFileName_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FOpen, "FOpen" },
      { & FReadLine, "FReadLine" },
      { & DoLoadFile, "DoLoadFile" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.FileName#1
    context[__eFileName_1_1] = context[0];
    context[__eFileName_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tFile_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FClose, "FClose" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icNumRight, 0, 0, 0, 0},
      {refalrts::ictVarLeft, 0, 0, __tFile_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFile_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.File#1 0
    if( ! refalrts::number_right( 0UL, context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tFile_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__tFile_1_1] );
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
    enum { __tFile_1_1 = 2 };
    enum { __eLine_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FClose, "FClose" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icNumRight, 0, 0, 0, 0},
      {refalrts::ictVarLeft, 0, 0, __tFile_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFile_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.File#1 e.Line#1 0
    if( ! refalrts::number_right( 0UL, context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tFile_1_1], context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_stvar( res, context[__tFile_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __tFile_1_1 = 2 };
    enum { __eLine_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FReadLine, "FReadLine" },
      { & DoLoadFile, "DoLoadFile" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFile_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFile_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.File#1 e.Line#1
    if( ! refalrts::tvar_left( context[__tFile_1_1], context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_stvar( res, context[__tFile_1_1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eFileName_1_1 = 4 };
    enum { __eLines_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FOpen, "FOpen" },
      { & WriteBracketLine, "WriteBracketLine" },
      { & Reduce, "Reduce" },
      { & FClose, "FClose" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLines_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'w', 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLines_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.FileName#1 ) e.Lines#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[2];
    context[__eFileName_1_1 + 1] = context[3];
    context[__eLines_1_1] = context[0];
    context[__eLines_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLines_1_1], context[__eLines_1_1 + 1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eLine_1_1 = 4 };
    enum { __tFile_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FWriteLine, "FWriteLine" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 2},
      {refalrts::ictVarLeft, 0, 0, __tFile_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFile_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.File#1 ( e.Line#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[2];
    context[__eLine_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tFile_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tFile_1_1] );
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
      { & Add, "Add" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
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
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
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
      { & Sub, "Sub" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
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
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
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
    static const refalrts::RefalFunction functions[] = {
      { & Success, "Success" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icsVarLeft, 0, 0, __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // & Success s.Number#1
    if( ! refalrts::function_left( & Success, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eDigits_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & IntFromStr, "IntFromStr" },
      { & FastIntFromStr_Guard, "FastIntFromStr_Guard" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eDigits_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eDigits_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Digits#1
    context[__eDigits_1_1] = context[0];
    context[__eDigits_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eDigits_1_1], context[__eDigits_1_1 + 1] );
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
      { & DoArgList, "DoArgList" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __sNext_1_1 = 2 };
    enum { __sNext_1_2 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Arg, "Arg" },
      { & Inc, "Inc" },
      { & SwDoArgList, "SwDoArgList" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sNext_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Next#1
    if( ! refalrts::svar_left( context[__sNext_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNext_1_2], context[__sNext_1_1] ) )
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
    res = refalrts::splice_stvar( res, context[__sNext_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNext_1_1] );
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
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNext_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sNext_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Next#1
    if( ! refalrts::svar_left( context[__sNext_1_1], context[0], context[1] ) )
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

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sNext_1_1 = 2 };
    enum { __eArg_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoArgList, "DoArgList" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sNext_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eArg_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArg_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNext_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Next#1 e.Arg#1
    if( ! refalrts::svar_left( context[__sNext_1_1], context[0], context[1] ) )
      break;
    context[__eArg_1_1] = context[0];
    context[__eArg_1_1 + 1] = context[1];

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
    res = refalrts::splice_stvar( res, context[__sNext_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eArg_1_1], context[__eArg_1_1 + 1] );
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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eLeft_1_1 = 6 };
    enum { __eRight_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Lexicon, "Lexicon" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Left#1 ) ( e.Right#1 )
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
    context[__eLeft_1_1] = context[2];
    context[__eLeft_1_1 + 1] = context[3];
    context[__eRight_1_1] = context[4];
    context[__eRight_1_1 + 1] = context[5];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
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
    enum { __sRight_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 0, __sRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Left#1 ) s.Right#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Left#1
    if( ! refalrts::svar_left( context[__sRight_1_1], context[0], context[1] ) )
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
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLeft_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icsVarLeft, 0, 0, __sLeft_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Left#1 ( e.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Right#1
    if( ! refalrts::svar_left( context[__sLeft_1_1], context[0], context[1] ) )
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __sLeft_1_1 = 2 };
    enum { __sRight_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & SymbCompare, "SymbCompare" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sLeft_1_1, 0},
      {refalrts::icsVarLeft, 0, 0, __sRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Left#1 s.Right#1
    if( ! refalrts::svar_left( context[__sLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__sRight_1_1] );
    res = refalrts::splice_stvar( res, context[__sLeft_1_1] );
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __tFirstLeft_1_1 = 6 };
    enum { __eLeft_1_1 = 7 };
    enum { __tFirstRight_1_1 = 9 };
    enum { __eRight_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Compare, "Compare" },
      { & Lexicon_Aux, "Lexicon_Aux" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::ictVarLeft, 0, 0, __tFirstLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 2},
      {refalrts::ictVarLeft, 0, 0, __tFirstRight_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFirstLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFirstRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( t.FirstLeft#1 e.Left#1 ) ( t.FirstRight#1 e.Right#1 )
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
    if( ! refalrts::tvar_left( context[__tFirstLeft_1_1], context[2], context[3] ) )
      break;
    context[__eLeft_1_1] = context[2];
    context[__eLeft_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tFirstRight_1_1], context[4], context[5] ) )
      break;
    context[__eRight_1_1] = context[4];
    context[__eRight_1_1 + 1] = context[5];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__tFirstRight_1_1] );
    res = refalrts::splice_stvar( res, context[__tFirstLeft_1_1] );
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
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '=', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( ) ( )
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
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( ) ( e.Right#1 )
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
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Right#1

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
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Left#1 ) ( )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Left#1

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
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'<', 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '< ( e.Left#1 ) ( e.Right#1 )
    if( ! refalrts::char_left( '<', context[0], context[1] ) )
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
    // Unused closed variable e.Left#1
    // Unused closed variable e.Right#1

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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eLeft_1_1 = 6 };
    enum { __eRight_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Lexicon, "Lexicon" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'=', 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '= ( e.Left#1 ) ( e.Right#1 )
    if( ! refalrts::char_left( '=', context[0], context[1] ) )
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
    context[__eLeft_1_1] = context[2];
    context[__eLeft_1_1 + 1] = context[3];
    context[__eRight_1_1] = context[4];
    context[__eRight_1_1 + 1] = context[5];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'>', 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '> ( e.Left#1 ) ( e.Right#1 )
    if( ! refalrts::char_left( '>', context[0], context[1] ) )
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
    // Unused closed variable e.Left#1
    // Unused closed variable e.Right#1

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
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eLeft_1_1 = 6 };
    enum { __eRight_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Lexicon_T, "Lexicon_T" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Left#1 ) ( e.Right#1 )
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
    context[__eLeft_1_1] = context[2];
    context[__eLeft_1_1 + 1] = context[3];
    context[__eRight_1_1] = context[4];
    context[__eRight_1_1 + 1] = context[5];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eLeft_1_1 = 4 };
    enum { __sRight_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 2},
      {refalrts::icsVarLeft, 0, 0, __sRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sRight_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Left#1 ) s.Right#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eLeft_1_1] = context[2];
    context[__eLeft_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__sRight_1_1] );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
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
    enum { __eRight_1_1 = 4 };
    enum { __sLeft_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 2},
      {refalrts::icsVarLeft, 0, 0, __sLeft_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Left#1 ( e.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eRight_1_1] = context[2];
    context[__eRight_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sLeft_1_1] );
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
    enum { __sLeft_1_1 = 2 };
    enum { __sRight_1_1 = 3 };
    enum { __sLeft_1_2 = 4 };
    enum { __sRight_1_2 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & SymbCompare, "SymbCompare" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sLeft_1_1, 0},
      {refalrts::icsVarLeft, 0, 0, __sRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopySTVar, 0, 0, __sLeft_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sRight_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Left#1 s.Right#1
    if( ! refalrts::svar_left( context[__sLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sLeft_1_2], context[__sLeft_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sRight_1_2], context[__sRight_1_1] ) )
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
    res = refalrts::splice_stvar( res, context[__sRight_1_2] );
    res = refalrts::splice_stvar( res, context[__sLeft_1_2] );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sRight_1_1] );
    res = refalrts::splice_stvar( res, context[__sLeft_1_1] );
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
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    enum { __tFirstLeft_1_1 = 14 };
    enum { __eLeft_1_1 = 15 };
    enum { __tFirstRight_1_1 = 17 };
    enum { __eRight_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Compare_T, "Compare_T" },
      { & Lexicon_T_Aux, "Lexicon_T_Aux" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 6},
      {refalrts::ictVarLeft, 0, 0, __tFirstLeft_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 4},
      {refalrts::ictVarLeft, 0, 0, __tFirstRight_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFirstLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFirstRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( t.FirstLeft#1 e.Left#1 ) ( e.ScannedRight#1 ) ( t.FirstRight#1 e.Right#1 )
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
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[6];
    context[__eScannedRight_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tFirstLeft_1_1], context[4], context[5] ) )
      break;
    context[__eLeft_1_1] = context[4];
    context[__eLeft_1_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tFirstRight_1_1], context[8], context[9] ) )
      break;
    context[__eRight_1_1] = context[8];
    context[__eRight_1_1 + 1] = context[9];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__tFirstRight_1_1] );
    res = refalrts::splice_stvar( res, context[__tFirstLeft_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
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
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '=', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( ) ( e.ScannedRight#1 ) ( )
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
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[6];
    context[__eScannedRight_1_1 + 1] = context[7];

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
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    enum { __eRight_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( ) ( e.ScannedRight#1 ) ( e.Right#1 )
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
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[6];
    context[__eScannedRight_1_1 + 1] = context[7];
    context[__eRight_1_1] = context[8];
    context[__eRight_1_1 + 1] = context[9];

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eLeft_1_1 = 12 };
    enum { __eScannedRight_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( e.Left#1 ) ( e.ScannedRight#1 ) ( )
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
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eLeft_1_1] = context[4];
    context[__eLeft_1_1 + 1] = context[5];
    context[__eScannedRight_1_1] = context[6];
    context[__eScannedRight_1_1 + 1] = context[7];

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
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
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
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    enum { __eLeft_1_1 = 14 };
    enum { __eRight_1_1 = 16 };
    enum { __tNextLeft_1_1 = 18 };
    enum { __tNextRight_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icCharLeft, 0, 0, (int)'<', 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icBracketRight, 0, 0, 8, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 6},
      {refalrts::ictVarLeft, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '<', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( e.ScannedRight#1 ) '< t.NextLeft#1 t.NextRight#1 ( e.Left#1 ) ( e.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '<', context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[4];
    context[__eScannedRight_1_1 + 1] = context[5];
    context[__eLeft_1_1] = context[8];
    context[__eLeft_1_1 + 1] = context[9];
    context[__eRight_1_1] = context[6];
    context[__eRight_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tNextLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tNextRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tNextRight_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tNextLeft_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    enum { __eLeft_1_1 = 14 };
    enum { __eRight_1_1 = 16 };
    enum { __tNextLeft_1_1 = 18 };
    enum { __tNextRight_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Lexicon_T, "Lexicon_T" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icCharLeft, 0, 0, (int)'=', 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icBracketRight, 0, 0, 8, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 6},
      {refalrts::ictVarLeft, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( e.ScannedRight#1 ) '= t.NextLeft#1 t.NextRight#1 ( e.Left#1 ) ( e.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '=', context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[4];
    context[__eScannedRight_1_1 + 1] = context[5];
    context[__eLeft_1_1] = context[8];
    context[__eLeft_1_1 + 1] = context[9];
    context[__eRight_1_1] = context[6];
    context[__eRight_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tNextLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tNextRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__tNextRight_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__tNextLeft_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eScannedLeft_1_1 = 10 };
    enum { __eScannedRight_1_1 = 12 };
    enum { __eLeft_1_1 = 14 };
    enum { __eRight_1_1 = 16 };
    enum { __tNextLeft_1_1 = 18 };
    enum { __tNextRight_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icCharLeft, 0, 0, (int)'>', 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icBracketRight, 0, 0, 8, 0},
      {refalrts::icContextSet, 0, 0, __eScannedLeft_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eScannedRight_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eLeft_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRight_1_1, 6},
      {refalrts::ictVarLeft, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::ictVarLeft, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '>', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedLeft_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextLeft_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLeft_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedRight_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextRight_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRight_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ScannedLeft#1 ) ( e.ScannedRight#1 ) '> t.NextLeft#1 t.NextRight#1 ( e.Left#1 ) ( e.Right#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '>', context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    context[__eScannedLeft_1_1] = context[2];
    context[__eScannedLeft_1_1 + 1] = context[3];
    context[__eScannedRight_1_1] = context[4];
    context[__eScannedRight_1_1 + 1] = context[5];
    context[__eLeft_1_1] = context[8];
    context[__eLeft_1_1 + 1] = context[9];
    context[__eRight_1_1] = context[6];
    context[__eRight_1_1 + 1] = context[7];
    if( ! refalrts::tvar_left( context[__tNextLeft_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tNextRight_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_evar( res, context[__eRight_1_1], context[__eRight_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tNextRight_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedRight_1_1], context[__eScannedRight_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eLeft_1_1], context[__eLeft_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tNextLeft_1_1] );
    res = refalrts::splice_evar( res, context[__eScannedLeft_1_1], context[__eScannedLeft_1_1 + 1] );
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
      { & TypeBracket, "TypeBracket" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.InBracket#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.InBracket#1

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
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sSymbol_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & SymbType, "SymbType" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sSymbol_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sSymbol_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Symbol#1
    if( ! refalrts::svar_left( context[__sSymbol_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__sSymbol_1_1] );
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
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eInBrackets_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TypeBracket, "TypeBracket" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eInBrackets_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.InBrackets#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eInBrackets_1_1] = context[2];
    context[__eInBrackets_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
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
    enum { __sSymbol_1_1 = 2 };
    enum { __eTail_1_1 = 3 };
    enum { __sSymbol_1_2 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & SymbType, "SymbType" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sSymbol_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sSymbol_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopySTVar, 0, 0, __sSymbol_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Symbol#1 e.Tail#1
    if( ! refalrts::svar_left( context[__sSymbol_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sSymbol_1_2], context[__sSymbol_1_1] ) )
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
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sSymbol_1_2] );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sSymbol_1_1] );
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
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '*', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim, "Trim" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)' ', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '  e.Line#1
    if( ! refalrts::char_left( ' ', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim, "Trim" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'\t', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\t e.Line#1
    if( ! refalrts::char_left( '\t', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim, "Trim" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'\r', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\r e.Line#1
    if( ! refalrts::char_left( '\r', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim, "Trim" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, 0, 0, (int)'\n', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\n e.Line#1
    if( ! refalrts::char_left( '\n', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim_R, "Trim_R" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim_R, "Trim_R" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)' ', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1 ' '
    if( ! refalrts::char_right( ' ', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim_R, "Trim_R" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'\t', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1 '\t'
    if( ! refalrts::char_right( '\t', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim_R, "Trim_R" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'\r', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1 '\r'
    if( ! refalrts::char_right( '\r', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Trim_R, "Trim_R" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'\n', 0},
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1 '\n'
    if( ! refalrts::char_right( '\n', context[0], context[1] ) )
      break;
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    enum { __eLine_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eLine_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLine_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Line#1
    context[__eLine_1_1] = context[0];
    context[__eLine_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eLine_1_1], context[__eLine_1_1 + 1] );
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
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tFunc_1_1 = 4 };
    enum { __eFuncs_1_1 = 5 };
    enum { __eArg_2_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Seq, "Seq" },
      { & Apply, "Apply" },
      { & Fetch, "Fetch" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFunc_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eArg_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArg_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Func#1 ( e.Funcs#1 ) e.Arg#2
    if( ! refalrts::tvar_left( context[__tFunc_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eArg_2_1] = context[0];
    context[__eArg_2_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eArg_2_1], context[__eArg_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tFunc_1_1] );
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
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eArg_2_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eArg_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArg_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Arg#2
    context[__eArg_2_1] = context[0];
    context[__eArg_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eArg_2_1], context[__eArg_2_1 + 1] );
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
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tFunc_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFunc_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFunc_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Func#1
    if( ! refalrts::tvar_left( context[__tFunc_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tFunc_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tFunc_1_1 = 2 };
    enum { __eFuncs_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_Seq_0, "lambda_Seq_0" },
      { & refalrts::create_closure, "refalrts::create_closure" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( 
      raa, allocs, context, arg_begin, arg_end,
      functions, labels, numbers, open_e_stack
    );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Func#1 e.Funcs#1
    if( ! refalrts::tvar_left( context[__tFunc_1_1], context[0], context[1] ) )
      break;
    context[__eFuncs_1_1] = context[0];
    context[__eFuncs_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__tFunc_1_1] );
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
      { & lambda_Seq_1, "lambda_Seq_1" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
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
