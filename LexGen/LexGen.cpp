// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Generate(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // declare eFile_1
    // declare eProgName_1
    // *  (~1 e.ProgName )~1 (~2 e.File )~2
    // if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
    //   continue;
    // if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
    //   continue;
    // if( ! empty_seq( bb_0, be_0 ) )
    //   continue;
    // closed e 
    //   if( ! refalrts::@evar@_left( e1 ProgName_1, bb_1, be_1 ) ) 
    //     continue;
    // closed e 
    //   if( ! refalrts::@evar@_left( e1 File_1, bb_2, be_2 ) ) 
    //     continue;
    // reset result and allocator
    // if( ! refalrts::alloc_open_call( n0 ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_name( n1, & Generate, "Generate" ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_close_call( n2 ) )
    //   return refalrts::cNoMemory;
    // push n2
    // push n0
    // insert n2
    // insert evar eFile_1
    // insert n1
    // insert n0
    // FINISH
    // 
    refalrts::Iter eFile_b_1;
    refalrts::Iter eFile_e_1;
    refalrts::Iter eProgName_b_1;
    refalrts::Iter eProgName_e_1;
    // (~1 e.ProgName )~1 (~2 e.File )~2
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
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eFile_b_1 = bb_2;
    refalrts::use( eFile_b_1 );
    eFile_e_1 = be_2;
    refalrts::use( eFile_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Generate, "Generate" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFile_b_1, eFile_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // declare eProgName_1
    // declare eOther_1
    // *  (~1 e.ProgName )~1 e.Other
    // if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
    //   continue;
    // closed e 
    //   if( ! refalrts::@evar@_left( e1 ProgName_1, bb_1, be_1 ) ) 
    //     continue;
    // closed e 
    //   if( ! refalrts::@evar@_left( e1 Other_1, bb_0, be_0 ) ) 
    //     continue;
    // reset result and allocator
    // if( ! refalrts::alloc_open_call( n0 ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n2, 'C' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n3, 'o' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n4, 'm' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n5, 'm' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n6, 'a' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n7, 'n' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n8, 'd' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n9, ' ' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n10, 'l' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n11, 'i' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n12, 'n' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n13, 'e' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n14, ' ' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n15, 'e' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n16, 'r' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n17, 'r' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n18, 'o' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_char( n19, 'r' ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_close_call( n20 ) )
    //   return refalrts::cNoMemory;
    // push n20
    // push n0
    // insert n20
    // insert n19
    // insert n18
    // insert n17
    // insert n16
    // insert n15
    // insert n14
    // insert n13
    // insert n12
    // insert n11
    // insert n10
    // insert n9
    // insert n8
    // insert n7
    // insert n6
    // insert n5
    // insert n4
    // insert n3
    // insert n2
    // insert n1
    // insert n0
    // FINISH
    // 
    refalrts::Iter eProgName_b_1;
    refalrts::Iter eProgName_e_1;
    refalrts::Iter eOther_b_1;
    refalrts::Iter eOther_e_1;
    // (~1 e.ProgName )~1 e.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eProgName_b_1 = bb_1;
    refalrts::use( eProgName_b_1 );
    eProgName_e_1 = be_1;
    refalrts::use( eProgName_e_1 );
    eOther_b_1 = bb_0;
    refalrts::use( eOther_b_1 );
    eOther_e_1 = be_0;
    refalrts::use( eOther_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // * 
    // if( ! empty_seq( bb_0, be_0 ) )
    //   continue;
    // reset result and allocator
    // if( ! refalrts::alloc_open_call( n0 ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_name( n1, & Main, "Main" ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_open_call( n2 ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_name( n3, & ArgList, "ArgList" ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_close_call( n4 ) )
    //   return refalrts::cNoMemory;
    // if( ! refalrts::alloc_close_call( n5 ) )
    //   return refalrts::cNoMemory;
    // push n5
    // push n0
    // insert n5
    // push n4
    // push n2
    // insert n4
    // insert n3
    // insert n2
    // insert n1
    // insert n0
    // FINISH
    // 
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Main, "Main" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ArgList, "ArgList" ) )
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
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

