// Automatically generated file. Don't edit!
#include "refalrts.h"


//$LABEL A
template <typename T>
struct AL_ {
  static const char *name() {
    return "A";
  }
};

//$LABEL B
template <typename T>
struct BL_ {
  static const char *name() {
    return "B";
  }
};

static refalrts::FnResult F(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eX_b_1;
    refalrts::use( eX_b_1 );
    static refalrts::Iter eX_e_1;
    refalrts::use( eX_e_1 );
    static refalrts::Iter eY_b_1;
    refalrts::use( eY_b_1 );
    static refalrts::Iter eY_e_1;
    refalrts::use( eY_e_1 );
    static refalrts::Iter eZ_b_1;
    refalrts::use( eZ_b_1 );
    static refalrts::Iter eZ_e_1;
    refalrts::use( eZ_e_1 );
    // e.X # A e.Y # B e.Z
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eX_b_1 = bb_0_stk,
        eX_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eX_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eX_oe_1, be_0 )
    ) {
      bb_0 = eX_oe_1;
      eX_b_1 = bb_0_stk;
      eX_e_1 = eX_oe_1;
      refalrts::move_right( eX_b_1, eX_e_1 );
      if( ! refalrts::ident_left(  & AL_<int>::name, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eY_b_1 = bb_0_stk,
          eY_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eY_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eY_oe_1, be_0 )
      ) {
        bb_0 = eY_oe_1;
        eY_b_1 = bb_0_stk;
        eY_e_1 = eY_oe_1;
        refalrts::move_right( eY_b_1, eY_e_1 );
        if( ! refalrts::ident_left(  & BL_<int>::name, bb_0, be_0 ) ) 
          continue;
        eZ_b_1 = bb_0;
        refalrts::use( eZ_b_1 );
        eZ_e_1 = be_0;
        refalrts::use( eZ_e_1 );
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
      }
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eX_b_1;
    refalrts::use( eX_b_1 );
    static refalrts::Iter eX_e_1;
    refalrts::use( eX_e_1 );
    static refalrts::Iter eY_b_1;
    refalrts::use( eY_b_1 );
    static refalrts::Iter eY_e_1;
    refalrts::use( eY_e_1 );
    // e.X # A e.Y
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eX_b_1 = bb_0_stk,
        eX_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eX_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eX_oe_1, be_0 )
    ) {
      bb_0 = eX_oe_1;
      eX_b_1 = bb_0_stk;
      eX_e_1 = eX_oe_1;
      refalrts::move_right( eX_b_1, eX_e_1 );
      if( ! refalrts::ident_left(  & AL_<int>::name, bb_0, be_0 ) ) 
        continue;
      eY_b_1 = bb_0;
      refalrts::use( eY_b_1 );
      eY_e_1 = be_0;
      refalrts::use( eY_e_1 );
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
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eX_b_1;
    refalrts::use( eX_b_1 );
    static refalrts::Iter eX_e_1;
    refalrts::use( eX_e_1 );
    static refalrts::Iter eY_b_1;
    refalrts::use( eY_b_1 );
    static refalrts::Iter eY_e_1;
    refalrts::use( eY_e_1 );
    // (~1 e.X # A )~1 e.Y # B
    if( ! refalrts::ident_right(  & BL_<int>::name, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::ident_right(  & AL_<int>::name, bb_1, be_1 ) ) 
      break;
    eX_b_1 = bb_1;
    refalrts::use( eX_b_1 );
    eX_e_1 = be_1;
    refalrts::use( eX_e_1 );
    eY_b_1 = bb_0;
    refalrts::use( eY_b_1 );
    eY_e_1 = be_0;
    refalrts::use( eY_e_1 );
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

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Mul(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Fact(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fact, (void*) "Fact"},
      {refalrts::icInt, 0, 0, 6 },
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
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Fact, "Fact" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_number( n9, 6UL ) )
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
    refalrts::push_stack( n7 );
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Fact(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // 0
    if( ! refalrts::number_left( 0UL, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_number( n0, 1UL ) )
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
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sNumber_2;
    refalrts::use( sNumber_2 );
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Mul, (void*) "Mul"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fact, (void*) "Fact"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sNumber_1},
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
    if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Mul, "Mul" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Fact, "Fact" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Dec, "Dec" ) )
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
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNumber_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Fab(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eX_b_1;
    refalrts::use( eX_b_1 );
    static refalrts::Iter eX_e_1;
    refalrts::use( eX_e_1 );
    static refalrts::Iter eY_b_1;
    refalrts::use( eY_b_1 );
    static refalrts::Iter eY_e_1;
    refalrts::use( eY_e_1 );
    // e.X # A e.Y
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eX_b_1 = bb_0_stk,
        eX_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eX_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eX_oe_1, be_0 )
    ) {
      bb_0 = eX_oe_1;
      eX_b_1 = bb_0_stk;
      eX_e_1 = eX_oe_1;
      refalrts::move_right( eX_b_1, eX_e_1 );
      if( ! refalrts::ident_left(  & AL_<int>::name, bb_0, be_0 ) ) 
        continue;
      eY_b_1 = bb_0;
      refalrts::use( eY_b_1 );
      eY_e_1 = be_0;
      refalrts::use( eY_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eX_b_1, & eX_e_1},
        {refalrts::icIdent, (void*) & BL_<int>::name},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Fab, (void*) "Fab"},
        {refalrts::icSpliceEVar, & eY_b_1, & eY_e_1},
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
      if( ! refalrts::alloc_ident( n0, & BL_<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_open_call( n1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_name( n2, & Fab, "Fab" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_call( n3 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n3 );
      refalrts::push_stack( n1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eY_b_1, eY_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    }
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eX_b_1;
    refalrts::use( eX_b_1 );
    static refalrts::Iter eX_e_1;
    refalrts::use( eX_e_1 );
    // e.X
    eX_b_1 = bb_0;
    refalrts::use( eX_b_1 );
    eX_e_1 = be_0;
    refalrts::use( eX_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eX_b_1, & eX_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eX_b_1, eX_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}


//End of file
