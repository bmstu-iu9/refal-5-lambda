// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ReadLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Func(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // issue here memory for vars with 2 elems
    refalrts::Iter context[2];
    refalrts::zeros( context, 2);
    const int __eX_1_1 = 0;
    static refalrts::Iter eX_1_b_1;
    static refalrts::Iter eX_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [X] Depth[1] Usings[1]
    // ( e.X#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    #ifndef INTERPRET
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    eX_1_b_1 = bb_1;
    eX_1_e_1 = be_1;
    #endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEPush, &bb_0, &be_0, 0},
      {refalrts::icBracketLeft, &bb_1, &be_1, 0},
      {refalrts::icEmpty, &bb_0, &be_0, 0},
      {refalrts::icContextSet, &bb_1, &be_1, __eX_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icSpliceEVar, 0, 0, __eX_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
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
    res = refalrts::splice_evar( res, eX_1_b_1, eX_1_e_1 );
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

static refalrts::FnResult Write(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3);
    const int __eX_1_1 = 0;
    static refalrts::Iter eX_1_b_1;
    static refalrts::Iter eX_1_e_1;
    
    //debug ::varInfo:: Mode[e] Index [X] Depth[1] Usings[1]
    const int __sSome_1_1 = 2;
    static refalrts::Iter sSome_1_1;
    
    //debug ::varInfo:: Mode[s] Index [Some] Depth[1] Usings[1]
    // ( e.X#1 s.Some#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    #ifndef INTERPRET
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    #endif
    #ifndef INTERPRET
    if( ! refalrts::svar_right( sSome_1_1, bb_1, be_1 ) )
      break;
    #endif
    #ifndef INTERPRET
    eX_1_b_1 = bb_1;
    eX_1_e_1 = be_1;
    #endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEPush, &bb_0, &be_0, 0},
      {refalrts::icBracketLeft, &bb_1, &be_1, 0},
      {refalrts::icEmpty, &bb_0, &be_0, 0},
      {refalrts::icsVarRight, &bb_1, &be_1, __sSome_1_1},
      {refalrts::icContextSet, &bb_1, &be_1, __eX_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Func, (void*) "Func"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, 0, 0, __eX_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Func, "Func" ) )
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
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eX_1_b_1, eX_1_e_1 );
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

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //debug ?!
    // Warning - storage with 0 elems!
    
    refalrts::Iter context[0];
    //
    #ifndef INTERPRET
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    #endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icEmpty, &bb_0, &be_0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Write, (void*) "Write"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '3'},
      {refalrts::icChar, 0, 0, '2'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, '2'},
      {refalrts::icChar, 0, 0, '3'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    // new engine
    refalrts::FnResult res = refalrts::new_interpret_array( raa, allocs, context, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Write, "Write" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '3' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '2' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '2' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '3' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
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
    refalrts::link_brackets( n2, n12 );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}


//End of file
