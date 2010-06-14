// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult MakeAlgorithm_v1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MakeAlgorithm_v2(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIfDef(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdElse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEndIf(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult LeftPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult RightPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'Z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, & MakeAlgorithm_v2, "MakeAlgorithm_v2" ) )
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
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & MakeAlgorithm_v1, "MakeAlgorithm_v1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eResult_b_2;
    refalrts::use( eResult_b_2 );
    static refalrts::Iter eResult_e_2;
    refalrts::use( eResult_e_2 );
    if( ! refalrts::copy_evar( eResult_b_2, eResult_e_2, eResult_b_1, eResult_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_bracket( n39 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n24, n25 );
    refalrts::link_brackets( n27, n29 );
    refalrts::link_brackets( n32, n33 );
    refalrts::link_brackets( n34, n35 );
    refalrts::link_brackets( n37, n39 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elems( res, n35, n39 );
    res = refalrts::splice_evar( res, eResult_b_2, eResult_e_2 );
    res = refalrts::splice_elems( res, n33, n34 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    res = refalrts::splice_elems( res, n25, n32 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elems( res, n22, n23 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elems( res, n6, n21 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
    static refalrts::Iter eResult_b_2;
    refalrts::use( eResult_b_2 );
    static refalrts::Iter eResult_e_2;
    refalrts::use( eResult_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdIfDef, (void*) "CmdIfDef"},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'Z'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakeAlgorithm_v2, (void*) "MakeAlgorithm_v2"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdElse, (void*) "CmdElse"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MakeAlgorithm_v1, (void*) "MakeAlgorithm_v1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEndIf, (void*) "CmdEndIf"},
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
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResult_b_2, eResult_e_2, eResult_b_1, eResult_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'Z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & MakeAlgorithm_v2, "MakeAlgorithm_v2" ) )
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
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & MakeAlgorithm_v1, "MakeAlgorithm_v1" ) )
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
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_name( n42, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n41, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    refalrts::push_stack( n40 );
    refalrts::push_stack( n34 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::link_brackets( n38, n39 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eResult_b_2, eResult_e_2 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n31, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n6, n23 );
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
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & VarSetUnion, "VarSetUnion" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n0, n4 );
        refalrts::link_brackets( n5, n9 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_elems( res, n10, n11 );
        res = refalrts::splice_stvar( res, tCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
#ifdef OLD_PATTERN
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
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
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#else
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceSTVar, & tCommon_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_B_b_1, & eSet1_B_e_1},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
      }
    }
  } while ( 0 );
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & VarSetUnion, "VarSetUnion" ) )
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
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::link_brackets( n14, n15 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n12, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, tCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
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
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eSet2_b_1, eSet2_e_1 );
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#else
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_b_1, & eSet1_e_1},
      {refalrts::icSpliceEVar, & eSet2_b_1, & eSet2_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet2_b_1, eSet2_e_1 );
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & VarSetDifference, "VarSetDifference" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n0, n4 );
        refalrts::link_brackets( n5, n9 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_elems( res, n10, n11 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter tCommon_1;
    refalrts::use( tCommon_1 );
    static refalrts::Iter tCommon_2;
    refalrts::use( tCommon_2 );
#ifdef OLD_PATTERN
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
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
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#else
    // (~1 e.Set1_B t.Common e.Set1_E )~1 (~2 e.Set2_B t.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::tvar_left( tCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( tCommon_2, tCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eSet1_B_b_1, & eSet1_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
      }
    }
  } while ( 0 );
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & VarSetDifference, "VarSetDifference" ) )
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
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::link_brackets( n14, n15 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n12, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eSet1_B_b_1, eSet1_B_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
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
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#else
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
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
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_b_1, & eSet1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet1_b_1, eSet1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdDeclareEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdDeclareVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdDeclareEVar, "CmdDeclareEVar" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareEVar, (void*) "CmdDeclareEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n6, & CmdDeclareEVar, "CmdDeclareEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareVar, (void*) "CmdDeclareVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n6, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 1 s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::number_left( 1UL, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 1 s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 1 s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::number_left( 1UL, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_number( n6, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
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
    static refalrts::Iter sUsing_1;
    refalrts::use( sUsing_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Using s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sUsing_2;
    refalrts::use( sUsing_2 );
    if( ! refalrts::copy_stvar( sUsing_2, sUsing_1 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    refalrts::link_brackets( n11, n12 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsing_2 );
    res = refalrts::splice_elems( res, n10, n11 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sUsing_1 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n5, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsing_1;
    refalrts::use( sUsing_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsing_2;
    refalrts::use( sUsing_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
#ifdef OLD_PATTERN
    // (~1 s.Using s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Using s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icSpliceSTVar, & sUsing_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sUsing_1},
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::copy_stvar( sUsing_2, sUsing_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
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
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_stvar( res, sUsing_2 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sUsing_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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

refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    // e.Vars
    eVars_b_1 = bb_0;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_0;
    refalrts::use( eVars_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ReplicateVar, "ReplicateVar" ) )
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
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elems( res, n1, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
#ifdef OLD_PATTERN
    // e.Vars
    eVars_b_1 = bb_0;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_0;
    refalrts::use( eVars_e_1 );
#else
    // e.Vars
    eVars_b_1 = bb_0;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_0;
    refalrts::use( eVars_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
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
    if( ! refalrts::alloc_name( n2, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
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


//End of file
