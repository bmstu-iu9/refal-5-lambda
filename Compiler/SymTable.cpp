// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult TSymTable(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elems( res, n0, n2 );
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
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
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & TSymTable, "TSymTable" ) )
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
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Declared(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Defined(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Identifier(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sOtherScopeClass_1;
    refalrts::use( sOtherScopeClass_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.OtherScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sOtherScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_close_call( n41 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n41 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sOtherScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n25, n41 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n16, n24 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elems( res, n14, n15 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sOtherScopeClass_1;
    refalrts::use( sOtherScopeClass_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.OtherScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sOtherScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.OtherScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sOtherScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icSpliceSTVar, & sOtherScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_close_call( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_open_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_name( n43, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_open_bracket( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_name( n45, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_bracket( n46 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_bracket( n47 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n42, n47 );
      res = refalrts::splice_elem( res, n47 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n44, n46 );
      res = refalrts::splice_elem( res, n46 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sOtherScopeClass_1 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_elem( res, n42 );
      refalrts::push_stack( n41 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_name( n5, & Defined, "Defined" );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n14, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n16, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_call( n48 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_name( n49, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n5 );
      refalrts::reinit_name( n11, & EL_AddErrorAt, "EL_AddErrorAt" );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n48 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n49 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n23, n48 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n14, n22 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Local, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Entry, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'E'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'r' ) )
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
      if( ! refalrts::alloc_char( n42, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_close_call( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_open_bracket( n51 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_name( n52, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_open_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_name( n55, & GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_close_bracket( n57 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n51, n57 );
      res = refalrts::splice_elem( res, n57 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n53, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_elem( res, n51 );
      refalrts::push_stack( n50 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_call( n48 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_name( n49, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n5 );
      refalrts::reinit_name( n11, & EL_AddErrorAt, "EL_AddErrorAt" );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n48 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n49 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n23, n48 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n14, n22 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Entry, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Local, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'L'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'r' ) )
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
      if( ! refalrts::alloc_char( n42, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_close_call( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_open_bracket( n51 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_name( n52, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_open_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_name( n55, & GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_close_bracket( n57 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n51, n57 );
      res = refalrts::splice_elem( res, n57 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n53, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_elem( res, n51 );
      refalrts::push_stack( n50 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Defined, "Defined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n10 );
    refalrts::link_brackets( n8, n4 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tErrorList_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
      {refalrts::icSpliceEVar, & eNames_b_1, & eNames_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
      {refalrts::icSpliceSTVar, & sScopeClass_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Defined, "Defined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ST_AddDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Declared, (void*) "Declared"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n14, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n16, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_2;
    refalrts::use( sScopeClass_2 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_stvar_left( sScopeClass_2, sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n14, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n16, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_close_call( n49 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n11 );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n49 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elems( res, n4, n6 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n24, n49 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n15, n23 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Local, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Entry, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'E'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Declared, (void*) "Declared"},
        {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'r' ) )
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
      if( ! refalrts::alloc_char( n42, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_close_call( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_open_bracket( n51 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_name( n52, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_open_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_name( n55, & GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_close_bracket( n57 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n51, n57 );
      res = refalrts::splice_elem( res, n57 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n53, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_elem( res, n51 );
      refalrts::push_stack( n50 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_close_call( n49 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n11 );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n49 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elems( res, n4, n6 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n24, n49 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n15, n23 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Entry, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Local, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'L'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Declared, (void*) "Declared"},
        {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'r' ) )
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
      if( ! refalrts::alloc_char( n42, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_char( n49, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_close_call( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_open_bracket( n51 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_name( n52, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_open_bracket( n53 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_name( n55, & GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n57 = 0;
      if( ! refalrts::alloc_close_bracket( n57 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n51, n57 );
      res = refalrts::splice_elem( res, n57 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n53, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_elem( res, n51 );
      refalrts::push_stack( n50 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_call( n48 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n11 );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n48 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elems( res, n4, n6 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n24, n48 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n15, n23 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Local, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Entry, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Entry e.Name )~2 e.Names_E )~1 & GN_Local s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Local, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Entry, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'E'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icFunc, (void*) & GN_Entry, (void*) "GN_Entry"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_close_call( n49 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_open_bracket( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_name( n51, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_open_bracket( n52 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_name( n53, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_close_bracket( n55 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n50, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n52, n55 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n51 );
      res = refalrts::splice_elem( res, n50 );
      refalrts::push_stack( n49 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_call( n48 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n11 );
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n48 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elems( res, n4, n6 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n24, n48 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n15, n23 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & GN_Entry, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & GN_Local, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined & GN_Local e.Name )~2 e.Names_E )~1 & GN_Entry s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n11;
    if( (n11 = refalrts::function_left( & GN_Entry, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & GN_Local, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::repeated_evar_left( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'F'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'L'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icFunc, (void*) & GN_Local, (void*) "GN_Local"},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'c' ) )
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
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_char( n42, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_char( n43, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_char( n44, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_char( n45, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_char( n46, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_char( n47, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_char( n48, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n49 = 0;
      if( ! refalrts::alloc_close_call( n49 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n50 = 0;
      if( ! refalrts::alloc_open_bracket( n50 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n51 = 0;
      if( ! refalrts::alloc_name( n51, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n52 = 0;
      if( ! refalrts::alloc_open_bracket( n52 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n53 = 0;
      if( ! refalrts::alloc_name( n53, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n54 = 0;
      if( ! refalrts::alloc_name( n54, & GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n55 = 0;
      if( ! refalrts::alloc_close_bracket( n55 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n56 = 0;
      if( ! refalrts::alloc_close_bracket( n56 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n50, n56 );
      res = refalrts::splice_elem( res, n56 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n52, n55 );
      res = refalrts::splice_elem( res, n55 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_elem( res, n54 );
      res = refalrts::splice_elem( res, n53 );
      res = refalrts::splice_elem( res, n52 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n51 );
      res = refalrts::splice_elem( res, n50 );
      refalrts::push_stack( n49 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Declared, "Declared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n10 );
    refalrts::link_brackets( n8, n4 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tErrorList_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
      {refalrts::icSpliceEVar, & eNames_b_1, & eNames_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Declared, (void*) "Declared"},
      {refalrts::icSpliceSTVar, & sScopeClass_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Declared, "Declared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sOtherScopeClass_1;
    refalrts::use( sOtherScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.OtherScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sOtherScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Identifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'I' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_call( n42 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      refalrts::push_stack( n42 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_elems( res, n27, n42 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elems( res, n16, n26 );
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elems( res, n14, n15 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sOtherScopeClass_1;
    refalrts::use( sOtherScopeClass_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.OtherScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sOtherScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Identifier, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.OtherScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sOtherScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Identifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icSpliceSTVar, & sLnNum_1},
        {refalrts::icChar, 0, 0, 'I'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'y'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'f'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Identifier, (void*) "Identifier"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_2, & eName_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'I' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_char( n38, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_char( n39, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_char( n40, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_char( n41, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_call( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_open_bracket( n43 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_name( n44, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_open_bracket( n45 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_name( n46, & Identifier, "Identifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_bracket( n47 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n48 = 0;
      if( ! refalrts::alloc_close_bracket( n48 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n43, n48 );
      res = refalrts::splice_elem( res, n48 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n45, n47 );
      res = refalrts::splice_elem( res, n47 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n46 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n44 );
      res = refalrts::splice_elem( res, n43 );
      refalrts::push_stack( n42 );
      refalrts::push_stack( n14 );
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
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
      res = refalrts::splice_stvar( res, sLnNum_1 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Identifier, "Identifier" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n10 );
    refalrts::link_brackets( n8, n4 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eNames_b_1;
    refalrts::use( eNames_b_1 );
    static refalrts::Iter eNames_e_1;
    refalrts::use( eNames_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // t.ErrorList (~1 & TSymTable e.Names )~1 s.ScopeClass s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eNames_b_1 = bb_1;
    refalrts::use( eNames_b_1 );
    eNames_e_1 = be_1;
    refalrts::use( eNames_e_1 );
    if( ! refalrts::svar_left( sScopeClass_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tErrorList_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
      {refalrts::icSpliceEVar, & eNames_b_1, & eNames_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Identifier, (void*) "Identifier"},
      {refalrts::icSpliceSTVar, & sScopeClass_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & Identifier, "Identifier" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sScopeClass_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eNames_b_1, eNames_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ST_CheckDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Declared, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Declared s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Declared, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Declared, (void*) "Declared"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n13, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n15, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Defined, (void*) "Defined"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n13, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n15, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter tSymTable_1;
    refalrts::use( tSymTable_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'F' ) )
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
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n28 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elems( res, n15, n28 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elems( res, n6, n14 );
    res = refalrts::splice_stvar( res, sLnNum_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter tSymTable_1;
    refalrts::use( tSymTable_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1},
      {refalrts::icSpliceSTVar, & sLnNum_1},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1},
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'F' ) )
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
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tSymTable_1 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLnNum_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
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

refalrts::FnResult ST_CheckIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Identifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n10 );
      refalrts::link_brackets( n4, n8 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elems( res, n1, n2 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Identifier, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // t.ErrorList (~1 & TSymTable e.Names_B (~2 & Identifier s.ScopeClass e.Name )~2 e.Names_E )~1 s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & Identifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      if( ! refalrts::repeated_evar_right( eName_b_2, eName_e_2, eName_b_1, eName_e_1, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceSTVar, & tErrorList_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TSymTable, (void*) "TSymTable"},
        {refalrts::icSpliceEVar, & eNames_B_b_1, & eNames_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & Identifier, (void*) "Identifier"},
        {refalrts::icSpliceSTVar, & sScopeClass_1},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eNames_E_b_1, & eNames_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & Identifier, "Identifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n13, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eNames_E_b_1, eNames_E_e_1 );
      refalrts::link_brackets( n15, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_stvar( res, sScopeClass_1 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eNames_B_b_1, eNames_B_e_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_stvar( res, tErrorList_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
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
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter tSymTable_1;
    refalrts::use( tSymTable_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_stvar( res, tSymTable_1 );
    res = refalrts::splice_elems( res, n17, n30 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elems( res, n6, n16 );
    res = refalrts::splice_stvar( res, sLnNum_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tErrorList_1;
    refalrts::use( tErrorList_1 );
    static refalrts::Iter tSymTable_1;
    refalrts::use( tSymTable_1 );
    static refalrts::Iter sLnNum_1;
    refalrts::use( sLnNum_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
#ifdef OLD_PATTERN
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // t.ErrorList t.SymTable s.LnNum e.Name
    if( ! refalrts::tvar_left( tErrorList_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_left( tSymTable_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sLnNum_1, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & EL_AddErrorAt, (void*) "EL_AddErrorAt"},
      {refalrts::icSpliceSTVar, & tErrorList_1},
      {refalrts::icSpliceSTVar, & sLnNum_1},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tSymTable_1},
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
    if( ! refalrts::alloc_name( n5, & EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'I' ) )
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tSymTable_1 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n4 );
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
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
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
    res = refalrts::splice_stvar( res, sLnNum_1 );
    res = refalrts::splice_stvar( res, tErrorList_1 );
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

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n7 = 0; // Right
      if( ! refalrts::brackets_match( n7, n3 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eNames_B_b_1;
    refalrts::use( eNames_B_b_1 );
    static refalrts::Iter eNames_B_e_1;
    refalrts::use( eNames_B_e_1 );
    static refalrts::Iter eNames_E_b_1;
    refalrts::use( eNames_E_b_1 );
    static refalrts::Iter eNames_E_e_1;
    refalrts::use( eNames_E_e_1 );
    static refalrts::Iter sScopeClass_1;
    refalrts::use( sScopeClass_1 );
#ifdef OLD_PATTERN
    // (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TSymTable, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & Defined, bb_2, be_2 ) ) 
        continue;
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
#else
    // (~1 & TSymTable e.Names_B (~2 & Defined s.ScopeClass e.Name )~2 e.Names_E )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TSymTable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eNames_B_b_1 = bb_1_stk,
        eNames_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eNames_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eNames_B_oe_1, be_1 )
    ) {
      bb_1 = eNames_B_oe_1;
      eNames_B_b_1 = bb_1_stk;
      eNames_B_e_1 = eNames_B_oe_1;
      refalrts::move_right( eNames_B_b_1, eNames_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n7 = 0; // Right
      if( ! refalrts::brackets_match( n7, n3 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::function_left( & Defined, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      eNames_E_b_1 = bb_1;
      refalrts::use( eNames_E_b_1 );
      eNames_E_e_1 = be_1;
      refalrts::use( eNames_E_e_1 );
      if( ! refalrts::svar_left( sScopeClass_1, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
    }
  } while ( 0 );
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}


//End of file
