// Automatically generated file. Don't edit!
#include "refalrts.h"


refalrts::FnResult GN_Local(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GN_Entry(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CutName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePrefix_b_1;
    refalrts::use( ePrefix_b_1 );
    static refalrts::Iter ePrefix_e_1;
    refalrts::use( ePrefix_e_1 );
    // e.Prefix 'E_ e.Name
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePrefix_b_1 = bb_0_stk,
        ePrefix_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePrefix_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePrefix_oe_1, be_0 )
    ) {
      bb_0 = ePrefix_oe_1;
      ePrefix_b_1 = bb_0_stk;
      ePrefix_e_1 = ePrefix_oe_1;
      refalrts::move_right( ePrefix_b_1, ePrefix_e_1 );
      if( ! refalrts::char_left( 'E', bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::char_left( '_', bb_0, be_0 ) ) 
        continue;
      eName_b_1 = bb_0;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_0;
      refalrts::use( eName_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwGenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eName_b_3;
    refalrts::use( eName_b_3 );
    static refalrts::Iter eName_e_3;
    refalrts::use( eName_e_3 );
    static refalrts::Iter eName_b_4;
    refalrts::use( eName_b_4 );
    static refalrts::Iter eName_e_4;
    refalrts::use( eName_e_4 );
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CutName, (void*) "CutName"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_b_3, eName_e_3, eName_b_2, eName_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_b_4, eName_e_4, eName_b_3, eName_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_close_bracket( n93 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_open_bracket( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_close_bracket( n98 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_open_bracket( n99 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_open_call( n112 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_name( n113, & CutName, "CutName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_close_call( n114 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_char( n115, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_char( n116, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_close_bracket( n117 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_open_bracket( n118 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_close_bracket( n122 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_open_bracket( n123 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_close_bracket( n124 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_open_bracket( n125 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_char( n150, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_char( n183, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_char( n184, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_char( n185, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_close_bracket( n187 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_open_bracket( n188 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_close_bracket( n189 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_open_bracket( n190 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_char( n198, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_char( n199, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_char( n202, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_char( n203, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_char( n204, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_char( n208, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_char( n210, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_char( n211, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_char( n212, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_char( n214, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_char( n215, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_char( n216, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_char( n217, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_char( n218, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n219 = 0;
    if( ! refalrts::alloc_char( n219, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n220 = 0;
    if( ! refalrts::alloc_char( n220, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n221 = 0;
    if( ! refalrts::alloc_char( n221, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n222 = 0;
    if( ! refalrts::alloc_char( n222, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n223 = 0;
    if( ! refalrts::alloc_char( n223, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n224 = 0;
    if( ! refalrts::alloc_char( n224, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n225 = 0;
    if( ! refalrts::alloc_char( n225, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n226 = 0;
    if( ! refalrts::alloc_char( n226, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n227 = 0;
    if( ! refalrts::alloc_char( n227, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n228 = 0;
    if( ! refalrts::alloc_char( n228, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n229 = 0;
    if( ! refalrts::alloc_char( n229, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n230 = 0;
    if( ! refalrts::alloc_char( n230, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n231 = 0;
    if( ! refalrts::alloc_char( n231, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n232 = 0;
    if( ! refalrts::alloc_char( n232, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n233 = 0;
    if( ! refalrts::alloc_char( n233, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n234 = 0;
    if( ! refalrts::alloc_char( n234, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n235 = 0;
    if( ! refalrts::alloc_char( n235, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n236 = 0;
    if( ! refalrts::alloc_char( n236, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n237 = 0;
    if( ! refalrts::alloc_char( n237, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n238 = 0;
    if( ! refalrts::alloc_char( n238, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n239 = 0;
    if( ! refalrts::alloc_char( n239, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n240 = 0;
    if( ! refalrts::alloc_char( n240, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n241 = 0;
    if( ! refalrts::alloc_char( n241, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n242 = 0;
    if( ! refalrts::alloc_char( n242, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n243 = 0;
    if( ! refalrts::alloc_char( n243, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n244 = 0;
    if( ! refalrts::alloc_char( n244, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n245 = 0;
    if( ! refalrts::alloc_char( n245, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n246 = 0;
    if( ! refalrts::alloc_char( n246, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n247 = 0;
    if( ! refalrts::alloc_char( n247, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n248 = 0;
    if( ! refalrts::alloc_char( n248, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n249 = 0;
    if( ! refalrts::alloc_char( n249, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n250 = 0;
    if( ! refalrts::alloc_char( n250, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n251 = 0;
    if( ! refalrts::alloc_char( n251, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n252 = 0;
    if( ! refalrts::alloc_char( n252, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n253 = 0;
    if( ! refalrts::alloc_char( n253, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n254 = 0;
    if( ! refalrts::alloc_char( n254, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n255 = 0;
    if( ! refalrts::alloc_char( n255, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n256 = 0;
    if( ! refalrts::alloc_char( n256, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n257 = 0;
    if( ! refalrts::alloc_char( n257, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n258 = 0;
    if( ! refalrts::alloc_char( n258, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n259 = 0;
    if( ! refalrts::alloc_char( n259, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n260 = 0;
    if( ! refalrts::alloc_char( n260, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n261 = 0;
    if( ! refalrts::alloc_char( n261, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n262 = 0;
    if( ! refalrts::alloc_char( n262, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n263 = 0;
    if( ! refalrts::alloc_char( n263, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n264 = 0;
    if( ! refalrts::alloc_char( n264, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n265 = 0;
    if( ! refalrts::alloc_char( n265, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n266 = 0;
    if( ! refalrts::alloc_char( n266, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n267 = 0;
    if( ! refalrts::alloc_char( n267, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n268 = 0;
    if( ! refalrts::alloc_close_bracket( n268 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n269 = 0;
    if( ! refalrts::alloc_open_bracket( n269 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n270 = 0;
    if( ! refalrts::alloc_char( n270, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n271 = 0;
    if( ! refalrts::alloc_char( n271, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n272 = 0;
    if( ! refalrts::alloc_char( n272, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n273 = 0;
    if( ! refalrts::alloc_close_bracket( n273 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n274 = 0;
    if( ! refalrts::alloc_open_bracket( n274 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n275 = 0;
    if( ! refalrts::alloc_char( n275, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n276 = 0;
    if( ! refalrts::alloc_char( n276, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n277 = 0;
    if( ! refalrts::alloc_char( n277, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n278 = 0;
    if( ! refalrts::alloc_char( n278, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n279 = 0;
    if( ! refalrts::alloc_char( n279, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n280 = 0;
    if( ! refalrts::alloc_char( n280, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n281 = 0;
    if( ! refalrts::alloc_char( n281, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n282 = 0;
    if( ! refalrts::alloc_char( n282, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n283 = 0;
    if( ! refalrts::alloc_char( n283, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n284 = 0;
    if( ! refalrts::alloc_char( n284, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n285 = 0;
    if( ! refalrts::alloc_char( n285, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n286 = 0;
    if( ! refalrts::alloc_char( n286, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n287 = 0;
    if( ! refalrts::alloc_char( n287, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n288 = 0;
    if( ! refalrts::alloc_char( n288, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n289 = 0;
    if( ! refalrts::alloc_char( n289, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n290 = 0;
    if( ! refalrts::alloc_char( n290, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n291 = 0;
    if( ! refalrts::alloc_char( n291, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n292 = 0;
    if( ! refalrts::alloc_char( n292, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n293 = 0;
    if( ! refalrts::alloc_char( n293, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n294 = 0;
    if( ! refalrts::alloc_char( n294, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n295 = 0;
    if( ! refalrts::alloc_char( n295, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n296 = 0;
    if( ! refalrts::alloc_char( n296, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n297 = 0;
    if( ! refalrts::alloc_char( n297, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n298 = 0;
    if( ! refalrts::alloc_char( n298, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n299 = 0;
    if( ! refalrts::alloc_char( n299, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n300 = 0;
    if( ! refalrts::alloc_char( n300, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n301 = 0;
    if( ! refalrts::alloc_char( n301, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n302 = 0;
    if( ! refalrts::alloc_char( n302, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n303 = 0;
    if( ! refalrts::alloc_char( n303, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n304 = 0;
    if( ! refalrts::alloc_char( n304, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n305 = 0;
    if( ! refalrts::alloc_char( n305, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n306 = 0;
    if( ! refalrts::alloc_char( n306, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n307 = 0;
    if( ! refalrts::alloc_char( n307, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n308 = 0;
    if( ! refalrts::alloc_char( n308, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n309 = 0;
    if( ! refalrts::alloc_char( n309, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n310 = 0;
    if( ! refalrts::alloc_char( n310, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n311 = 0;
    if( ! refalrts::alloc_char( n311, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n312 = 0;
    if( ! refalrts::alloc_char( n312, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n313 = 0;
    if( ! refalrts::alloc_char( n313, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n314 = 0;
    if( ! refalrts::alloc_char( n314, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n315 = 0;
    if( ! refalrts::alloc_char( n315, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n316 = 0;
    if( ! refalrts::alloc_char( n316, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n317 = 0;
    if( ! refalrts::alloc_char( n317, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n318 = 0;
    if( ! refalrts::alloc_char( n318, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n319 = 0;
    if( ! refalrts::alloc_close_bracket( n319 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n274, n319 );
    res = refalrts::splice_elem( res, n319 );
    res = refalrts::splice_elem( res, n318 );
    res = refalrts::splice_elem( res, n317 );
    res = refalrts::splice_elem( res, n316 );
    res = refalrts::splice_elem( res, n315 );
    res = refalrts::splice_elem( res, n314 );
    res = refalrts::splice_elem( res, n313 );
    res = refalrts::splice_elem( res, n312 );
    res = refalrts::splice_elem( res, n311 );
    res = refalrts::splice_elem( res, n310 );
    res = refalrts::splice_elem( res, n309 );
    res = refalrts::splice_elem( res, n308 );
    res = refalrts::splice_elem( res, n307 );
    res = refalrts::splice_elem( res, n306 );
    res = refalrts::splice_elem( res, n305 );
    res = refalrts::splice_elem( res, n304 );
    res = refalrts::splice_elem( res, n303 );
    res = refalrts::splice_elem( res, n302 );
    res = refalrts::splice_elem( res, n301 );
    res = refalrts::splice_elem( res, n300 );
    res = refalrts::splice_elem( res, n299 );
    res = refalrts::splice_elem( res, n298 );
    res = refalrts::splice_elem( res, n297 );
    res = refalrts::splice_elem( res, n296 );
    res = refalrts::splice_elem( res, n295 );
    res = refalrts::splice_elem( res, n294 );
    res = refalrts::splice_elem( res, n293 );
    res = refalrts::splice_elem( res, n292 );
    res = refalrts::splice_elem( res, n291 );
    res = refalrts::splice_elem( res, n290 );
    res = refalrts::splice_elem( res, n289 );
    res = refalrts::splice_elem( res, n288 );
    res = refalrts::splice_elem( res, n287 );
    res = refalrts::splice_elem( res, n286 );
    res = refalrts::splice_elem( res, n285 );
    res = refalrts::splice_elem( res, n284 );
    res = refalrts::splice_elem( res, n283 );
    res = refalrts::splice_elem( res, n282 );
    res = refalrts::splice_elem( res, n281 );
    res = refalrts::splice_elem( res, n280 );
    res = refalrts::splice_elem( res, n279 );
    res = refalrts::splice_elem( res, n278 );
    res = refalrts::splice_elem( res, n277 );
    res = refalrts::splice_elem( res, n276 );
    res = refalrts::splice_elem( res, n275 );
    res = refalrts::splice_elem( res, n274 );
    refalrts::link_brackets( n269, n273 );
    res = refalrts::splice_elem( res, n273 );
    res = refalrts::splice_elem( res, n272 );
    res = refalrts::splice_elem( res, n271 );
    res = refalrts::splice_elem( res, n270 );
    res = refalrts::splice_elem( res, n269 );
    refalrts::link_brackets( n190, n268 );
    res = refalrts::splice_elem( res, n268 );
    res = refalrts::splice_elem( res, n267 );
    res = refalrts::splice_elem( res, n266 );
    res = refalrts::splice_elem( res, n265 );
    res = refalrts::splice_elem( res, n264 );
    res = refalrts::splice_elem( res, n263 );
    res = refalrts::splice_elem( res, n262 );
    res = refalrts::splice_elem( res, n261 );
    res = refalrts::splice_elem( res, n260 );
    res = refalrts::splice_elem( res, n259 );
    res = refalrts::splice_elem( res, n258 );
    res = refalrts::splice_elem( res, n257 );
    res = refalrts::splice_elem( res, n256 );
    res = refalrts::splice_elem( res, n255 );
    res = refalrts::splice_elem( res, n254 );
    res = refalrts::splice_elem( res, n253 );
    res = refalrts::splice_elem( res, n252 );
    res = refalrts::splice_elem( res, n251 );
    res = refalrts::splice_elem( res, n250 );
    res = refalrts::splice_elem( res, n249 );
    res = refalrts::splice_elem( res, n248 );
    res = refalrts::splice_elem( res, n247 );
    res = refalrts::splice_elem( res, n246 );
    res = refalrts::splice_elem( res, n245 );
    res = refalrts::splice_elem( res, n244 );
    res = refalrts::splice_elem( res, n243 );
    res = refalrts::splice_elem( res, n242 );
    res = refalrts::splice_elem( res, n241 );
    res = refalrts::splice_elem( res, n240 );
    res = refalrts::splice_elem( res, n239 );
    res = refalrts::splice_elem( res, n238 );
    res = refalrts::splice_elem( res, n237 );
    res = refalrts::splice_elem( res, n236 );
    res = refalrts::splice_elem( res, n235 );
    res = refalrts::splice_elem( res, n234 );
    res = refalrts::splice_elem( res, n233 );
    res = refalrts::splice_elem( res, n232 );
    res = refalrts::splice_elem( res, n231 );
    res = refalrts::splice_elem( res, n230 );
    res = refalrts::splice_elem( res, n229 );
    res = refalrts::splice_elem( res, n228 );
    res = refalrts::splice_elem( res, n227 );
    res = refalrts::splice_elem( res, n226 );
    res = refalrts::splice_elem( res, n225 );
    res = refalrts::splice_elem( res, n224 );
    res = refalrts::splice_elem( res, n223 );
    res = refalrts::splice_elem( res, n222 );
    res = refalrts::splice_elem( res, n221 );
    res = refalrts::splice_elem( res, n220 );
    res = refalrts::splice_elem( res, n219 );
    res = refalrts::splice_elem( res, n218 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_elem( res, n215 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    refalrts::link_brackets( n188, n189 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    refalrts::link_brackets( n125, n187 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_evar( res, eName_b_4, eName_e_4 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    refalrts::link_brackets( n123, n124 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    refalrts::link_brackets( n118, n122 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    refalrts::link_brackets( n99, n117 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    refalrts::push_stack( n114 );
    refalrts::push_stack( n112 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_evar( res, eName_b_3, eName_e_3 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    refalrts::link_brackets( n94, n98 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    refalrts::link_brackets( n55, n93 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
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
    refalrts::link_brackets( n37, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
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
    refalrts::link_brackets( n34, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n0, n33 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenFnStart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icSpliceSTVar, & sMemoryClass_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
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
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sMemoryClass_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenFnEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
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
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_open_bracket( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_bracket( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_close_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_open_bracket( n61 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_bracket( n62 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n61, n62 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    refalrts::link_brackets( n58, n60 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    refalrts::link_brackets( n53, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    refalrts::link_brackets( n0, n52 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenFnEnd_Success(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
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
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'u' ) )
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
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_bracket( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_close_bracket( n59 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, '}' ) )
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
    refalrts::link_brackets( n63, n64 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::link_brackets( n60, n62 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    refalrts::link_brackets( n55, n59 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::link_brackets( n0, n54 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
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
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

refalrts::FnResult GenEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwGenFnStart, (void*) "SwGenFnStart"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
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
    if( ! refalrts::alloc_name( n1, & SwGenFnStart, "SwGenFnStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GN_Local, "GN_Local" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & GenFnEnd, "GenFnEnd" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

refalrts::FnResult GenExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
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

refalrts::FnResult GenForward(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
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

static refalrts::FnResult GenSwap_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GenESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '$'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSwap_Aux, (void*) "GenSwap_Aux"},
      {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '$' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenSwap_Aux, "GenSwap_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

refalrts::FnResult GenSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '$'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSwap_Aux, (void*) "GenSwap_Aux"},
      {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '$' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & GenSwap_Aux, "GenSwap_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GN_Local, "GN_Local" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n0, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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

static refalrts::FnResult GenSwap_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sMemoryClass_1;
    refalrts::use( sMemoryClass_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eName_b_3;
    refalrts::use( eName_b_3 );
    static refalrts::Iter eName_e_3;
    refalrts::use( eName_e_3 );
    static refalrts::Iter eName_b_4;
    refalrts::use( eName_b_4 );
    static refalrts::Iter eName_e_4;
    refalrts::use( eName_e_4 );
    // s.MemoryClass e.Name
    if( ! refalrts::svar_left( sMemoryClass_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_b_3, eName_e_3, eName_b_2, eName_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eName_b_4, eName_e_4, eName_b_3, eName_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_open_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_close_bracket( n89 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_open_bracket( n90 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_close_bracket( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_open_bracket( n95 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_close_bracket( n110 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_open_bracket( n111 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_char( n113, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_char( n114, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_close_bracket( n115 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_open_bracket( n116 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_close_bracket( n117 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_open_bracket( n118 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_char( n125, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_char( n126, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_char( n127, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_char( n128, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_char( n150, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_char( n166, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_char( n167, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_char( n168, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_close_bracket( n180 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_open_bracket( n181 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_close_bracket( n183 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_open_bracket( n184 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_close_bracket( n185 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n184, n185 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    refalrts::link_brackets( n181, n183 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    refalrts::link_brackets( n118, n180 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_evar( res, eName_b_4, eName_e_4 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    refalrts::link_brackets( n116, n117 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    refalrts::link_brackets( n111, n115 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_elem( res, n111 );
    refalrts::link_brackets( n95, n110 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_evar( res, eName_b_3, eName_e_3 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    refalrts::link_brackets( n90, n94 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    refalrts::link_brackets( n51, n89 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
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
    refalrts::link_brackets( n33, n50 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
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
    refalrts::link_brackets( n30, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n0, n29 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePrefix_b_1;
    refalrts::use( ePrefix_b_1 );
    static refalrts::Iter ePrefix_e_1;
    refalrts::use( ePrefix_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    // e.Prefix 'E_ e.Name
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePrefix_b_1 = bb_0_stk,
        ePrefix_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePrefix_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePrefix_oe_1, be_0 )
    ) {
      bb_0 = ePrefix_oe_1;
      ePrefix_b_1 = bb_0_stk;
      ePrefix_e_1 = ePrefix_oe_1;
      refalrts::move_right( ePrefix_b_1, ePrefix_e_1 );
      if( ! refalrts::char_left( 'E', bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::char_left( '_', bb_0, be_0 ) ) 
        continue;
      eName_b_1 = bb_0;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_0;
      refalrts::use( eName_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & ePrefix_b_1, & ePrefix_e_1},
        {refalrts::icChar, 0, 0, 'E'},
        {refalrts::icChar, 0, 0, '_'},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, '{'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'p'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'R'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'R'},
        {refalrts::icChar, 0, 0, 'T'},
        {refalrts::icChar, 0, 0, 'S'},
        {refalrts::icChar, 0, 0, '.'},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, '='},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'R'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'R'},
        {refalrts::icChar, 0, 0, 'T'},
        {refalrts::icChar, 0, 0, 'S'},
        {refalrts::icChar, 0, 0, '.'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, '_'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, '('},
        {refalrts::icChar, 0, 0, '"'},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, '"'},
        {refalrts::icChar, 0, 0, ')'},
        {refalrts::icChar, 0, 0, ';'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icChar, 0, 0, '}'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_char( n1, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, '_' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, '{' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'p' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'R' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 'R' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'T' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'S' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, '.' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_char( n50, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_char( n51, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_char( n52, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_char( n53, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_char( n54, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_char( n55, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_char( n56, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_char( n57, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n58 = 0;
      if( ! refalrts::alloc_char( n58, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n59 = 0;
      if( ! refalrts::alloc_char( n59, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n60 = 0;
      if( ! refalrts::alloc_char( n60, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n61 = 0;
      if( ! refalrts::alloc_char( n61, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n62 = 0;
      if( ! refalrts::alloc_char( n62, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n63 = 0;
      if( ! refalrts::alloc_char( n63, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n64 = 0;
      if( ! refalrts::alloc_char( n64, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n65 = 0;
      if( ! refalrts::alloc_char( n65, '=' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n66 = 0;
      if( ! refalrts::alloc_close_bracket( n66 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n67 = 0;
      if( ! refalrts::alloc_open_bracket( n67 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n68 = 0;
      if( ! refalrts::alloc_char( n68, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n69 = 0;
      if( ! refalrts::alloc_char( n69, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n70 = 0;
      if( ! refalrts::alloc_char( n70, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n71 = 0;
      if( ! refalrts::alloc_char( n71, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n72 = 0;
      if( ! refalrts::alloc_char( n72, 'R' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n73 = 0;
      if( ! refalrts::alloc_char( n73, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n74 = 0;
      if( ! refalrts::alloc_char( n74, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n75 = 0;
      if( ! refalrts::alloc_char( n75, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n76 = 0;
      if( ! refalrts::alloc_char( n76, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n77 = 0;
      if( ! refalrts::alloc_char( n77, 'R' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n78 = 0;
      if( ! refalrts::alloc_char( n78, 'T' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n79 = 0;
      if( ! refalrts::alloc_char( n79, 'S' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n80 = 0;
      if( ! refalrts::alloc_char( n80, '.' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n81 = 0;
      if( ! refalrts::alloc_char( n81, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n82 = 0;
      if( ! refalrts::alloc_char( n82, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n83 = 0;
      if( ! refalrts::alloc_char( n83, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n84 = 0;
      if( ! refalrts::alloc_char( n84, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n85 = 0;
      if( ! refalrts::alloc_char( n85, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n86 = 0;
      if( ! refalrts::alloc_char( n86, '_' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n87 = 0;
      if( ! refalrts::alloc_char( n87, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n88 = 0;
      if( ! refalrts::alloc_char( n88, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n89 = 0;
      if( ! refalrts::alloc_char( n89, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n90 = 0;
      if( ! refalrts::alloc_char( n90, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n91 = 0;
      if( ! refalrts::alloc_char( n91, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n92 = 0;
      if( ! refalrts::alloc_char( n92, '(' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n93 = 0;
      if( ! refalrts::alloc_char( n93, '"' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n94 = 0;
      if( ! refalrts::alloc_char( n94, '"' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n95 = 0;
      if( ! refalrts::alloc_char( n95, ')' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n96 = 0;
      if( ! refalrts::alloc_char( n96, ';' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n97 = 0;
      if( ! refalrts::alloc_close_bracket( n97 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n98 = 0;
      if( ! refalrts::alloc_open_bracket( n98 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n99 = 0;
      if( ! refalrts::alloc_char( n99, '}' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n100 = 0;
      if( ! refalrts::alloc_close_bracket( n100 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n101 = 0;
      if( ! refalrts::alloc_open_bracket( n101 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n102 = 0;
      if( ! refalrts::alloc_close_bracket( n102 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n101, n102 );
      res = refalrts::splice_elem( res, n102 );
      res = refalrts::splice_elem( res, n101 );
      refalrts::link_brackets( n98, n100 );
      res = refalrts::splice_elem( res, n100 );
      res = refalrts::splice_elem( res, n99 );
      res = refalrts::splice_elem( res, n98 );
      refalrts::link_brackets( n67, n97 );
      res = refalrts::splice_elem( res, n97 );
      res = refalrts::splice_elem( res, n96 );
      res = refalrts::splice_elem( res, n95 );
      res = refalrts::splice_elem( res, n94 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n93 );
      res = refalrts::splice_elem( res, n92 );
      res = refalrts::splice_elem( res, n91 );
      res = refalrts::splice_elem( res, n90 );
      res = refalrts::splice_elem( res, n89 );
      res = refalrts::splice_elem( res, n88 );
      res = refalrts::splice_elem( res, n87 );
      res = refalrts::splice_elem( res, n86 );
      res = refalrts::splice_elem( res, n85 );
      res = refalrts::splice_elem( res, n84 );
      res = refalrts::splice_elem( res, n83 );
      res = refalrts::splice_elem( res, n82 );
      res = refalrts::splice_elem( res, n81 );
      res = refalrts::splice_elem( res, n80 );
      res = refalrts::splice_elem( res, n79 );
      res = refalrts::splice_elem( res, n78 );
      res = refalrts::splice_elem( res, n77 );
      res = refalrts::splice_elem( res, n76 );
      res = refalrts::splice_elem( res, n75 );
      res = refalrts::splice_elem( res, n74 );
      res = refalrts::splice_elem( res, n73 );
      res = refalrts::splice_elem( res, n72 );
      res = refalrts::splice_elem( res, n71 );
      res = refalrts::splice_elem( res, n70 );
      res = refalrts::splice_elem( res, n69 );
      res = refalrts::splice_elem( res, n68 );
      res = refalrts::splice_elem( res, n67 );
      refalrts::link_brackets( n12, n66 );
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
      refalrts::link_brackets( n0, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, ePrefix_b_1, ePrefix_e_1 );
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
    }
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenCommonHeaders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
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
    if( ! refalrts::alloc_char( n1, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_close_bracket( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_open_bracket( n61 ) )
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
    refalrts::link_brackets( n63, n64 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::link_brackets( n61, n62 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    refalrts::link_brackets( n46, n60 );
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
    refalrts::link_brackets( n0, n45 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult GenCommonTailer(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
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
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n16 );
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
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult CmdChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdOpenedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdLinkBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPushStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdCheckEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmptyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdReturnResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIfDef(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdElse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEndIf(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInitRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdFinRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdCopyEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgLeft(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgRight(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPrint(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrSplice(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCopy(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenSentence_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GenSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAlgorithm_b_1;
    refalrts::use( eAlgorithm_b_1 );
    static refalrts::Iter eAlgorithm_e_1;
    refalrts::use( eAlgorithm_e_1 );
    // e.Algorithm
    eAlgorithm_b_1 = bb_0;
    refalrts::use( eAlgorithm_b_1 );
    eAlgorithm_e_1 = be_0;
    refalrts::use( eAlgorithm_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenSentence_Aux, (void*) "GenSentence_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & GenCommand, (void*) "GenCommand"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eAlgorithm_b_1, & eAlgorithm_e_1},
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
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_number( n34, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_number( n35, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_open_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_open_call( n65 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_name( n66, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_number( n67, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_number( n68, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_close_call( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_close_bracket( n81 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_open_bracket( n82 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_char( n108, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_char( n109, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_open_call( n113 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_name( n114, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_number( n115, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_number( n116, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_close_call( n117 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_char( n120, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_char( n121, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_char( n122, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_open_call( n124 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_name( n125, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_number( n126, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_number( n127, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_close_call( n128 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_char( n129, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_char( n130, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_close_bracket( n132 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_open_bracket( n133 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_char( n134, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_char( n135, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_char( n136, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_char( n138, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_char( n139, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_char( n142, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_char( n143, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_char( n144, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_char( n146, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_char( n150, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_char( n151, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_char( n152, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_char( n154, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_char( n155, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_char( n158, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_char( n159, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_char( n160, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_char( n162, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_open_call( n164 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_name( n165, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_number( n166, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_number( n167, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_close_call( n168 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_char( n170, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_char( n171, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_open_call( n175 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_name( n176, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_number( n177, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_number( n178, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_close_call( n179 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_close_bracket( n183 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_open_bracket( n184 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_char( n185, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_char( n188, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_char( n189, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_char( n190, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_char( n198, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_char( n199, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_char( n200, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_char( n201, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_char( n202, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_char( n203, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_char( n204, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_char( n208, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_char( n210, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_char( n211, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_char( n212, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_char( n214, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_char( n215, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_open_call( n216 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_name( n217, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_number( n218, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n219 = 0;
    if( ! refalrts::alloc_number( n219, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n220 = 0;
    if( ! refalrts::alloc_close_call( n220 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n221 = 0;
    if( ! refalrts::alloc_char( n221, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n222 = 0;
    if( ! refalrts::alloc_char( n222, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n223 = 0;
    if( ! refalrts::alloc_char( n223, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n224 = 0;
    if( ! refalrts::alloc_char( n224, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n225 = 0;
    if( ! refalrts::alloc_char( n225, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n226 = 0;
    if( ! refalrts::alloc_char( n226, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n227 = 0;
    if( ! refalrts::alloc_open_call( n227 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n228 = 0;
    if( ! refalrts::alloc_name( n228, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n229 = 0;
    if( ! refalrts::alloc_number( n229, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n230 = 0;
    if( ! refalrts::alloc_number( n230, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n231 = 0;
    if( ! refalrts::alloc_close_call( n231 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n232 = 0;
    if( ! refalrts::alloc_char( n232, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n233 = 0;
    if( ! refalrts::alloc_char( n233, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n234 = 0;
    if( ! refalrts::alloc_char( n234, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n235 = 0;
    if( ! refalrts::alloc_close_bracket( n235 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n236 = 0;
    if( ! refalrts::alloc_open_call( n236 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n237 = 0;
    if( ! refalrts::alloc_name( n237, & GenSentence_Aux, "GenSentence_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n238 = 0;
    if( ! refalrts::alloc_open_call( n238 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n239 = 0;
    if( ! refalrts::alloc_name( n239, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n240 = 0;
    if( ! refalrts::alloc_name( n240, & GenCommand, "GenCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n241 = 0;
    if( ! refalrts::alloc_open_bracket( n241 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n242 = 0;
    if( ! refalrts::alloc_char( n242, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n243 = 0;
    if( ! refalrts::alloc_char( n243, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n244 = 0;
    if( ! refalrts::alloc_char( n244, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n245 = 0;
    if( ! refalrts::alloc_char( n245, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n246 = 0;
    if( ! refalrts::alloc_char( n246, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n247 = 0;
    if( ! refalrts::alloc_char( n247, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n248 = 0;
    if( ! refalrts::alloc_close_bracket( n248 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n249 = 0;
    if( ! refalrts::alloc_close_call( n249 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n250 = 0;
    if( ! refalrts::alloc_close_call( n250 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n250 );
    refalrts::push_stack( n236 );
    res = refalrts::splice_elem( res, n250 );
    refalrts::push_stack( n249 );
    refalrts::push_stack( n238 );
    res = refalrts::splice_elem( res, n249 );
    res = refalrts::splice_evar( res, eAlgorithm_b_1, eAlgorithm_e_1 );
    refalrts::link_brackets( n241, n248 );
    res = refalrts::splice_elem( res, n248 );
    res = refalrts::splice_elem( res, n247 );
    res = refalrts::splice_elem( res, n246 );
    res = refalrts::splice_elem( res, n245 );
    res = refalrts::splice_elem( res, n244 );
    res = refalrts::splice_elem( res, n243 );
    res = refalrts::splice_elem( res, n242 );
    res = refalrts::splice_elem( res, n241 );
    res = refalrts::splice_elem( res, n240 );
    res = refalrts::splice_elem( res, n239 );
    res = refalrts::splice_elem( res, n238 );
    res = refalrts::splice_elem( res, n237 );
    res = refalrts::splice_elem( res, n236 );
    refalrts::link_brackets( n184, n235 );
    res = refalrts::splice_elem( res, n235 );
    res = refalrts::splice_elem( res, n234 );
    res = refalrts::splice_elem( res, n233 );
    res = refalrts::splice_elem( res, n232 );
    refalrts::push_stack( n231 );
    refalrts::push_stack( n227 );
    res = refalrts::splice_elem( res, n231 );
    res = refalrts::splice_elem( res, n230 );
    res = refalrts::splice_elem( res, n229 );
    res = refalrts::splice_elem( res, n228 );
    res = refalrts::splice_elem( res, n227 );
    res = refalrts::splice_elem( res, n226 );
    res = refalrts::splice_elem( res, n225 );
    res = refalrts::splice_elem( res, n224 );
    res = refalrts::splice_elem( res, n223 );
    res = refalrts::splice_elem( res, n222 );
    res = refalrts::splice_elem( res, n221 );
    refalrts::push_stack( n220 );
    refalrts::push_stack( n216 );
    res = refalrts::splice_elem( res, n220 );
    res = refalrts::splice_elem( res, n219 );
    res = refalrts::splice_elem( res, n218 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_elem( res, n215 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    refalrts::link_brackets( n133, n183 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    refalrts::push_stack( n179 );
    refalrts::push_stack( n175 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_elem( res, n171 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    refalrts::push_stack( n168 );
    refalrts::push_stack( n164 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_elem( res, n155 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_elem( res, n139 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    refalrts::link_brackets( n82, n132 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    res = refalrts::splice_elem( res, n130 );
    res = refalrts::splice_elem( res, n129 );
    refalrts::push_stack( n128 );
    refalrts::push_stack( n124 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_elem( res, n122 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    refalrts::push_stack( n117 );
    refalrts::push_stack( n113 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_elem( res, n109 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    refalrts::link_brackets( n51, n81 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    refalrts::push_stack( n69 );
    refalrts::push_stack( n65 );
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
    refalrts::link_brackets( n18, n50 );
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
    refalrts::push_stack( n36 );
    refalrts::push_stack( n32 );
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
    refalrts::link_brackets( n0, n17 );
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
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCloseBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenSentence_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eGenerated_b_1;
    refalrts::use( eGenerated_b_1 );
    static refalrts::Iter eGenerated_e_1;
    refalrts::use( eGenerated_e_1 );
    // (~1 e.Indent )~1 e.Generated
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eGenerated_b_1 = bb_0;
    refalrts::use( eGenerated_b_1 );
    eGenerated_e_1 = be_0;
    refalrts::use( eGenerated_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eGenerated_b_1, & eGenerated_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCloseBrackets, (void*) "GenCloseBrackets"},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
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
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenCloseBrackets, "GenCloseBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eGenerated_b_1, eGenerated_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult BracketsVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    // s.BracketNum s.Nested
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNested_1},
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
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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

static refalrts::FnResult BracketsVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    // s.BracketNum s.Nested
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNested_1},
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
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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

static refalrts::FnResult BracketsVar_OE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    // s.BracketNum s.Nested
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNested_1},
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
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
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
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintEVar_OE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintArrEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult StringFromCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintStkBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sStkBracket_1;
    refalrts::use( sStkBracket_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sStkBracket_2;
    refalrts::use( sStkBracket_2 );
    static refalrts::Iter sStkBracket_3;
    refalrts::use( sStkBracket_3 );
    static refalrts::Iter sStkBracket_4;
    refalrts::use( sStkBracket_4 );
    static refalrts::Iter sNested_2;
    refalrts::use( sNested_2 );
    static refalrts::Iter sNested_3;
    refalrts::use( sNested_3 );
    static refalrts::Iter sNested_4;
    refalrts::use( sNested_4 );
    // e.Indent (~1 s.StkBracket s.Nested )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sStkBracket_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sStkBracket_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_2, sStkBracket_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_3, sStkBracket_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStkBracket_4, sStkBracket_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_2, sNested_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_3, sNested_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_4, sNested_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & BracketsVar_B, "BracketsVar_B" ) )
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
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n22, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, sNested_4 );
    res = refalrts::splice_stvar( res, sStkBracket_4 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n32 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, sNested_3 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_stvar( res, sStkBracket_3 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n0, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sNested_2 );
    res = refalrts::splice_stvar( res, sStkBracket_2 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sStkBracket_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

//$LABEL CCreateClosure
template <typename T>
struct CCreateClosureL_ {
  static const char *name() {
    return "CCreateClosure";
  }
};

static refalrts::FnResult PrintName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // # CCreateClosure
    if( ! refalrts::ident_left(  & CCreateClosureL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.Name
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eText_b_1;
    refalrts::use( eText_b_1 );
    static refalrts::Iter eText_e_1;
    refalrts::use( eText_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdComment e.Text )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdComment, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eText_b_1 = bb_2;
    refalrts::use( eText_b_1 );
    eText_e_1 = be_2;
    refalrts::use( eText_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icChar, 0, 0, '/'},
      {refalrts::icSpliceEVar, & eText_b_1, & eText_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '/' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eText_b_1;
    refalrts::use( eText_b_1 );
    static refalrts::Iter eText_e_1;
    refalrts::use( eText_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdPrint e.Text )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdPrint, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eText_b_1 = bb_2;
    refalrts::use( eText_b_1 );
    eText_e_1 = be_2;
    refalrts::use( eText_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icSpliceEVar, & eText_b_1, & eText_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eVarInfo_b_2;
    refalrts::use( eVarInfo_b_2 );
    static refalrts::Iter eVarInfo_e_2;
    refalrts::use( eVarInfo_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdDeclareEVar e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdDeclareEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopyEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eVarInfo_b_2, eVarInfo_e_2, eVarInfo_b_1, eVarInfo_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_name( n42, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_close_bracket( n63 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n33, n63 );
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
    refalrts::push_stack( n43 );
    refalrts::push_stack( n41 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_evar( res, eVarInfo_b_2, eVarInfo_e_2 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n2, n32 );
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdDeclareVar e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdDeclareVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n32 );
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdChar s.Direction s.BracketNum s.Nested s.Char )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdChar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchChar, (void*) "PrintMatchChar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchChar, "PrintMatchChar" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdNumber s.Direction s.BracketNum s.Nested s.Number )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdNumber, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchNumber, (void*) "PrintMatchNumber"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchNumber, "PrintMatchNumber" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdName s.Direction s.BracketNum s.Nested e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdName, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchName, (void*) "PrintMatchName"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchName, "PrintMatchName" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdIdent s.Direction s.BracketNum s.Nested e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdIdent, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchIdent, (void*) "PrintMatchIdent"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchIdent, "PrintMatchIdent" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sInnerBrackets_1;
    refalrts::use( sInnerBrackets_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter sInnerBrackets_2;
    refalrts::use( sInnerBrackets_2 );
    static refalrts::Iter sInnerBrackets_3;
    refalrts::use( sInnerBrackets_3 );
    // (~1 e.Indent )~1 (~2 & CmdBrackets s.Direction s.BracketNum s.Nested s.InnerBrackets )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerBrackets_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerBrackets_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchBrackets, (void*) "PrintMatchBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_2, sInnerBrackets_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_3, sInnerBrackets_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_number( n12, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_number( n30, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & PrintMatchBrackets, "PrintMatchBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n42 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n40, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n20, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n2, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sInnerBrackets_1;
    refalrts::use( sInnerBrackets_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter sInnerBrackets_2;
    refalrts::use( sInnerBrackets_2 );
    static refalrts::Iter sInnerBrackets_3;
    refalrts::use( sInnerBrackets_3 );
    // (~1 e.Indent )~1 (~2 & CmdADT s.Direction s.BracketNum s.Nested s.InnerBrackets e.Name )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdADT, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerBrackets_1, bb_2, be_2 ) ) 
      break;
    eName_b_1 = bb_2;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_2;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerBrackets_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '0'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchADT, (void*) "PrintMatchADT"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icCopySTVar, & sInnerBrackets_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_2, sInnerBrackets_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sInnerBrackets_3, sInnerBrackets_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_number( n12, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_number( n30, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '0' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & PrintMatchADT, "PrintMatchADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n42 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sInnerBrackets_3 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n40, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n20, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sInnerBrackets_2 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n2, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sInnerBrackets_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdEmpty s.BracketNum s.Nested )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmpty, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchEmpty, (void*) "PrintMatchEmpty"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchEmpty, "PrintMatchEmpty" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdVar s.Direction s.BracketNum s.Nested s.Mode e.Info )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchSTVar, (void*) "PrintMatchSTVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchSTVar, "PrintMatchSTVar" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eVarInfo_b_1;
    refalrts::use( eVarInfo_b_1 );
    static refalrts::Iter eVarInfo_e_1;
    refalrts::use( eVarInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdRepeated s.Direction s.BracketNum s.Nested e.VarInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdRepeated, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    eVarInfo_b_1 = bb_2;
    refalrts::use( eVarInfo_b_1 );
    eVarInfo_e_1 = be_2;
    refalrts::use( eVarInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatchRepeated, (void*) "PrintMatchRepeated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icSpliceEVar, & eVarInfo_b_1, & eVarInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
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
    if( ! refalrts::alloc_name( n3, & PrintMatchRepeated, "PrintMatchRepeated" ) )
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
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eVarInfo_b_1, eVarInfo_e_1 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter eIndent_b_5;
    refalrts::use( eIndent_b_5 );
    static refalrts::Iter eIndent_e_5;
    refalrts::use( eIndent_e_5 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    static refalrts::Iter sBracketNum_2;
    refalrts::use( sBracketNum_2 );
    static refalrts::Iter sNested_2;
    refalrts::use( sNested_2 );
    // (~1 e.Indent )~1 (~2 & CmdClosedE & AlgLeft s.BracketNum s.Nested 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdClosedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_2, sBracketNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_2, sNested_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_name( n36, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_number( n37, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_open_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_open_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_name( n46, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_number( n47, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_open_call( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_name( n54, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_bracket( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_open_call( n77 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_name( n78, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_number( n79, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_close_call( n81 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_close_bracket( n85 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n58, n85 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    refalrts::push_stack( n81 );
    refalrts::push_stack( n77 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
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
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n58 );
    refalrts::link_brackets( n44, n57 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    refalrts::push_stack( n55 );
    refalrts::push_stack( n53 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_stvar( res, sNested_2 );
    res = refalrts::splice_stvar( res, sBracketNum_2 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    refalrts::push_stack( n49 );
    refalrts::push_stack( n45 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::link_brackets( n16, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n35 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
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
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n2, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eBracketsForSave_b_1;
    refalrts::use( eBracketsForSave_b_1 );
    static refalrts::Iter eBracketsForSave_e_1;
    refalrts::use( eBracketsForSave_e_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    static refalrts::Iter eIndent_b_5;
    refalrts::use( eIndent_b_5 );
    static refalrts::Iter eIndent_e_5;
    refalrts::use( eIndent_e_5 );
    static refalrts::Iter eIndent_b_6;
    refalrts::use( eIndent_b_6 );
    static refalrts::Iter eIndent_e_6;
    refalrts::use( eIndent_e_6 );
    static refalrts::Iter eIndent_b_7;
    refalrts::use( eIndent_b_7 );
    static refalrts::Iter eIndent_e_7;
    refalrts::use( eIndent_e_7 );
    static refalrts::Iter eIndent_b_8;
    refalrts::use( eIndent_b_8 );
    static refalrts::Iter eIndent_e_8;
    refalrts::use( eIndent_e_8 );
    static refalrts::Iter eIndent_b_9;
    refalrts::use( eIndent_b_9 );
    static refalrts::Iter eIndent_e_9;
    refalrts::use( eIndent_e_9 );
    static refalrts::Iter eIndent_b_10;
    refalrts::use( eIndent_b_10 );
    static refalrts::Iter eIndent_e_10;
    refalrts::use( eIndent_e_10 );
    static refalrts::Iter eIndent_b_11;
    refalrts::use( eIndent_b_11 );
    static refalrts::Iter eIndent_e_11;
    refalrts::use( eIndent_e_11 );
    static refalrts::Iter sBracketNum_2;
    refalrts::use( sBracketNum_2 );
    static refalrts::Iter sBracketNum_3;
    refalrts::use( sBracketNum_3 );
    static refalrts::Iter sBracketNum_4;
    refalrts::use( sBracketNum_4 );
    static refalrts::Iter sBracketNum_5;
    refalrts::use( sBracketNum_5 );
    static refalrts::Iter sBracketNum_6;
    refalrts::use( sBracketNum_6 );
    static refalrts::Iter sBracketNum_7;
    refalrts::use( sBracketNum_7 );
    static refalrts::Iter sBracketNum_8;
    refalrts::use( sBracketNum_8 );
    static refalrts::Iter sBracketNum_9;
    refalrts::use( sBracketNum_9 );
    static refalrts::Iter sBracketNum_10;
    refalrts::use( sBracketNum_10 );
    static refalrts::Iter sNested_2;
    refalrts::use( sNested_2 );
    static refalrts::Iter sNested_3;
    refalrts::use( sNested_3 );
    static refalrts::Iter sNested_4;
    refalrts::use( sNested_4 );
    static refalrts::Iter sNested_5;
    refalrts::use( sNested_5 );
    static refalrts::Iter sNested_6;
    refalrts::use( sNested_6 );
    static refalrts::Iter sNested_7;
    refalrts::use( sNested_7 );
    static refalrts::Iter sNested_8;
    refalrts::use( sNested_8 );
    static refalrts::Iter sNested_9;
    refalrts::use( sNested_9 );
    static refalrts::Iter sNested_10;
    refalrts::use( sNested_10 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    // (~1 e.Indent )~1 (~2 & CmdOpenedE & AlgLeft s.BracketNum s.Nested 'e e.Index (~3 e.BracketsForSave )~3 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eBracketsForSave_b_1 = bb_3;
    refalrts::use( eBracketsForSave_b_1 );
    eBracketsForSave_e_1 = be_3;
    refalrts::use( eBracketsForSave_e_1 );
    if( ! refalrts::svar_left( sBracketNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_OE, (void*) "BracketsVar_OE"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_OE, (void*) "BracketsVar_OE"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_OE, (void*) "BracketsVar_OE"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '{'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & PrintStkBracket, (void*) "PrintStkBracket"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eBracketsForSave_b_1, & eBracketsForSave_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_OE, (void*) "BracketsVar_OE"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_OE, (void*) "BracketsVar_OE"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_5, eIndent_e_5, eIndent_b_4, eIndent_e_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_6, eIndent_e_6, eIndent_b_5, eIndent_e_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_7, eIndent_e_7, eIndent_b_6, eIndent_e_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_8, eIndent_e_8, eIndent_b_7, eIndent_e_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_9, eIndent_e_9, eIndent_b_8, eIndent_e_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_10, eIndent_e_10, eIndent_b_9, eIndent_e_9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_11, eIndent_e_11, eIndent_b_10, eIndent_e_10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_2, sBracketNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_3, sBracketNum_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_4, sBracketNum_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_5, sBracketNum_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_6, sBracketNum_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_7, sBracketNum_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_8, sBracketNum_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_9, sBracketNum_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_10, sBracketNum_9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_2, sNested_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_3, sNested_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_4, sNested_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_5, sNested_4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_6, sNested_5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_7, sNested_6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_8, sNested_7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_9, sNested_8 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_10, sNested_9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & BracketsVar_OE, "BracketsVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_open_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_name( n56, & BracketsVar_OE, "BracketsVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_call( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_call( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_name( n61, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_call( n62 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_bracket( n66 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_open_bracket( n67 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_open_call( n94 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_name( n95, & BracketsVar_OE, "BracketsVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_close_call( n96 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_open_call( n103 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_name( n104, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_close_call( n105 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_char( n107, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n108 = 0;
    if( ! refalrts::alloc_close_bracket( n108 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n109 = 0;
    if( ! refalrts::alloc_open_bracket( n109 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n110 = 0;
    if( ! refalrts::alloc_char( n110, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n111 = 0;
    if( ! refalrts::alloc_char( n111, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n112 = 0;
    if( ! refalrts::alloc_char( n112, '{' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n113 = 0;
    if( ! refalrts::alloc_close_bracket( n113 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n114 = 0;
    if( ! refalrts::alloc_open_call( n114 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n115 = 0;
    if( ! refalrts::alloc_name( n115, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n116 = 0;
    if( ! refalrts::alloc_open_bracket( n116 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n117 = 0;
    if( ! refalrts::alloc_name( n117, & PrintStkBracket, "PrintStkBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n118 = 0;
    if( ! refalrts::alloc_char( n118, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n119 = 0;
    if( ! refalrts::alloc_char( n119, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n120 = 0;
    if( ! refalrts::alloc_close_bracket( n120 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n121 = 0;
    if( ! refalrts::alloc_close_call( n121 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n122 = 0;
    if( ! refalrts::alloc_open_bracket( n122 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n123 = 0;
    if( ! refalrts::alloc_char( n123, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n124 = 0;
    if( ! refalrts::alloc_char( n124, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n125 = 0;
    if( ! refalrts::alloc_open_call( n125 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n126 = 0;
    if( ! refalrts::alloc_name( n126, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n127 = 0;
    if( ! refalrts::alloc_open_call( n127 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n128 = 0;
    if( ! refalrts::alloc_name( n128, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n129 = 0;
    if( ! refalrts::alloc_close_call( n129 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n130 = 0;
    if( ! refalrts::alloc_close_call( n130 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n131 = 0;
    if( ! refalrts::alloc_char( n131, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n132 = 0;
    if( ! refalrts::alloc_char( n132, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n133 = 0;
    if( ! refalrts::alloc_char( n133, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n134 = 0;
    if( ! refalrts::alloc_open_call( n134 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n135 = 0;
    if( ! refalrts::alloc_name( n135, & BracketsVar_OE, "BracketsVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n136 = 0;
    if( ! refalrts::alloc_close_call( n136 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n137 = 0;
    if( ! refalrts::alloc_char( n137, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n138 = 0;
    if( ! refalrts::alloc_close_bracket( n138 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n139 = 0;
    if( ! refalrts::alloc_open_bracket( n139 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n140 = 0;
    if( ! refalrts::alloc_char( n140, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n141 = 0;
    if( ! refalrts::alloc_char( n141, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n142 = 0;
    if( ! refalrts::alloc_open_call( n142 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n143 = 0;
    if( ! refalrts::alloc_name( n143, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n144 = 0;
    if( ! refalrts::alloc_number( n144, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n145 = 0;
    if( ! refalrts::alloc_char( n145, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n146 = 0;
    if( ! refalrts::alloc_close_call( n146 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n147 = 0;
    if( ! refalrts::alloc_char( n147, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n148 = 0;
    if( ! refalrts::alloc_char( n148, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n149 = 0;
    if( ! refalrts::alloc_char( n149, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n150 = 0;
    if( ! refalrts::alloc_open_call( n150 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n151 = 0;
    if( ! refalrts::alloc_name( n151, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n152 = 0;
    if( ! refalrts::alloc_close_call( n152 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n153 = 0;
    if( ! refalrts::alloc_char( n153, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n154 = 0;
    if( ! refalrts::alloc_close_bracket( n154 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n155 = 0;
    if( ! refalrts::alloc_open_bracket( n155 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n156 = 0;
    if( ! refalrts::alloc_char( n156, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n157 = 0;
    if( ! refalrts::alloc_char( n157, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n158 = 0;
    if( ! refalrts::alloc_open_call( n158 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n159 = 0;
    if( ! refalrts::alloc_name( n159, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n160 = 0;
    if( ! refalrts::alloc_number( n160, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n161 = 0;
    if( ! refalrts::alloc_char( n161, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n162 = 0;
    if( ! refalrts::alloc_close_call( n162 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n163 = 0;
    if( ! refalrts::alloc_char( n163, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n164 = 0;
    if( ! refalrts::alloc_char( n164, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n165 = 0;
    if( ! refalrts::alloc_char( n165, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n166 = 0;
    if( ! refalrts::alloc_open_call( n166 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n167 = 0;
    if( ! refalrts::alloc_name( n167, & BracketsVar_OE, "BracketsVar_OE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n168 = 0;
    if( ! refalrts::alloc_close_call( n168 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n169 = 0;
    if( ! refalrts::alloc_char( n169, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n170 = 0;
    if( ! refalrts::alloc_close_bracket( n170 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n171 = 0;
    if( ! refalrts::alloc_open_bracket( n171 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n172 = 0;
    if( ! refalrts::alloc_char( n172, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n173 = 0;
    if( ! refalrts::alloc_char( n173, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n174 = 0;
    if( ! refalrts::alloc_char( n174, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n175 = 0;
    if( ! refalrts::alloc_char( n175, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n176 = 0;
    if( ! refalrts::alloc_char( n176, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n177 = 0;
    if( ! refalrts::alloc_char( n177, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n178 = 0;
    if( ! refalrts::alloc_char( n178, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n179 = 0;
    if( ! refalrts::alloc_char( n179, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n180 = 0;
    if( ! refalrts::alloc_char( n180, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n181 = 0;
    if( ! refalrts::alloc_char( n181, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n182 = 0;
    if( ! refalrts::alloc_char( n182, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n183 = 0;
    if( ! refalrts::alloc_char( n183, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n184 = 0;
    if( ! refalrts::alloc_char( n184, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n185 = 0;
    if( ! refalrts::alloc_char( n185, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n186 = 0;
    if( ! refalrts::alloc_char( n186, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n187 = 0;
    if( ! refalrts::alloc_char( n187, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n188 = 0;
    if( ! refalrts::alloc_char( n188, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n189 = 0;
    if( ! refalrts::alloc_char( n189, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n190 = 0;
    if( ! refalrts::alloc_char( n190, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n191 = 0;
    if( ! refalrts::alloc_char( n191, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n192 = 0;
    if( ! refalrts::alloc_char( n192, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n193 = 0;
    if( ! refalrts::alloc_char( n193, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n194 = 0;
    if( ! refalrts::alloc_char( n194, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n195 = 0;
    if( ! refalrts::alloc_char( n195, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n196 = 0;
    if( ! refalrts::alloc_char( n196, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n197 = 0;
    if( ! refalrts::alloc_char( n197, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n198 = 0;
    if( ! refalrts::alloc_char( n198, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n199 = 0;
    if( ! refalrts::alloc_open_call( n199 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n200 = 0;
    if( ! refalrts::alloc_name( n200, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n201 = 0;
    if( ! refalrts::alloc_number( n201, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n202 = 0;
    if( ! refalrts::alloc_char( n202, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n203 = 0;
    if( ! refalrts::alloc_close_call( n203 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n204 = 0;
    if( ! refalrts::alloc_char( n204, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n205 = 0;
    if( ! refalrts::alloc_char( n205, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n206 = 0;
    if( ! refalrts::alloc_char( n206, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n207 = 0;
    if( ! refalrts::alloc_char( n207, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n208 = 0;
    if( ! refalrts::alloc_char( n208, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n209 = 0;
    if( ! refalrts::alloc_char( n209, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n210 = 0;
    if( ! refalrts::alloc_open_call( n210 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n211 = 0;
    if( ! refalrts::alloc_name( n211, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n212 = 0;
    if( ! refalrts::alloc_number( n212, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n213 = 0;
    if( ! refalrts::alloc_char( n213, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n214 = 0;
    if( ! refalrts::alloc_close_call( n214 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n215 = 0;
    if( ! refalrts::alloc_char( n215, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n216 = 0;
    if( ! refalrts::alloc_char( n216, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n217 = 0;
    if( ! refalrts::alloc_char( n217, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n218 = 0;
    if( ! refalrts::alloc_close_bracket( n218 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n171, n218 );
    res = refalrts::splice_elem( res, n218 );
    res = refalrts::splice_elem( res, n217 );
    res = refalrts::splice_elem( res, n216 );
    res = refalrts::splice_elem( res, n215 );
    refalrts::push_stack( n214 );
    refalrts::push_stack( n210 );
    res = refalrts::splice_elem( res, n214 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n213 );
    res = refalrts::splice_elem( res, n212 );
    res = refalrts::splice_elem( res, n211 );
    res = refalrts::splice_elem( res, n210 );
    res = refalrts::splice_elem( res, n209 );
    res = refalrts::splice_elem( res, n208 );
    res = refalrts::splice_elem( res, n207 );
    res = refalrts::splice_elem( res, n206 );
    res = refalrts::splice_elem( res, n205 );
    res = refalrts::splice_elem( res, n204 );
    refalrts::push_stack( n203 );
    refalrts::push_stack( n199 );
    res = refalrts::splice_elem( res, n203 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n202 );
    res = refalrts::splice_elem( res, n201 );
    res = refalrts::splice_elem( res, n200 );
    res = refalrts::splice_elem( res, n199 );
    res = refalrts::splice_elem( res, n198 );
    res = refalrts::splice_elem( res, n197 );
    res = refalrts::splice_elem( res, n196 );
    res = refalrts::splice_elem( res, n195 );
    res = refalrts::splice_elem( res, n194 );
    res = refalrts::splice_elem( res, n193 );
    res = refalrts::splice_elem( res, n192 );
    res = refalrts::splice_elem( res, n191 );
    res = refalrts::splice_elem( res, n190 );
    res = refalrts::splice_elem( res, n189 );
    res = refalrts::splice_elem( res, n188 );
    res = refalrts::splice_elem( res, n187 );
    res = refalrts::splice_elem( res, n186 );
    res = refalrts::splice_elem( res, n185 );
    res = refalrts::splice_elem( res, n184 );
    res = refalrts::splice_elem( res, n183 );
    res = refalrts::splice_elem( res, n182 );
    res = refalrts::splice_elem( res, n181 );
    res = refalrts::splice_elem( res, n180 );
    res = refalrts::splice_elem( res, n179 );
    res = refalrts::splice_elem( res, n178 );
    res = refalrts::splice_elem( res, n177 );
    res = refalrts::splice_elem( res, n176 );
    res = refalrts::splice_elem( res, n175 );
    res = refalrts::splice_elem( res, n174 );
    res = refalrts::splice_elem( res, n173 );
    res = refalrts::splice_elem( res, n172 );
    res = refalrts::splice_evar( res, eIndent_b_11, eIndent_e_11 );
    res = refalrts::splice_elem( res, n171 );
    refalrts::link_brackets( n155, n170 );
    res = refalrts::splice_elem( res, n170 );
    res = refalrts::splice_elem( res, n169 );
    refalrts::push_stack( n168 );
    refalrts::push_stack( n166 );
    res = refalrts::splice_elem( res, n168 );
    res = refalrts::splice_stvar( res, sNested_10 );
    res = refalrts::splice_stvar( res, sBracketNum_10 );
    res = refalrts::splice_elem( res, n167 );
    res = refalrts::splice_elem( res, n166 );
    res = refalrts::splice_elem( res, n165 );
    res = refalrts::splice_elem( res, n164 );
    res = refalrts::splice_elem( res, n163 );
    refalrts::push_stack( n162 );
    refalrts::push_stack( n158 );
    res = refalrts::splice_elem( res, n162 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n161 );
    res = refalrts::splice_elem( res, n160 );
    res = refalrts::splice_elem( res, n159 );
    res = refalrts::splice_elem( res, n158 );
    res = refalrts::splice_elem( res, n157 );
    res = refalrts::splice_elem( res, n156 );
    res = refalrts::splice_evar( res, eIndent_b_10, eIndent_e_10 );
    res = refalrts::splice_elem( res, n155 );
    refalrts::link_brackets( n139, n154 );
    res = refalrts::splice_elem( res, n154 );
    res = refalrts::splice_elem( res, n153 );
    refalrts::push_stack( n152 );
    refalrts::push_stack( n150 );
    res = refalrts::splice_elem( res, n152 );
    res = refalrts::splice_stvar( res, sNested_9 );
    res = refalrts::splice_stvar( res, sBracketNum_9 );
    res = refalrts::splice_elem( res, n151 );
    res = refalrts::splice_elem( res, n150 );
    res = refalrts::splice_elem( res, n149 );
    res = refalrts::splice_elem( res, n148 );
    res = refalrts::splice_elem( res, n147 );
    refalrts::push_stack( n146 );
    refalrts::push_stack( n142 );
    res = refalrts::splice_elem( res, n146 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n145 );
    res = refalrts::splice_elem( res, n144 );
    res = refalrts::splice_elem( res, n143 );
    res = refalrts::splice_elem( res, n142 );
    res = refalrts::splice_elem( res, n141 );
    res = refalrts::splice_elem( res, n140 );
    res = refalrts::splice_evar( res, eIndent_b_9, eIndent_e_9 );
    res = refalrts::splice_elem( res, n139 );
    refalrts::link_brackets( n122, n138 );
    res = refalrts::splice_elem( res, n138 );
    res = refalrts::splice_elem( res, n137 );
    refalrts::push_stack( n136 );
    refalrts::push_stack( n134 );
    res = refalrts::splice_elem( res, n136 );
    res = refalrts::splice_stvar( res, sNested_8 );
    res = refalrts::splice_stvar( res, sBracketNum_8 );
    res = refalrts::splice_elem( res, n135 );
    res = refalrts::splice_elem( res, n134 );
    res = refalrts::splice_elem( res, n133 );
    res = refalrts::splice_elem( res, n132 );
    res = refalrts::splice_elem( res, n131 );
    refalrts::push_stack( n130 );
    refalrts::push_stack( n125 );
    res = refalrts::splice_elem( res, n130 );
    refalrts::push_stack( n129 );
    refalrts::push_stack( n127 );
    res = refalrts::splice_elem( res, n129 );
    res = refalrts::splice_stvar( res, sNested_7 );
    res = refalrts::splice_elem( res, n128 );
    res = refalrts::splice_elem( res, n127 );
    res = refalrts::splice_stvar( res, sBracketNum_7 );
    res = refalrts::splice_elem( res, n126 );
    res = refalrts::splice_elem( res, n125 );
    res = refalrts::splice_elem( res, n124 );
    res = refalrts::splice_elem( res, n123 );
    res = refalrts::splice_evar( res, eIndent_b_8, eIndent_e_8 );
    res = refalrts::splice_elem( res, n122 );
    refalrts::push_stack( n121 );
    refalrts::push_stack( n114 );
    res = refalrts::splice_elem( res, n121 );
    res = refalrts::splice_evar( res, eBracketsForSave_b_1, eBracketsForSave_e_1 );
    refalrts::link_brackets( n116, n120 );
    res = refalrts::splice_elem( res, n120 );
    res = refalrts::splice_elem( res, n119 );
    res = refalrts::splice_elem( res, n118 );
    res = refalrts::splice_evar( res, eIndent_b_7, eIndent_e_7 );
    res = refalrts::splice_elem( res, n117 );
    res = refalrts::splice_elem( res, n116 );
    res = refalrts::splice_elem( res, n115 );
    res = refalrts::splice_elem( res, n114 );
    refalrts::link_brackets( n109, n113 );
    res = refalrts::splice_elem( res, n113 );
    res = refalrts::splice_elem( res, n112 );
    res = refalrts::splice_elem( res, n111 );
    res = refalrts::splice_elem( res, n110 );
    res = refalrts::splice_evar( res, eIndent_b_6, eIndent_e_6 );
    res = refalrts::splice_elem( res, n109 );
    refalrts::link_brackets( n67, n108 );
    res = refalrts::splice_elem( res, n108 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    refalrts::push_stack( n105 );
    refalrts::push_stack( n103 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_stvar( res, sNested_6 );
    res = refalrts::splice_stvar( res, sBracketNum_6 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    refalrts::push_stack( n96 );
    refalrts::push_stack( n94 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_stvar( res, sNested_5 );
    res = refalrts::splice_stvar( res, sBracketNum_5 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_evar( res, eIndent_b_5, eIndent_e_5 );
    res = refalrts::splice_elem( res, n67 );
    refalrts::link_brackets( n31, n66 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::push_stack( n62 );
    refalrts::push_stack( n60 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_stvar( res, sNested_4 );
    res = refalrts::splice_stvar( res, sBracketNum_4 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    refalrts::push_stack( n57 );
    refalrts::push_stack( n55 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_stvar( res, sNested_3 );
    res = refalrts::splice_stvar( res, sBracketNum_3 );
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
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::link_brackets( n10, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sNested_2 );
    res = refalrts::splice_stvar( res, sBracketNum_2 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    // (~1 e.Indent )~1 (~2 & CmdEmptyResult )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmptyResult, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
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
    if( ! refalrts::alloc_char( n5, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_close_bracket( n57 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n33, n57 );
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
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n4, n32 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sUsings_3;
    refalrts::use( sUsings_3 );
    static refalrts::Iter sUsings_4;
    refalrts::use( sUsings_4 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    // (~1 e.Indent )~1 (~2 & CmdCopyEVar s.Usings 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdCopyEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_3, sUsings_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_4, sUsings_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_open_call( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_name( n50, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_open_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_name( n52, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_close_call( n53 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_open_call( n58 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_name( n59, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_open_call( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_name( n61, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_close_call( n62 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_close_call( n64 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_close_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_open_bracket( n70 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_char( n103, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n104 = 0;
    if( ! refalrts::alloc_char( n104, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n105 = 0;
    if( ! refalrts::alloc_char( n105, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n106 = 0;
    if( ! refalrts::alloc_char( n106, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n107 = 0;
    if( ! refalrts::alloc_close_bracket( n107 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n70, n107 );
    res = refalrts::splice_elem( res, n107 );
    res = refalrts::splice_elem( res, n106 );
    res = refalrts::splice_elem( res, n105 );
    res = refalrts::splice_elem( res, n104 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n70 );
    refalrts::link_brackets( n2, n69 );
    res = refalrts::splice_elem( res, n69 );
    res = refalrts::splice_elem( res, n68 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    refalrts::push_stack( n64 );
    refalrts::push_stack( n58 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n63 );
    refalrts::push_stack( n62 );
    refalrts::push_stack( n60 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_stvar( res, sUsings_4 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    refalrts::push_stack( n55 );
    refalrts::push_stack( n49 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n54 );
    refalrts::push_stack( n53 );
    refalrts::push_stack( n51 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_stvar( res, sUsings_3 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    refalrts::push_stack( n46 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdCopyVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdCopyVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_name( n42, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_open_bracket( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_char( n68, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_char( n69, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_close_bracket( n87 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n50, n87 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
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
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n50 );
    refalrts::link_brackets( n2, n49 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n43 );
    refalrts::push_stack( n41 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n34 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eElemInfo_b_1;
    refalrts::use( eElemInfo_b_1 );
    static refalrts::Iter eElemInfo_e_1;
    refalrts::use( eElemInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sElemNumber_2;
    refalrts::use( sElemNumber_2 );
    // (~1 e.Indent )~1 (~2 & CmdAllocateElem s.ElemNumber e.ElemInfo )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdAllocateElem, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    eElemInfo_b_1 = bb_2;
    refalrts::use( eElemInfo_b_1 );
    eElemInfo_e_1 = be_2;
    refalrts::use( eElemInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '6'},
      {refalrts::icChar, 0, 0, '4'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintAllocateElem, (void*) "PrintAllocateElem"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopySTVar, & sElemNumber_1},
      {refalrts::icSpliceEVar, & eElemInfo_b_1, & eElemInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElemNumber_2, sElemNumber_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '6' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '4' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & PrintAllocateElem, "PrintAllocateElem" ) )
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
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eElemInfo_b_1, eElemInfo_e_1 );
    res = refalrts::splice_stvar( res, sElemNumber_2 );
    refalrts::link_brackets( n35, n36 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n2, n32 );
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sLeft_1;
    refalrts::use( sLeft_1 );
    static refalrts::Iter sRight_1;
    refalrts::use( sRight_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdLinkBrackets s.Left s.Right )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdLinkBrackets, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sLeft_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sRight_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sLeft_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sRight_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '_' ) )
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
    if( ! refalrts::alloc_char( n24, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n32 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, sRight_1 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, sLeft_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdPushStack s.ElemNumber )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdPushStack, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
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
    if( ! refalrts::alloc_char( n22, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n30 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertElem & ElElem s.ElemNumber )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & ElElem, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::push_stack( n38 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertElem & ElSTVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & ElSTVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n43 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdInsertEVar s.Usings 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdInsertEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '='},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '=' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_close_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n49 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 (~2 & CmdCheckEVar s.Usings 'e e.Index )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdCheckEVar, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n45 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::push_stack( n41 );
    refalrts::push_stack( n38 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter eIndent_b_4;
    refalrts::use( eIndent_b_4 );
    static refalrts::Iter eIndent_e_4;
    refalrts::use( eIndent_e_4 );
    // (~1 e.Indent )~1 (~2 & CmdReturnResult )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdReturnResult, bb_2, be_2 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_4, eIndent_e_4, eIndent_b_3, eIndent_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '(' ) )
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
    if( ! refalrts::alloc_char( n19, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_char( n66, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_char( n67, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n68 = 0;
    if( ! refalrts::alloc_close_bracket( n68 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n69 = 0;
    if( ! refalrts::alloc_open_bracket( n69 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n70 = 0;
    if( ! refalrts::alloc_char( n70, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n71 = 0;
    if( ! refalrts::alloc_char( n71, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n72 = 0;
    if( ! refalrts::alloc_char( n72, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n73 = 0;
    if( ! refalrts::alloc_char( n73, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n74 = 0;
    if( ! refalrts::alloc_char( n74, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n75 = 0;
    if( ! refalrts::alloc_char( n75, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n76 = 0;
    if( ! refalrts::alloc_char( n76, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n77 = 0;
    if( ! refalrts::alloc_char( n77, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n78 = 0;
    if( ! refalrts::alloc_char( n78, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n79 = 0;
    if( ! refalrts::alloc_char( n79, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n80 = 0;
    if( ! refalrts::alloc_char( n80, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n81 = 0;
    if( ! refalrts::alloc_char( n81, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n82 = 0;
    if( ! refalrts::alloc_char( n82, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n83 = 0;
    if( ! refalrts::alloc_char( n83, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n84 = 0;
    if( ! refalrts::alloc_char( n84, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n85 = 0;
    if( ! refalrts::alloc_char( n85, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n86 = 0;
    if( ! refalrts::alloc_char( n86, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n87 = 0;
    if( ! refalrts::alloc_char( n87, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n88 = 0;
    if( ! refalrts::alloc_char( n88, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n89 = 0;
    if( ! refalrts::alloc_char( n89, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n90 = 0;
    if( ! refalrts::alloc_char( n90, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n91 = 0;
    if( ! refalrts::alloc_char( n91, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n92 = 0;
    if( ! refalrts::alloc_char( n92, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n93 = 0;
    if( ! refalrts::alloc_char( n93, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n94 = 0;
    if( ! refalrts::alloc_char( n94, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n95 = 0;
    if( ! refalrts::alloc_char( n95, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n96 = 0;
    if( ! refalrts::alloc_char( n96, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n97 = 0;
    if( ! refalrts::alloc_char( n97, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n98 = 0;
    if( ! refalrts::alloc_char( n98, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n99 = 0;
    if( ! refalrts::alloc_char( n99, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n100 = 0;
    if( ! refalrts::alloc_char( n100, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n101 = 0;
    if( ! refalrts::alloc_char( n101, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n102 = 0;
    if( ! refalrts::alloc_char( n102, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n103 = 0;
    if( ! refalrts::alloc_close_bracket( n103 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n69, n103 );
    res = refalrts::splice_elem( res, n103 );
    res = refalrts::splice_elem( res, n102 );
    res = refalrts::splice_elem( res, n101 );
    res = refalrts::splice_elem( res, n100 );
    res = refalrts::splice_elem( res, n99 );
    res = refalrts::splice_elem( res, n98 );
    res = refalrts::splice_elem( res, n97 );
    res = refalrts::splice_elem( res, n96 );
    res = refalrts::splice_elem( res, n95 );
    res = refalrts::splice_elem( res, n94 );
    res = refalrts::splice_elem( res, n93 );
    res = refalrts::splice_elem( res, n92 );
    res = refalrts::splice_elem( res, n91 );
    res = refalrts::splice_elem( res, n90 );
    res = refalrts::splice_elem( res, n89 );
    res = refalrts::splice_elem( res, n88 );
    res = refalrts::splice_elem( res, n87 );
    res = refalrts::splice_elem( res, n86 );
    res = refalrts::splice_elem( res, n85 );
    res = refalrts::splice_elem( res, n84 );
    res = refalrts::splice_elem( res, n83 );
    res = refalrts::splice_elem( res, n82 );
    res = refalrts::splice_elem( res, n81 );
    res = refalrts::splice_elem( res, n80 );
    res = refalrts::splice_elem( res, n79 );
    res = refalrts::splice_elem( res, n78 );
    res = refalrts::splice_elem( res, n77 );
    res = refalrts::splice_elem( res, n76 );
    res = refalrts::splice_elem( res, n75 );
    res = refalrts::splice_elem( res, n74 );
    res = refalrts::splice_elem( res, n73 );
    res = refalrts::splice_elem( res, n72 );
    res = refalrts::splice_elem( res, n71 );
    res = refalrts::splice_elem( res, n70 );
    res = refalrts::splice_evar( res, eIndent_b_4, eIndent_e_4 );
    res = refalrts::splice_elem( res, n69 );
    refalrts::link_brackets( n28, n68 );
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
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n2, n27 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
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
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintEVar_B(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
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
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintEVar_E(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // s.Usings s.Mode e.Index
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sUsings_1},
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
    if( ! refalrts::alloc_char( n0, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '\n'
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'n' ) )
      return refalrts::cNoMemory;
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
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
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
    // '\r'
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
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
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
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
    // '\''
    if( ! refalrts::char_left( '\'', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sOther_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintMatchChar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Char
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '\''},
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
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Number
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'L'},
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
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n4, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
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
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
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
    if( ! refalrts::alloc_char( n11, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::link_brackets( n4, n13 );
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
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
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
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter sInnerNum_2;
    refalrts::use( sInnerNum_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.InnerNum
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerNum_1},
      {refalrts::icInt, 0, 0, 0 },
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
    if( ! refalrts::copy_stvar( sInnerNum_2, sInnerNum_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_number( n20, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_number( n30, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n32 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::push_stack( n31 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sInnerNum_2 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n4, n13 );
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
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchADT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sInnerNum_2;
    refalrts::use( sInnerNum_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.InnerNum e.Name
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sInnerNum_1},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sInnerNum_2, sInnerNum_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_number( n15, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_number( n25, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n38 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sInnerNum_2 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult BreakerFromIndent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '      '
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ';' ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter eOtherIndent_b_1;
    refalrts::use( eOtherIndent_b_1 );
    static refalrts::Iter eOtherIndent_e_1;
    refalrts::use( eOtherIndent_e_1 );
    // e.OtherIndent
    eOtherIndent_b_1 = bb_0;
    refalrts::use( eOtherIndent_b_1 );
    eOtherIndent_e_1 = be_0;
    refalrts::use( eOtherIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ';' ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult PrintMatchEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sBracketNum_2;
    refalrts::use( sBracketNum_2 );
    static refalrts::Iter sNested_2;
    refalrts::use( sNested_2 );
    // (~1 e.Indent )~1 s.BracketNum s.Nested
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BreakerFromIndent, (void*) "BreakerFromIndent"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
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
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_2, sBracketNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_2, sNested_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_open_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_name( n43, & BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n39, n45 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n42 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n0, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_stvar( res, sNested_2 );
    res = refalrts::splice_stvar( res, sBracketNum_2 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
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
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StrFromDirection(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & AlgLeft
    if( ! refalrts::function_left( & AlgLeft, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
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
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 't' ) )
      return refalrts::cNoMemory;
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
    // & AlgRight
    if( ! refalrts::function_left( & AlgRight, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult VarMatchFunction(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // 's'
    if( ! refalrts::char_left( 's', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
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
    // 't'
    if( ! refalrts::char_left( 't', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'r' ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult PrintMatchSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarMatchFunction, (void*) "VarMatchFunction"},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & VarMatchFunction, "VarMatchFunction" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_number( n15, 1UL ) )
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
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatchRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sUsings_3;
    refalrts::use( sUsings_3 );
    static refalrts::Iter sUsings_4;
    refalrts::use( sUsings_4 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eIndex_b_4;
    refalrts::use( eIndex_b_4 );
    static refalrts::Iter eIndex_e_4;
    refalrts::use( eIndex_e_4 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Usings 'e e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_B, (void*) "PrintEVar_B"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintEVar_E, (void*) "PrintEVar_E"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_3, sUsings_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sUsings_4, sUsings_3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_4, eIndex_e_4, eIndex_b_3, eIndex_e_3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & PrintEVar_B, "PrintEVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_call( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_name( n42, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_open_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_name( n49, & PrintEVar_E, "PrintEVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_open_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_name( n51, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_call( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_close_call( n55 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n55 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n55 );
    refalrts::push_stack( n54 );
    refalrts::push_stack( n48 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_evar( res, eIndex_b_4, eIndex_e_4 );
    res = refalrts::splice_elem( res, n53 );
    refalrts::push_stack( n52 );
    refalrts::push_stack( n50 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_stvar( res, sUsings_4 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::push_stack( n43 );
    refalrts::push_stack( n41 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_stvar( res, sUsings_3 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n33 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n4, n18 );
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
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested s.Usings s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintMatch, (void*) "PrintMatch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintVar, (void*) "PrintVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icCopySTVar, & sUsings_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintMatch, "PrintMatch" ) )
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
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, & PrintVar, "PrintVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n35 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n29 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_stvar( res, sUsings_2 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n4, n19 );
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
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintMatch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sNested_1;
    refalrts::use( sNested_1 );
    static refalrts::Iter eFunction_b_1;
    refalrts::use( eFunction_b_1 );
    static refalrts::Iter eFunction_e_1;
    refalrts::use( eFunction_e_1 );
    static refalrts::Iter eTextRep_b_1;
    refalrts::use( eTextRep_b_1 );
    static refalrts::Iter eTextRep_e_1;
    refalrts::use( eTextRep_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    static refalrts::Iter sBracketNum_2;
    refalrts::use( sBracketNum_2 );
    static refalrts::Iter sNested_2;
    refalrts::use( sNested_2 );
    // (~1 e.Indent )~1 s.Direction s.BracketNum s.Nested (~2 e.Function )~2 e.TextRep
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sDirection_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNested_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eFunction_b_1 = bb_2;
    refalrts::use( eFunction_b_1 );
    eFunction_e_1 = be_2;
    refalrts::use( eFunction_e_1 );
    eTextRep_b_1 = bb_0;
    refalrts::use( eTextRep_b_1 );
    eTextRep_e_1 = be_0;
    refalrts::use( eTextRep_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eFunction_b_1, & eFunction_e_1},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromDirection, (void*) "StrFromDirection"},
      {refalrts::icSpliceSTVar, & sDirection_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eTextRep_b_1, & eTextRep_e_1},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_B, (void*) "BracketsVar_B"},
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BracketsVar_E, (void*) "BracketsVar_E"},
      {refalrts::icCopySTVar, & sBracketNum_1},
      {refalrts::icCopySTVar, & sNested_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & BreakerFromIndent, (void*) "BreakerFromIndent"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
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
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sBracketNum_2, sBracketNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNested_2, sNested_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & StrFromDirection, "StrFromDirection" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & BracketsVar_B, "BracketsVar_B" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & BracketsVar_E, "BracketsVar_E" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_bracket( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_open_bracket( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_open_call( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_name( n49, & BreakerFromIndent, "BreakerFromIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_close_call( n50 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n45, n51 );
    res = refalrts::splice_elem( res, n51 );
    refalrts::push_stack( n50 );
    refalrts::push_stack( n48 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::link_brackets( n0, n44 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_stvar( res, sNested_2 );
    res = refalrts::splice_stvar( res, sBracketNum_2 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, sNested_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eTextRep_b_1, eTextRep_e_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sDirection_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eFunction_b_1, eFunction_e_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult PrintElemVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // s.Number
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    if( ! refalrts::alloc_char( n0, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
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

static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    static refalrts::Iter sElementType_1;
    refalrts::use( sElementType_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter sElementType_2;
    refalrts::use( sElementType_2 );
    // (~1 e.Indent )~1 s.ElemNumber s.ElementType e.Info
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sElementType_1, bb_0, be_0 ) ) 
      break;
    eInfo_b_1 = bb_0;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_0;
    refalrts::use( eInfo_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintAllocate_Aux, (void*) "PrintAllocate_Aux"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwAllocator, (void*) "SwAllocator"},
      {refalrts::icSpliceSTVar, & sElementType_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwInfo, (void*) "SwInfo"},
      {refalrts::icCopySTVar, & sElementType_1},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sElementType_2, sElementType_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & PrintAllocate_Aux, "PrintAllocate_Aux" ) )
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
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & SwAllocator, "SwAllocator" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    if( ! refalrts::alloc_name( n11, & SwInfo, "SwInfo" ) )
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
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_close_bracket( n52 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n52 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n9, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_stvar( res, sElementType_2 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sElementType_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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

static refalrts::FnResult PrintAllocate_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eConstructor_b_1;
    refalrts::use( eConstructor_b_1 );
    static refalrts::Iter eConstructor_e_1;
    refalrts::use( eConstructor_e_1 );
    static refalrts::Iter eValue_b_1;
    refalrts::use( eValue_b_1 );
    static refalrts::Iter eValue_e_1;
    refalrts::use( eValue_e_1 );
    static refalrts::Iter sElemNumber_1;
    refalrts::use( sElemNumber_1 );
    // (~1 e.Indent )~1 s.ElemNumber (~2 e.Constructor )~2 (~3 e.Value )~3
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_1;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_1;
    refalrts::use( eIndent_e_1 );
    eConstructor_b_1 = bb_2;
    refalrts::use( eConstructor_b_1 );
    eConstructor_e_1 = be_2;
    refalrts::use( eConstructor_e_1 );
    eValue_b_1 = bb_3;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_3;
    refalrts::use( eValue_e_1 );
    if( ! refalrts::svar_left( sElemNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '!'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eConstructor_b_1, & eConstructor_e_1},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintElemVar, (void*) "PrintElemVar"},
      {refalrts::icSpliceSTVar, & sElemNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eValue_b_1, & eValue_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
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
    if( ! refalrts::alloc_char( n1, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '!' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, & PrintElemVar, "PrintElemVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_stvar( res, sElemNumber_1 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eConstructor_b_1, eConstructor_e_1 );
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
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwAllocator(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElChar
    if( ! refalrts::function_left( & ElChar, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'r' ) )
      return refalrts::cNoMemory;
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElName
    if( ! refalrts::function_left( & ElName, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElNumber
    if( ! refalrts::function_left( & ElNumber, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElIdent
    if( ! refalrts::function_left( & ElIdent, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenADT
    if( ! refalrts::function_left( & ElOpenADT, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 't' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseADT
    if( ! refalrts::function_left( & ElCloseADT, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenBracket
    if( ! refalrts::function_left( & ElOpenBracket, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 't' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseBracket
    if( ! refalrts::function_left( & ElCloseBracket, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'b' ) )
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
    if( ! refalrts::alloc_char( n16, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElOpenCall
    if( ! refalrts::function_left( & ElOpenCall, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // & ElCloseCall
    if( ! refalrts::function_left( & ElCloseCall, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
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
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SwInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // & ElChar s.Char
    if( ! refalrts::function_left( & ElChar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sChar_1 );
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // & ElName e.Name
    if( ! refalrts::function_left( & ElName, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & PrintName, (void*) "PrintName"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & PrintName, "PrintName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // & ElNumber s.Number
    if( ! refalrts::function_left( & ElNumber, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'L' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // & ElIdent e.Name
    if( ! refalrts::function_left( & ElIdent, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ','},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ',' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
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

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenCloseBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // '      '
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
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
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n6 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    // '           e.Indent
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCloseBrackets, (void*) "GenCloseBrackets"},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & GenCloseBrackets, "GenCloseBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n40 );
    refalrts::push_stack( n30 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
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
    refalrts::link_brackets( n11, n29 );
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
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
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
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
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
    static refalrts::Iter eIndent_b_1;
    refalrts::use( eIndent_b_1 );
    static refalrts::Iter eIndent_e_1;
    refalrts::use( eIndent_e_1 );
    static refalrts::Iter eIndent_b_2;
    refalrts::use( eIndent_b_2 );
    static refalrts::Iter eIndent_e_2;
    refalrts::use( eIndent_e_2 );
    static refalrts::Iter eIndent_b_3;
    refalrts::use( eIndent_b_3 );
    static refalrts::Iter eIndent_e_3;
    refalrts::use( eIndent_e_3 );
    // '   e.Indent
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( ' ', bb_0, be_0 ) ) 
      break;
    eIndent_b_1 = bb_0;
    refalrts::use( eIndent_b_1 );
    eIndent_e_1 = be_0;
    refalrts::use( eIndent_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, '}'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, ';'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenCloseBrackets, (void*) "GenCloseBrackets"},
      {refalrts::icCopyEVar, & eIndent_b_1, & eIndent_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eIndent_b_2, eIndent_e_2, eIndent_b_1, eIndent_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndent_b_3, eIndent_e_3, eIndent_b_2, eIndent_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '}' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ';' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenCloseBrackets, "GenCloseBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eIndent_b_3, eIndent_e_3 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n3, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndent_b_2, eIndent_e_2 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eIndent_b_1, eIndent_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::cRecognitionImpossible;
}


//End of file
