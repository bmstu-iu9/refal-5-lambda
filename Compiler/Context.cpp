// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult Context(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FreeVarsSent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult FreeVarsFunc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_adt( n2 ) )
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
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
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_adt( n2 ) )
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

refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    // [~1 & Context ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::adt_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n2;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
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
#ifdef OLD_PATTERN
    // [~1 & Context ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // [~1 & Context ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::adt_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n2;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
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

//$LABEL CSuccess
template <typename T>
struct CSuccessL_ {
  static const char *name() {
    return "CSuccess";
  }
};

//$LABEL CInvalidMode
template <typename T>
struct CInvalidModeL_ {
  static const char *name() {
    return "CInvalidMode";
  }
};

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_call( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & ShiftVariable, "ShiftVariable" ) )
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
      if( ! refalrts::alloc_ident( n16, & CSuccessL_<int>::name ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n14, n15 );
      refalrts::link_brackets( n0, n8 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elems( res, n13, n14 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elems( res, n11, n12 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#else
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_2},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CSuccessL_<int>::name},
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
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & ShiftVariable, "ShiftVariable" ) )
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
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_adt( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_ident( n21, & CSuccessL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n11, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n18, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n13 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::link_brackets( n15, n16 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOldMode_2;
      refalrts::use( sOldMode_2 );
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n0, n8 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    static refalrts::Iter sOldMode_2;
    refalrts::use( sOldMode_2 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidModeL_<int>::name},
        {refalrts::icCopySTVar, & sOldMode_1},
        {refalrts::icSpliceSTVar, & sNewMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
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
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_adt( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_ident( n16, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n13, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_ident( n8, & CSuccessL_<int>::name ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n6, n7 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#else
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CSuccessL_<int>::name},
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
    if( ! refalrts::alloc_open_adt( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_adt( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & CSuccessL_<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
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

static refalrts::FnResult ShiftVariable_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eFree_b_1;
    refalrts::use( eFree_b_1 );
    static refalrts::Iter eFree_e_1;
    refalrts::use( eFree_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & ShiftVariable_Aux, "ShiftVariable_Aux" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
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
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n0, n8 );
      refalrts::link_brackets( n5, n3 );
      refalrts::link_brackets( n15, n16 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n12 );
      refalrts::push_stack( n10 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elems( res, n13, n15 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eFree_b_1, eFree_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elems( res, n10, n11 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eFree_b_1;
    refalrts::use( eFree_b_1 );
    static refalrts::Iter eFree_e_1;
    refalrts::use( eFree_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) ) 
        continue;
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable_Aux, (void*) "ShiftVariable_Aux"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eFree_b_1, & eFree_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sMode_1},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
      if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & ShiftVariable_Aux, "ShiftVariable_Aux" ) )
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
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n18 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n20, n21 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::link_brackets( n10, n17 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eFree_b_1, eFree_e_1 );
      refalrts::link_brackets( n14, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
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
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ShiftVariable_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n0, n3 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
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
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
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
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
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
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

//$LABEL CExistVariable
template <typename T>
struct CExistVariableL_ {
  static const char *name() {
    return "CExistVariable";
  }
};

//$LABEL CNotFound
template <typename T>
struct CNotFoundL_ {
  static const char *name() {
    return "CNotFound";
  }
};

static refalrts::FnResult SetAsBoundVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_call( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & SetAsBoundVariable, "SetAsBoundVariable" ) )
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
      if( ! refalrts::alloc_ident( n16, & CSuccessL_<int>::name ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n14, n15 );
      refalrts::link_brackets( n0, n8 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elems( res, n13, n14 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elems( res, n11, n12 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#else
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & SetAsBoundVariable, (void*) "SetAsBoundVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_2},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CSuccessL_<int>::name},
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
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & SetAsBoundVariable, "SetAsBoundVariable" ) )
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
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_adt( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_ident( n21, & CSuccessL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n11, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n18, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n13 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::link_brackets( n15, n16 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOldMode_2;
      refalrts::use( sOldMode_2 );
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n0, n8 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    static refalrts::Iter sOldMode_2;
    refalrts::use( sOldMode_2 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidModeL_<int>::name},
        {refalrts::icCopySTVar, & sOldMode_1},
        {refalrts::icSpliceSTVar, & sNewMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
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
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_adt( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_ident( n16, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n13, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_ident( n8, & CSuccessL_<int>::name ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n6, n7 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#else
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CSuccessL_<int>::name},
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
    if( ! refalrts::alloc_open_adt( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_adt( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & CSuccessL_<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n6, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
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

static refalrts::FnResult SetAsBoundVariable_RemoveFromFree(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SetAsBoundVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eFree_b_1;
    refalrts::use( eFree_b_1 );
    static refalrts::Iter eFree_e_1;
    refalrts::use( eFree_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & SetAsBoundVariable_RemoveFromFree, "SetAsBoundVariable_RemoveFromFree" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
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
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & SetAsBoundVariable, "SetAsBoundVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_bracket( n17 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sMode_3;
      refalrts::use( sMode_3 );
      if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n0, n3 );
      refalrts::link_brackets( n5, n14 );
      refalrts::link_brackets( n12, n8 );
      refalrts::link_brackets( n17, n18 );
      refalrts::push_stack( n19 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n10 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_stvar( res, sMode_3 );
      res = refalrts::splice_elems( res, n13, n17 );
      res = refalrts::splice_evar( res, eFree_b_1, eFree_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elems( res, n10, n12 );
      res = refalrts::splice_elems( res, n5, n6 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eFree_b_1;
    refalrts::use( eFree_b_1 );
    static refalrts::Iter eFree_e_1;
    refalrts::use( eFree_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) ) 
        continue;
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 & FreeVarsSent e.Free )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eFree_b_1 = bb_2;
      refalrts::use( eFree_b_1 );
      eFree_e_1 = be_2;
      refalrts::use( eFree_e_1 );
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & SetAsBoundVariable_RemoveFromFree, (void*) "SetAsBoundVariable_RemoveFromFree"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sMode_1},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eFree_b_1, & eFree_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & SetAsBoundVariable, (void*) "SetAsBoundVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sMode_1},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
      if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      if( ! refalrts::alloc_name( n13, & FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & SetAsBoundVariable_RemoveFromFree, "SetAsBoundVariable_RemoveFromFree" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_call( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & SetAsBoundVariable, "SetAsBoundVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n24 );
      refalrts::push_stack( n20 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n22, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_stvar( res, sMode_3 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n12, n19 );
      res = refalrts::splice_elem( res, n19 );
      refalrts::push_stack( n18 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eFree_b_1, eFree_e_1 );
      refalrts::link_brackets( n16, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n10 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
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
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult SetAsBoundVariable_RemoveFromFree(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_0_stk,
        eVariables_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eVariables_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eVariables_B_oe_1, be_0 )
    ) {
      bb_0 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_0_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n8 = 0; // Right
      if( ! refalrts::brackets_match( n8, n5 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_0;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_0;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
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
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
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
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Mode e.Index )~1 e.Variables
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    eVariables_b_1 = bb_0;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_0;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_call( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & ShiftVariable, "ShiftVariable" ) )
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
      if( ! refalrts::alloc_ident( n16, & CExistVariableL_<int>::name ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sMode_3;
      refalrts::use( sMode_3 );
      if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n14, n15 );
      refalrts::link_brackets( n0, n8 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n11 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_stvar( res, sMode_3 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elems( res, n13, n14 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elems( res, n11, n12 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#else
    // [~1 & Context e.Variables_B (~2 s.Mode e.Index )~2 e.Variables_E ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_2},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CExistVariableL_<int>::name},
        {refalrts::icCopySTVar, & sMode_1},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
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
      if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & ShiftVariable, "ShiftVariable" ) )
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
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_adt( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_ident( n21, & CExistVariableL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_stvar( res, sMode_3 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n11, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n18, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::push_stack( n17 );
      refalrts::push_stack( n13 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::link_brackets( n15, n16 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOldMode_2;
      refalrts::use( sOldMode_2 );
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n0, n8 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sNewMode_1;
    refalrts::use( sNewMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eVariables_B_b_1;
    refalrts::use( eVariables_B_b_1 );
    static refalrts::Iter eVariables_B_e_1;
    refalrts::use( eVariables_B_e_1 );
    static refalrts::Iter eVariables_E_b_1;
    refalrts::use( eVariables_E_b_1 );
    static refalrts::Iter eVariables_E_e_1;
    refalrts::use( eVariables_E_e_1 );
    static refalrts::Iter sOldMode_1;
    refalrts::use( sOldMode_1 );
    static refalrts::Iter sOldMode_2;
    refalrts::use( sOldMode_2 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // [~1 & Context e.Variables_B (~2 s.OldMode e.Index )~2 e.Variables_E ]~1 s.NewMode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::adt_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n8;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! refalrts::svar_left( sNewMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVariables_B_b_1 = bb_1_stk,
        eVariables_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVariables_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVariables_B_oe_1, be_1 )
    ) {
      bb_1 = eVariables_B_oe_1;
      eVariables_B_b_1 = bb_1_stk;
      eVariables_B_e_1 = eVariables_B_oe_1;
      refalrts::move_right( eVariables_B_b_1, eVariables_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      eVariables_E_b_1 = bb_1;
      refalrts::use( eVariables_E_b_1 );
      eVariables_E_e_1 = be_1;
      refalrts::use( eVariables_E_e_1 );
      if( ! refalrts::svar_left( sOldMode_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceEVar, & eVariables_B_b_1, & eVariables_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_b_1, & eVariables_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidModeL_<int>::name},
        {refalrts::icCopySTVar, & sOldMode_1},
        {refalrts::icSpliceSTVar, & sNewMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
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
      if( ! refalrts::copy_stvar( sOldMode_2, sOldMode_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_open_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_adt( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_ident( n16, & CInvalidModeL_<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sNewMode_1 );
      res = refalrts::splice_stvar( res, sOldMode_2 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eVariables_E_b_1, eVariables_E_e_1 );
      refalrts::link_brackets( n13, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eVariables_B_b_1, eVariables_B_e_1 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_ident( n6, & CNotFoundL_<int>::name ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#else
    // [~1 & Context e.Variables ]~1 s.Mode e.Index
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_0, be_0 ) ) 
      break;
    eIndex_b_1 = bb_0;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_0;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CNotFoundL_<int>::name},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_open_adt( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_adt( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_ident( n9, & CNotFoundL_<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
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

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eLocals_b_1;
    refalrts::use( eLocals_b_1 );
    static refalrts::Iter eLocals_e_1;
    refalrts::use( eLocals_e_1 );
    static refalrts::Iter eFreeSent_b_1;
    refalrts::use( eFreeSent_b_1 );
    static refalrts::Iter eFreeSent_e_1;
    refalrts::use( eFreeSent_e_1 );
    static refalrts::Iter eFreeFunc_b_1;
    refalrts::use( eFreeFunc_b_1 );
    static refalrts::Iter eFreeFunc_e_1;
    refalrts::use( eFreeFunc_e_1 );
    static refalrts::Iter eOuters_b_1;
    refalrts::use( eOuters_b_1 );
    static refalrts::Iter eOuters_e_1;
    refalrts::use( eOuters_e_1 );
    // [~1 & Context e.Locals (~2 & FreeVarsSent e.FreeSent )~2 (~3 & FreeVarsFunc e.FreeFunc )~3 e.Outers ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::adt_match( n12, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n12;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eLocals_b_1 = bb_1_stk,
        eLocals_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eLocals_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eLocals_oe_1, be_1 )
    ) {
      bb_1 = eLocals_oe_1;
      eLocals_b_1 = bb_1_stk;
      eLocals_e_1 = eLocals_oe_1;
      refalrts::move_right( eLocals_b_1, eLocals_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n7;
      if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n7 ) ) 
        continue;
      refalrts::Iter n8;
      if( (n8 = refalrts::function_left( & FreeVarsFunc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n8 );
      eFreeSent_b_1 = bb_2;
      refalrts::use( eFreeSent_b_1 );
      eFreeSent_e_1 = be_2;
      refalrts::use( eFreeSent_e_1 );
      eFreeFunc_b_1 = bb_3;
      refalrts::use( eFreeFunc_b_1 );
      eFreeFunc_e_1 = be_3;
      refalrts::use( eFreeFunc_e_1 );
      eOuters_b_1 = bb_1;
      refalrts::use( eOuters_b_1 );
      eOuters_e_1 = be_1;
      refalrts::use( eOuters_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & Unique, "Unique" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_call( n15 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n3, n6 );
      refalrts::link_brackets( n7, n10 );
      refalrts::link_brackets( n0, n12 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eOuters_b_1, eOuters_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eFreeFunc_b_1, eFreeFunc_e_1 );
      res = refalrts::splice_evar( res, eFreeSent_b_1, eFreeSent_e_1 );
      res = refalrts::splice_elems( res, n13, n14 );
      res = refalrts::splice_elems( res, n6, n8 );
      res = refalrts::splice_elems( res, n3, n4 );
      res = refalrts::splice_elems( res, n0, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eFreeSent_b_1;
    refalrts::use( eFreeSent_b_1 );
    static refalrts::Iter eFreeSent_e_1;
    refalrts::use( eFreeSent_e_1 );
    static refalrts::Iter eFreeFunc_b_1;
    refalrts::use( eFreeFunc_b_1 );
    static refalrts::Iter eFreeFunc_e_1;
    refalrts::use( eFreeFunc_e_1 );
    static refalrts::Iter eOuters_b_1;
    refalrts::use( eOuters_b_1 );
    static refalrts::Iter eOuters_e_1;
    refalrts::use( eOuters_e_1 );
    static refalrts::Iter eLocals_b_1;
    refalrts::use( eLocals_b_1 );
    static refalrts::Iter eLocals_e_1;
    refalrts::use( eLocals_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Locals (~2 & FreeVarsSent e.FreeSent )~2 (~3 & FreeVarsFunc e.FreeFunc )~3 e.Outers ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eLocals_b_1 = bb_1_stk,
        eLocals_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eLocals_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eLocals_oe_1, be_1 )
    ) {
      bb_1 = eLocals_oe_1;
      eLocals_b_1 = bb_1_stk;
      eLocals_e_1 = eLocals_oe_1;
      refalrts::move_right( eLocals_b_1, eLocals_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::function_left( & FreeVarsFunc, bb_3, be_3 ) ) 
        continue;
      eFreeSent_b_1 = bb_2;
      refalrts::use( eFreeSent_b_1 );
      eFreeSent_e_1 = be_2;
      refalrts::use( eFreeSent_e_1 );
      eFreeFunc_b_1 = bb_3;
      refalrts::use( eFreeFunc_b_1 );
      eFreeFunc_e_1 = be_3;
      refalrts::use( eFreeFunc_e_1 );
      eOuters_b_1 = bb_1;
      refalrts::use( eOuters_b_1 );
      eOuters_e_1 = be_1;
      refalrts::use( eOuters_e_1 );
#else
    // [~1 & Context e.Locals (~2 & FreeVarsSent e.FreeSent )~2 (~3 & FreeVarsFunc e.FreeFunc )~3 e.Outers ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::adt_match( n12, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n12;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eLocals_b_1 = bb_1_stk,
        eLocals_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eLocals_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eLocals_oe_1, be_1 )
    ) {
      bb_1 = eLocals_oe_1;
      eLocals_b_1 = bb_1_stk;
      eLocals_e_1 = eLocals_oe_1;
      refalrts::move_right( eLocals_b_1, eLocals_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n3;
      if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n3 ) ) 
        continue;
      refalrts::Iter n4;
      if( (n4 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n7;
      if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n7 ) ) 
        continue;
      refalrts::Iter n8;
      if( (n8 = refalrts::function_left( & FreeVarsFunc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n8 );
      eFreeSent_b_1 = bb_2;
      refalrts::use( eFreeSent_b_1 );
      eFreeSent_e_1 = be_2;
      refalrts::use( eFreeSent_e_1 );
      eFreeFunc_b_1 = bb_3;
      refalrts::use( eFreeFunc_b_1 );
      eFreeFunc_e_1 = be_3;
      refalrts::use( eFreeFunc_e_1 );
      eOuters_b_1 = bb_1;
      refalrts::use( eOuters_b_1 );
      eOuters_e_1 = be_1;
      refalrts::use( eOuters_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Unique, (void*) "Unique"},
        {refalrts::icSpliceEVar, & eFreeSent_b_1, & eFreeSent_e_1},
        {refalrts::icSpliceEVar, & eFreeFunc_b_1, & eFreeFunc_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eOuters_b_1, & eOuters_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
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
      if( ! refalrts::alloc_open_adt( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & FreeVarsFunc, "FreeVarsFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & Unique, "Unique" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_adt( n24 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n13, n24 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eOuters_b_1, eOuters_e_1 );
      refalrts::link_brackets( n18, n23 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n20 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eFreeFunc_b_1, eFreeFunc_e_1 );
      res = refalrts::splice_evar( res, eFreeSent_b_1, eFreeSent_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::link_brackets( n15, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eBegin_b_1;
    refalrts::use( eBegin_b_1 );
    static refalrts::Iter eBegin_e_1;
    refalrts::use( eBegin_e_1 );
    static refalrts::Iter tCopy_1;
    refalrts::use( tCopy_1 );
    static refalrts::Iter tCopy_2;
    refalrts::use( tCopy_2 );
    static refalrts::Iter eMiddle_b_1;
    refalrts::use( eMiddle_b_1 );
    static refalrts::Iter eMiddle_e_1;
    refalrts::use( eMiddle_e_1 );
    static refalrts::Iter eEnd_b_1;
    refalrts::use( eEnd_b_1 );
    static refalrts::Iter eEnd_e_1;
    refalrts::use( eEnd_e_1 );
    // e.Begin t.Copy e.Middle t.Copy e.End
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eBegin_b_1 = bb_0_stk,
        eBegin_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eBegin_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eBegin_oe_1, be_0 )
    ) {
      bb_0 = eBegin_oe_1;
      eBegin_b_1 = bb_0_stk;
      eBegin_e_1 = eBegin_oe_1;
      refalrts::move_right( eBegin_b_1, eBegin_e_1 );
      if( ! refalrts::tvar_left( tCopy_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eMiddle_b_1 = bb_0_stk,
          eMiddle_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eMiddle_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eMiddle_oe_1, be_0 )
      ) {
        bb_0 = eMiddle_oe_1;
        eMiddle_b_1 = bb_0_stk;
        eMiddle_e_1 = eMiddle_oe_1;
        refalrts::move_right( eMiddle_b_1, eMiddle_e_1 );
        if( ! refalrts::repeated_stvar_left( tCopy_2, tCopy_1, bb_0, be_0 ) ) 
          continue;
        eEnd_b_1 = bb_0;
        refalrts::use( eEnd_b_1 );
        eEnd_e_1 = be_0;
        refalrts::use( eEnd_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_call( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & Unique, "Unique" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_call( n7 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::push_stack( n7 );
        refalrts::push_stack( n5 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eEnd_b_1, eEnd_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, tCopy_1 );
        res = refalrts::splice_elems( res, n5, n6 );
        res = refalrts::splice_evar( res, eBegin_b_1, eBegin_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eBegin_b_1;
    refalrts::use( eBegin_b_1 );
    static refalrts::Iter eBegin_e_1;
    refalrts::use( eBegin_e_1 );
    static refalrts::Iter tCopy_1;
    refalrts::use( tCopy_1 );
    static refalrts::Iter eMiddle_b_1;
    refalrts::use( eMiddle_b_1 );
    static refalrts::Iter eMiddle_e_1;
    refalrts::use( eMiddle_e_1 );
    static refalrts::Iter eEnd_b_1;
    refalrts::use( eEnd_b_1 );
    static refalrts::Iter eEnd_e_1;
    refalrts::use( eEnd_e_1 );
    static refalrts::Iter tCopy_2;
    refalrts::use( tCopy_2 );
#ifdef OLD_PATTERN
    // e.Begin t.Copy e.Middle t.Copy e.End
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eBegin_b_1 = bb_0_stk,
        eBegin_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eBegin_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eBegin_oe_1, be_0 )
    ) {
      bb_0 = eBegin_oe_1;
      eBegin_b_1 = bb_0_stk;
      eBegin_e_1 = eBegin_oe_1;
      refalrts::move_right( eBegin_b_1, eBegin_e_1 );
      if( ! refalrts::tvar_left( tCopy_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eMiddle_b_1 = bb_0_stk,
          eMiddle_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eMiddle_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eMiddle_oe_1, be_0 )
      ) {
        bb_0 = eMiddle_oe_1;
        eMiddle_b_1 = bb_0_stk;
        eMiddle_e_1 = eMiddle_oe_1;
        refalrts::move_right( eMiddle_b_1, eMiddle_e_1 );
        if( ! refalrts::repeated_stvar_left( tCopy_2, tCopy_1, bb_0, be_0 ) ) 
          continue;
        eEnd_b_1 = bb_0;
        refalrts::use( eEnd_b_1 );
        eEnd_e_1 = be_0;
        refalrts::use( eEnd_e_1 );
#else
    // e.Begin t.Copy e.Middle t.Copy e.End
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eBegin_b_1 = bb_0_stk,
        eBegin_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eBegin_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eBegin_oe_1, be_0 )
    ) {
      bb_0 = eBegin_oe_1;
      eBegin_b_1 = bb_0_stk;
      eBegin_e_1 = eBegin_oe_1;
      refalrts::move_right( eBegin_b_1, eBegin_e_1 );
      if( ! refalrts::tvar_left( tCopy_1, bb_0, be_0 ) ) 
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          eMiddle_b_1 = bb_0_stk,
          eMiddle_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( eMiddle_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( eMiddle_oe_1, be_0 )
      ) {
        bb_0 = eMiddle_oe_1;
        eMiddle_b_1 = bb_0_stk;
        eMiddle_e_1 = eMiddle_oe_1;
        refalrts::move_right( eMiddle_b_1, eMiddle_e_1 );
        if( ! refalrts::repeated_stvar_left( tCopy_2, tCopy_1, bb_0, be_0 ) ) 
          continue;
        eEnd_b_1 = bb_0;
        refalrts::use( eEnd_b_1 );
        eEnd_e_1 = be_0;
        refalrts::use( eEnd_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eBegin_b_1, & eBegin_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Unique, (void*) "Unique"},
          {refalrts::icSpliceSTVar, & tCopy_1},
          {refalrts::icSpliceEVar, & eMiddle_b_1, & eMiddle_e_1},
          {refalrts::icSpliceEVar, & eEnd_b_1, & eEnd_e_1},
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
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_call( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & Unique, "Unique" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_call( n7 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n7 );
        refalrts::push_stack( n5 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eEnd_b_1, eEnd_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, tCopy_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eBegin_b_1, eBegin_e_1 );
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
    static refalrts::Iter eUniques_b_1;
    refalrts::use( eUniques_b_1 );
    static refalrts::Iter eUniques_e_1;
    refalrts::use( eUniques_e_1 );
    // e.Uniques
    eUniques_b_1 = bb_0;
    refalrts::use( eUniques_b_1 );
    eUniques_e_1 = be_0;
    refalrts::use( eUniques_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eUniques_b_1, eUniques_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eUniques_b_1;
    refalrts::use( eUniques_b_1 );
    static refalrts::Iter eUniques_e_1;
    refalrts::use( eUniques_e_1 );
#ifdef OLD_PATTERN
    // e.Uniques
    eUniques_b_1 = bb_0;
    refalrts::use( eUniques_b_1 );
    eUniques_e_1 = be_0;
    refalrts::use( eUniques_e_1 );
#else
    // e.Uniques
    eUniques_b_1 = bb_0;
    refalrts::use( eUniques_b_1 );
    eUniques_e_1 = be_0;
    refalrts::use( eUniques_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eUniques_b_1, & eUniques_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUniques_b_1, eUniques_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
    // [~1 & Context e.Variables ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & FreeVarsSent, "FreeVarsSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & FreeVarsFunc, "FreeVarsFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n4, n6 );
    refalrts::link_brackets( n7, n9 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    res = refalrts::splice_elems( res, n4, n9 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVariables_b_1;
    refalrts::use( eVariables_b_1 );
    static refalrts::Iter eVariables_e_1;
    refalrts::use( eVariables_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context e.Variables ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
#else
    // [~1 & Context e.Variables ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::adt_match( n3, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n3;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eVariables_b_1 = bb_1;
    refalrts::use( eVariables_b_1 );
    eVariables_e_1 = be_1;
    refalrts::use( eVariables_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariables_b_1, & eVariables_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
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
    if( ! refalrts::alloc_open_adt( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & FreeVarsSent, "FreeVarsSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & FreeVarsFunc, "FreeVarsFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_adt( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eVariables_b_1, eVariables_e_1 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
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

refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eClosureContext_b_1;
    refalrts::use( eClosureContext_b_1 );
    static refalrts::Iter eClosureContext_e_1;
    refalrts::use( eClosureContext_e_1 );
    static refalrts::Iter eOuters_b_1;
    refalrts::use( eOuters_b_1 );
    static refalrts::Iter eOuters_e_1;
    refalrts::use( eOuters_e_1 );
    // [~1 & Context (~2 & FreeVarsSent )~2 (~3 & FreeVarsFunc e.ClosureContext )~3 e.Outers ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::adt_match( n10, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n10;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n5 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::function_left( & FreeVarsFunc, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n6 );
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eClosureContext_b_1 = bb_3;
    refalrts::use( eClosureContext_b_1 );
    eClosureContext_e_1 = be_3;
    refalrts::use( eClosureContext_e_1 );
    eOuters_b_1 = bb_1;
    refalrts::use( eOuters_b_1 );
    eOuters_e_1 = be_1;
    refalrts::use( eOuters_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_evar( res, eClosureContext_b_1, eClosureContext_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOuters_b_1, eOuters_e_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eClosureContext_b_1;
    refalrts::use( eClosureContext_b_1 );
    static refalrts::Iter eClosureContext_e_1;
    refalrts::use( eClosureContext_e_1 );
    static refalrts::Iter eOuters_b_1;
    refalrts::use( eOuters_b_1 );
    static refalrts::Iter eOuters_e_1;
    refalrts::use( eOuters_e_1 );
#ifdef OLD_PATTERN
    // [~1 & Context (~2 & FreeVarsSent )~2 (~3 & FreeVarsFunc e.ClosureContext )~3 e.Outers ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & FreeVarsFunc, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eClosureContext_b_1 = bb_3;
    refalrts::use( eClosureContext_b_1 );
    eClosureContext_e_1 = be_3;
    refalrts::use( eClosureContext_e_1 );
    eOuters_b_1 = bb_1;
    refalrts::use( eOuters_b_1 );
    eOuters_e_1 = be_1;
    refalrts::use( eOuters_e_1 );
#else
    // [~1 & Context (~2 & FreeVarsSent )~2 (~3 & FreeVarsFunc e.ClosureContext )~3 e.Outers ]~1
    refalrts::Iter n0 = 0;
    if( ! refalrts::tvar_left( n0, bb_0, be_0 ) ) 
      break;
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::adt_match( n10, n0 ) ) 
      break;
    refalrts::Iter bb_1 = n0;
    refalrts::Iter be_1 = n10;
    refalrts::move_left( bb_1, be_1 );
    refalrts::move_right( bb_1, be_1 );
    refalrts::Iter n1 = 0;
    if( ! refalrts::tvar_left( n1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_match( & Context, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n2 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & FreeVarsSent, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n5 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::function_left( & FreeVarsFunc, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n6 );
    if( ! empty_seq( bb_2, be_2 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eClosureContext_b_1 = bb_3;
    refalrts::use( eClosureContext_b_1 );
    eClosureContext_e_1 = be_3;
    refalrts::use( eClosureContext_e_1 );
    eOuters_b_1 = bb_1;
    refalrts::use( eOuters_b_1 );
    eOuters_e_1 = be_1;
    refalrts::use( eOuters_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icSpliceEVar, & eOuters_b_1, & eOuters_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icSpliceEVar, & eClosureContext_b_1, & eClosureContext_e_1},
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
    if( ! refalrts::alloc_open_adt( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_adt( n13 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eClosureContext_b_1, eClosureContext_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eOuters_b_1, eOuters_e_1 );
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


//End of file
