// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult Context(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FreeVarsSent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FreeVarsFunc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
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
    if( ! refalrts::alloc_number( n2, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_adt( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
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

refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // [~1 & Context 0 ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::number_left( 0UL, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
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

//$LABEL CSuccess
template <typename T>
struct CSuccess {
  static const char *name() {
    return "CSuccess";
  }
};

//$LABEL CInvalidMode
template <typename T>
struct CInvalidMode {
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
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter sVarDepth_1_2;
    refalrts::use( sVarDepth_1_2 );
    static refalrts::Iter sVarDepth_1_3;
    refalrts::use( sVarDepth_1_3 );
    // [~1 & Context s.StackDepth1  e.Variables_B1  (~2 s.Mode1  e.Index1  s.VarDepth1  )~2 e.Variables_E1  ]~1 s.Mode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      eVariables_E_1_b_1 = bb_3;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_3;
      refalrts::use( eVariables_E_1_e_1 );
      if( ! refalrts::svar_left( sVarDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_2},
        {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CSuccess<int>::name},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sVarDepth_1_2, sVarDepth_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_1_3, sVarDepth_1_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & ShiftVariable, "ShiftVariable" ) )
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
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_adt( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_ident( n10, & CSuccess<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sVarDepth_1_3 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sVarDepth_1_2 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_stvar( res, sMode_1_2 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sOldMode_1_1;
    refalrts::use( sOldMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter sNewMode_1_1;
    refalrts::use( sNewMode_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter sOldMode_1_2;
    refalrts::use( sOldMode_1_2 );
    static refalrts::Iter sVarDepth_1_2;
    refalrts::use( sVarDepth_1_2 );
    // [~1 & Context s.StackDepth1  e.Variables_B1  (~2 s.OldMode1  e.Index1  s.VarDepth1  )~2 e.Variables_E1  ]~1 s.NewMode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNewMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      eVariables_E_1_b_1 = bb_3;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_3;
      refalrts::use( eVariables_E_1_e_1 );
      if( ! refalrts::svar_left( sOldMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::svar_left( sVarDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidMode<int>::name},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icCopySTVar, & sOldMode_1_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sOldMode_1_2, sOldMode_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_1_2, sVarDepth_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_adt( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_ident( n5, & CInvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sOldMode_1_2 );
      res = refalrts::splice_stvar( res, sVarDepth_1_2 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eVariables_1_b_1;
    refalrts::use( eVariables_1_b_1 );
    static refalrts::Iter eVariables_1_e_1;
    refalrts::use( eVariables_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sStackDepth_1_2;
    refalrts::use( sStackDepth_1_2 );
    static refalrts::Iter sStackDepth_1_3;
    refalrts::use( sStackDepth_1_3 );
    // [~1 & Context s.StackDepth1  e.Variables1  ]~1 s.Mode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    eVariables_1_b_1 = bb_1;
    refalrts::use( eVariables_1_b_1 );
    eVariables_1_e_1 = be_1;
    refalrts::use( eVariables_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icSpliceSTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icCopySTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariables_1_b_1, & eVariables_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CSuccess<int>::name},
      {refalrts::icCopySTVar, & sStackDepth_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sStackDepth_1_2, sStackDepth_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStackDepth_1_3, sStackDepth_1_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_adt( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_ident( n5, & CSuccess<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sStackDepth_1_3 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eVariables_1_b_1, eVariables_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStackDepth_1_2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStackDepth_1_1 );
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

static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eFree_1_b_1;
    refalrts::use( eFree_1_b_1 );
    static refalrts::Iter eFree_1_e_1;
    refalrts::use( eFree_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter sMode_1_3;
    refalrts::use( sMode_1_3 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sVarDepth_1_2;
    refalrts::use( sVarDepth_1_2 );
    static refalrts::Iter sVarDepth_1_3;
    refalrts::use( sVarDepth_1_3 );
    // (~1 s.Mode1  e.Index1  s.VarDepth1  )~1 e.Variables_B1  (~2 & FreeVarsSent e.Free1  )~2 (~3 & FreeVarsFunc e.FreeFunc1  )~3 e.Variables_E1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sVarDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_0;
      refalrts::Iter be_4 = be_0;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsFunc, bb_3, be_3 ) )
        continue;
      eFree_1_b_1 = bb_2;
      refalrts::use( eFree_1_b_1 );
      eFree_1_e_1 = be_2;
      refalrts::use( eFree_1_e_1 );
      eFreeFunc_1_b_1 = bb_3;
      refalrts::use( eFreeFunc_1_b_1 );
      eFreeFunc_1_e_1 = be_3;
      refalrts::use( eFreeFunc_1_e_1 );
      eVariables_E_1_b_1 = bb_4;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_4;
      refalrts::use( eVariables_E_1_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable_AddToFree, (void*) "ShiftVariable_AddToFree"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sMode_1_1},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eFree_1_b_1, & eFree_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
        {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sMode_1_1},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sMode_1_2, sMode_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sMode_1_3, sMode_1_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_1_2, sVarDepth_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_1_3, sVarDepth_1_2 ) )
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
      if( ! refalrts::alloc_name( n3, & FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, & ShiftVariable_AddToFree, "ShiftVariable_AddToFree" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & FreeVarsFunc, "FreeVarsFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
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
      refalrts::push_stack( n17 );
      refalrts::push_stack( n13 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n15, n16 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sVarDepth_1_3 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_stvar( res, sMode_1_3 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n10, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n2, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eFree_1_b_1, eFree_1_e_1 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sVarDepth_1_2 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_stvar( res, sMode_1_2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      refalrts::link_brackets( n0, n1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVariables_1_b_1;
    refalrts::use( eVariables_1_b_1 );
    static refalrts::Iter eVariables_1_e_1;
    refalrts::use( eVariables_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Mode1  e.Index1  s.VarDepth1  )~1 e.Variables1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eVariables_1_b_1 = bb_0;
    refalrts::use( eVariables_1_b_1 );
    eVariables_1_e_1 = be_0;
    refalrts::use( eVariables_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sVarDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_1_b_1, & eVariables_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eVariables_1_b_1, eVariables_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter sVarDepth_1_2;
    refalrts::use( sVarDepth_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 s.Mode1  e.Index1  s.VarDepth1  )~1 e.Variables_B1  (~2 s.Mode1  e.Index1  s.VarDepth1  )~2 e.Variables_E1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sVarDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sVarDepth_1_2, sVarDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      eVariables_E_1_b_1 = bb_3;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_3;
      refalrts::use( eVariables_E_1_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
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
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n0, n1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVariables_1_b_1;
    refalrts::use( eVariables_1_b_1 );
    static refalrts::Iter eVariables_1_e_1;
    refalrts::use( eVariables_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Mode1  e.Index1  s.VarDepth1  )~1 e.Variables1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eVariables_1_b_1 = bb_0;
    refalrts::use( eVariables_1_b_1 );
    eVariables_1_e_1 = be_0;
    refalrts::use( eVariables_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sVarDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eVariables_1_b_1, & eVariables_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icSpliceSTVar, & sVarDepth_1_1},
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
    res = refalrts::splice_stvar( res, sVarDepth_1_1 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eVariables_1_b_1, eVariables_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL CAlreadyBounded
template <typename T>
struct CAlreadyBounded {
  static const char *name() {
    return "CAlreadyBounded";
  }
};

extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_Cntx_AddNewVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eFreeSent_1_b_1;
    refalrts::use( eFreeSent_1_b_1 );
    static refalrts::Iter eFreeSent_1_e_1;
    refalrts::use( eFreeSent_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eStack_1_b_1;
    refalrts::use( eStack_1_b_1 );
    static refalrts::Iter eStack_1_e_1;
    refalrts::use( eStack_1_e_1 );
    static refalrts::Iter eLocalVars_B_2_b_1;
    refalrts::use( eLocalVars_B_2_b_1 );
    static refalrts::Iter eLocalVars_B_2_e_1;
    refalrts::use( eLocalVars_B_2_e_1 );
    static refalrts::Iter eLocalVars_E_2_b_1;
    refalrts::use( eLocalVars_E_2_b_1 );
    static refalrts::Iter eLocalVars_E_2_e_1;
    refalrts::use( eLocalVars_E_2_e_1 );
    static refalrts::Iter sDepth_2_1;
    refalrts::use( sDepth_2_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter sDepth_2_2;
    refalrts::use( sDepth_2_2 );
    // s.StackDepth1  s.Mode1  (~2 e.Index1  )~2 (~3 e.FreeSent1  )~3 (~4 e.FreeFunc1  )~4 (~5 e.Stack1  )~5 e.LocalVars_B2  (~1 s.Mode1  e.Index1  s.Depth2  )~1 e.LocalVars_E2 
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
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
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_2;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_2;
    refalrts::use( eIndex_1_e_1 );
    eFreeSent_1_b_1 = bb_3;
    refalrts::use( eFreeSent_1_b_1 );
    eFreeSent_1_e_1 = be_3;
    refalrts::use( eFreeSent_1_e_1 );
    eFreeFunc_1_b_1 = bb_4;
    refalrts::use( eFreeFunc_1_b_1 );
    eFreeFunc_1_e_1 = be_4;
    refalrts::use( eFreeFunc_1_e_1 );
    eStack_1_b_1 = bb_5;
    refalrts::use( eStack_1_b_1 );
    eStack_1_e_1 = be_5;
    refalrts::use( eStack_1_e_1 );
    eLocalVars_B_2_b_1 = 0;
    eLocalVars_B_2_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_1, be_1 ) )
        continue;
      eLocalVars_E_2_b_1 = bb_6;
      refalrts::use( eLocalVars_E_2_b_1 );
      eLocalVars_E_2_e_1 = be_6;
      refalrts::use( eLocalVars_E_2_e_1 );
      if( ! refalrts::svar_left( sDepth_2_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icSpliceEVar, & eLocalVars_B_2_b_1, & eLocalVars_B_2_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sDepth_2_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eLocalVars_E_2_b_1, & eLocalVars_E_2_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icSpliceEVar, & eFreeSent_1_b_1, & eFreeSent_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
        {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eStack_1_b_1, & eStack_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CAlreadyBounded<int>::name},
        {refalrts::icCopySTVar, & sDepth_2_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sDepth_2_2, sDepth_2_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
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
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_adt( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & CAlreadyBounded<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sDepth_2_2 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eStack_1_b_1, eStack_1_e_1 );
      refalrts::link_brackets( n7, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n4, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eFreeSent_1_b_1, eFreeSent_1_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eLocalVars_E_2_b_1, eLocalVars_E_2_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sDepth_2_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eLocalVars_B_2_b_1, eLocalVars_B_2_e_1 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eLocalVars_B_2_b_1, eLocalVars_B_2_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eFreeSent_1_b_1;
    refalrts::use( eFreeSent_1_b_1 );
    static refalrts::Iter eFreeSent_1_e_1;
    refalrts::use( eFreeSent_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eStack_1_b_1;
    refalrts::use( eStack_1_b_1 );
    static refalrts::Iter eStack_1_e_1;
    refalrts::use( eStack_1_e_1 );
    static refalrts::Iter eLocalVars_B_2_b_1;
    refalrts::use( eLocalVars_B_2_b_1 );
    static refalrts::Iter eLocalVars_B_2_e_1;
    refalrts::use( eLocalVars_B_2_e_1 );
    static refalrts::Iter eLocalVars_E_2_b_1;
    refalrts::use( eLocalVars_E_2_b_1 );
    static refalrts::Iter eLocalVars_E_2_e_1;
    refalrts::use( eLocalVars_E_2_e_1 );
    static refalrts::Iter sOldMode_2_1;
    refalrts::use( sOldMode_2_1 );
    static refalrts::Iter sVarDepth_2_1;
    refalrts::use( sVarDepth_2_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter sOldMode_2_2;
    refalrts::use( sOldMode_2_2 );
    static refalrts::Iter sVarDepth_2_2;
    refalrts::use( sVarDepth_2_2 );
    // s.StackDepth1  s.Mode1  (~2 e.Index1  )~2 (~3 e.FreeSent1  )~3 (~4 e.FreeFunc1  )~4 (~5 e.Stack1  )~5 e.LocalVars_B2  (~1 s.OldMode2  e.Index1  s.VarDepth2  )~1 e.LocalVars_E2 
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
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
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_2;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_2;
    refalrts::use( eIndex_1_e_1 );
    eFreeSent_1_b_1 = bb_3;
    refalrts::use( eFreeSent_1_b_1 );
    eFreeSent_1_e_1 = be_3;
    refalrts::use( eFreeSent_1_e_1 );
    eFreeFunc_1_b_1 = bb_4;
    refalrts::use( eFreeFunc_1_b_1 );
    eFreeFunc_1_e_1 = be_4;
    refalrts::use( eFreeFunc_1_e_1 );
    eStack_1_b_1 = bb_5;
    refalrts::use( eStack_1_b_1 );
    eStack_1_e_1 = be_5;
    refalrts::use( eStack_1_e_1 );
    eLocalVars_B_2_b_1 = 0;
    eLocalVars_B_2_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      eLocalVars_E_2_b_1 = bb_6;
      refalrts::use( eLocalVars_E_2_b_1 );
      eLocalVars_E_2_e_1 = be_6;
      refalrts::use( eLocalVars_E_2_e_1 );
      if( ! refalrts::svar_left( sOldMode_2_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sVarDepth_2_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icSpliceEVar, & eLocalVars_B_2_b_1, & eLocalVars_B_2_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_2_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_2_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eLocalVars_E_2_b_1, & eLocalVars_E_2_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icSpliceEVar, & eFreeSent_1_b_1, & eFreeSent_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
        {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eStack_1_b_1, & eStack_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidMode<int>::name},
        {refalrts::icCopySTVar, & sVarDepth_2_1},
        {refalrts::icCopySTVar, & sOldMode_2_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sOldMode_2_2, sOldMode_2_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_2_2, sVarDepth_2_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
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
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_adt( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_ident( n11, & CInvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sOldMode_2_2 );
      res = refalrts::splice_stvar( res, sVarDepth_2_2 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eStack_1_b_1, eStack_1_e_1 );
      refalrts::link_brackets( n7, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n4, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eFreeSent_1_b_1, eFreeSent_1_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eLocalVars_E_2_b_1, eLocalVars_E_2_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sVarDepth_2_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_2_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eLocalVars_B_2_b_1, eLocalVars_B_2_e_1 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eLocalVars_B_2_b_1, eLocalVars_B_2_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eFreeSent_1_b_1;
    refalrts::use( eFreeSent_1_b_1 );
    static refalrts::Iter eFreeSent_1_e_1;
    refalrts::use( eFreeSent_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eStack_1_b_1;
    refalrts::use( eStack_1_b_1 );
    static refalrts::Iter eStack_1_e_1;
    refalrts::use( eStack_1_e_1 );
    static refalrts::Iter eLocalVars_2_b_1;
    refalrts::use( eLocalVars_2_b_1 );
    static refalrts::Iter eLocalVars_2_e_1;
    refalrts::use( eLocalVars_2_e_1 );
    static refalrts::Iter sStackDepth_1_2;
    refalrts::use( sStackDepth_1_2 );
    static refalrts::Iter sStackDepth_1_3;
    refalrts::use( sStackDepth_1_3 );
    // s.StackDepth1  s.Mode1  (~1 e.Index1  )~1 (~2 e.FreeSent1  )~2 (~3 e.FreeFunc1  )~3 (~4 e.Stack1  )~4 e.LocalVars2 
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
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
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
    eFreeSent_1_b_1 = bb_2;
    refalrts::use( eFreeSent_1_b_1 );
    eFreeSent_1_e_1 = be_2;
    refalrts::use( eFreeSent_1_e_1 );
    eFreeFunc_1_b_1 = bb_3;
    refalrts::use( eFreeFunc_1_b_1 );
    eFreeFunc_1_e_1 = be_3;
    refalrts::use( eFreeFunc_1_e_1 );
    eStack_1_b_1 = bb_4;
    refalrts::use( eStack_1_b_1 );
    eStack_1_e_1 = be_4;
    refalrts::use( eStack_1_e_1 );
    eLocalVars_2_b_1 = bb_0;
    refalrts::use( eLocalVars_2_b_1 );
    eLocalVars_2_e_1 = be_0;
    refalrts::use( eLocalVars_2_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icSpliceSTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icCopySTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eLocalVars_2_b_1, & eLocalVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
      {refalrts::icSpliceEVar, & eFreeSent_1_b_1, & eFreeSent_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
      {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eStack_1_b_1, & eStack_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CSuccess<int>::name},
      {refalrts::icCopySTVar, & sStackDepth_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sStackDepth_1_2, sStackDepth_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sStackDepth_1_3, sStackDepth_1_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
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
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_adt( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_ident( n11, & CSuccess<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sStackDepth_1_3 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eStack_1_b_1, eStack_1_e_1 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFreeSent_1_b_1, eFreeSent_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eLocalVars_2_b_1, eLocalVars_2_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStackDepth_1_2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStackDepth_1_1 );
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

refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eLocalVars_1_b_1;
    refalrts::use( eLocalVars_1_b_1 );
    static refalrts::Iter eLocalVars_1_e_1;
    refalrts::use( eLocalVars_1_e_1 );
    static refalrts::Iter eFreeSent_1_b_1;
    refalrts::use( eFreeSent_1_b_1 );
    static refalrts::Iter eFreeSent_1_e_1;
    refalrts::use( eFreeSent_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eStack_1_b_1;
    refalrts::use( eStack_1_b_1 );
    static refalrts::Iter eStack_1_e_1;
    refalrts::use( eStack_1_e_1 );
    // [~1 & Context s.StackDepth1  e.LocalVars1  (~2 & FreeVarsSent e.FreeSent1  )~2 (~3 & FreeVarsFunc e.FreeFunc1  )~3 e.Stack1  ]~1 s.Mode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
    eLocalVars_1_b_1 = 0;
    eLocalVars_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_1;
      refalrts::Iter be_4 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsFunc, bb_3, be_3 ) )
        continue;
      eFreeSent_1_b_1 = bb_2;
      refalrts::use( eFreeSent_1_b_1 );
      eFreeSent_1_e_1 = be_2;
      refalrts::use( eFreeSent_1_e_1 );
      eFreeFunc_1_b_1 = bb_3;
      refalrts::use( eFreeFunc_1_b_1 );
      eFreeFunc_1_e_1 = be_3;
      refalrts::use( eFreeFunc_1_e_1 );
      eStack_1_b_1 = bb_4;
      refalrts::use( eStack_1_b_1 );
      eStack_1_e_1 = be_4;
      refalrts::use( eStack_1_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
        {refalrts::icSpliceEVar, & eLocalVars_1_b_1, & eLocalVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
        {refalrts::icFunc, (void*) & lambda_Cntx_AddNewVariable_0, (void*) "lambda_Cntx_AddNewVariable_0"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eFreeSent_1_b_1, & eFreeSent_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eStack_1_b_1, & eStack_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n3, & refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" ) )
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
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n14 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::push_stack( n13 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n11, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eStack_1_b_1, eStack_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eFreeSent_1_b_1, eFreeSent_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eLocalVars_1_b_1, eLocalVars_1_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eLocalVars_1_b_1, eLocalVars_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

//$LABEL CExistVariable
template <typename T>
struct CExistVariable {
  static const char *name() {
    return "CExistVariable";
  }
};

//$LABEL CNotFound
template <typename T>
struct CNotFound {
  static const char *name() {
    return "CNotFound";
  }
};

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter sVarDepth_1_2;
    refalrts::use( sVarDepth_1_2 );
    static refalrts::Iter sVarDepth_1_3;
    refalrts::use( sVarDepth_1_3 );
    // [~1 & Context s.StackDepth1  e.Variables_B1  (~2 s.Mode1  e.Index1  s.VarDepth1  )~2 e.Variables_E1  ]~1 s.Mode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      eVariables_E_1_b_1 = bb_3;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_3;
      refalrts::use( eVariables_E_1_e_1 );
      if( ! refalrts::svar_left( sVarDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & ShiftVariable, (void*) "ShiftVariable"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sMode_1_2},
        {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CExistVariable<int>::name},
        {refalrts::icCopySTVar, & sVarDepth_1_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sVarDepth_1_2, sVarDepth_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sVarDepth_1_3, sVarDepth_1_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & ShiftVariable, "ShiftVariable" ) )
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
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_adt( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_ident( n10, & CExistVariable<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sVarDepth_1_3 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sVarDepth_1_2 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_stvar( res, sMode_1_2 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eVariables_B_1_b_1;
    refalrts::use( eVariables_B_1_b_1 );
    static refalrts::Iter eVariables_B_1_e_1;
    refalrts::use( eVariables_B_1_e_1 );
    static refalrts::Iter eVariables_E_1_b_1;
    refalrts::use( eVariables_E_1_b_1 );
    static refalrts::Iter eVariables_E_1_e_1;
    refalrts::use( eVariables_E_1_e_1 );
    static refalrts::Iter sOldMode_1_1;
    refalrts::use( sOldMode_1_1 );
    static refalrts::Iter sVarDepth_1_1;
    refalrts::use( sVarDepth_1_1 );
    static refalrts::Iter sNewMode_1_1;
    refalrts::use( sNewMode_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter sOldMode_1_2;
    refalrts::use( sOldMode_1_2 );
    // [~1 & Context s.StackDepth1  e.Variables_B1  (~2 s.OldMode1  e.Index1  s.VarDepth1  )~2 e.Variables_E1  ]~1 s.NewMode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNewMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
    eVariables_B_1_b_1 = 0;
    eVariables_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      eVariables_E_1_b_1 = bb_3;
      refalrts::use( eVariables_E_1_b_1 );
      eVariables_E_1_e_1 = be_3;
      refalrts::use( eVariables_E_1_e_1 );
      if( ! refalrts::svar_left( sOldMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::svar_left( sVarDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icSpliceEVar, & eVariables_B_1_b_1, & eVariables_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sOldMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icSpliceSTVar, & sVarDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVariables_E_1_b_1, & eVariables_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icIdent, (void*) & CInvalidMode<int>::name},
        {refalrts::icInt, 0, 0, 0 },
        {refalrts::icCopySTVar, & sOldMode_1_1},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sOldMode_1_2, sOldMode_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_adt( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_ident( n5, & CInvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_number( n6, 0UL ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, sOldMode_1_2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eVariables_E_1_b_1, eVariables_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sVarDepth_1_1 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sOldMode_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eVariables_B_1_b_1, eVariables_B_1_e_1 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVariables_B_1_b_1, eVariables_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eVariables_1_b_1;
    refalrts::use( eVariables_1_b_1 );
    static refalrts::Iter eVariables_1_e_1;
    refalrts::use( eVariables_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // [~1 & Context s.StackDepth1  e.Variables1  ]~1 s.Mode1  e.Index1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    eVariables_1_b_1 = bb_1;
    refalrts::use( eVariables_1_b_1 );
    eVariables_1_e_1 = be_1;
    refalrts::use( eVariables_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_0, be_0 ) )
      break;
    eIndex_1_b_1 = bb_0;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_0;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icSpliceSTVar, & sStackDepth_1_1},
      {refalrts::icSpliceEVar, & eVariables_1_b_1, & eVariables_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icIdent, (void*) & CNotFound<int>::name},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
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
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_ident( n3, & CNotFound<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eVariables_1_b_1, eVariables_1_e_1 );
    res = refalrts::splice_stvar( res, sStackDepth_1_1 );
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

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eFreeSent_1_b_1;
    refalrts::use( eFreeSent_1_b_1 );
    static refalrts::Iter eFreeSent_1_e_1;
    refalrts::use( eFreeSent_1_e_1 );
    static refalrts::Iter eFreeFunc_1_b_1;
    refalrts::use( eFreeFunc_1_b_1 );
    static refalrts::Iter eFreeFunc_1_e_1;
    refalrts::use( eFreeFunc_1_e_1 );
    static refalrts::Iter eOuters_1_b_1;
    refalrts::use( eOuters_1_b_1 );
    static refalrts::Iter eOuters_1_e_1;
    refalrts::use( eOuters_1_e_1 );
    static refalrts::Iter eLocals_1_b_1;
    refalrts::use( eLocals_1_b_1 );
    static refalrts::Iter eLocals_1_e_1;
    refalrts::use( eLocals_1_e_1 );
    // [~1 & Context s.StackDepth1  e.Locals1  (~2 & FreeVarsSent e.FreeSent1  )~2 (~3 & FreeVarsFunc e.FreeFunc1  )~3 e.Outers1  ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    eLocals_1_b_1 = 0;
    eLocals_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_1;
      refalrts::Iter be_4 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsSent, bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & FreeVarsFunc, bb_3, be_3 ) )
        continue;
      eFreeSent_1_b_1 = bb_2;
      refalrts::use( eFreeSent_1_b_1 );
      eFreeSent_1_e_1 = be_2;
      refalrts::use( eFreeSent_1_e_1 );
      eFreeFunc_1_b_1 = bb_3;
      refalrts::use( eFreeFunc_1_b_1 );
      eFreeFunc_1_e_1 = be_3;
      refalrts::use( eFreeFunc_1_e_1 );
      eOuters_1_b_1 = bb_4;
      refalrts::use( eOuters_1_b_1 );
      eOuters_1_e_1 = be_4;
      refalrts::use( eOuters_1_e_1 );
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
        {refalrts::icFunc, (void*) & Context, (void*) "Context"},
        {refalrts::icSpliceSTVar, & sStackDepth_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Unique, (void*) "Unique"},
        {refalrts::icSpliceEVar, & eFreeSent_1_b_1, & eFreeSent_1_e_1},
        {refalrts::icSpliceEVar, & eFreeFunc_1_b_1, & eFreeFunc_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eOuters_1_b_1, & eOuters_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
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
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & FreeVarsFunc, "FreeVarsFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & Unique, "Unique" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_adt( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eOuters_1_b_1, eOuters_1_e_1 );
      refalrts::link_brackets( n5, n10 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::push_stack( n9 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eFreeFunc_1_b_1, eFreeFunc_1_e_1 );
      res = refalrts::splice_evar( res, eFreeSent_1_b_1, eFreeSent_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sStackDepth_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eLocals_1_b_1, eLocals_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eBegin_1_b_1;
    refalrts::use( eBegin_1_b_1 );
    static refalrts::Iter eBegin_1_e_1;
    refalrts::use( eBegin_1_e_1 );
    static refalrts::Iter tCopy_1_1;
    refalrts::use( tCopy_1_1 );
    static refalrts::Iter eMiddle_1_b_1;
    refalrts::use( eMiddle_1_b_1 );
    static refalrts::Iter eMiddle_1_e_1;
    refalrts::use( eMiddle_1_e_1 );
    static refalrts::Iter eEnd_1_b_1;
    refalrts::use( eEnd_1_b_1 );
    static refalrts::Iter eEnd_1_e_1;
    refalrts::use( eEnd_1_e_1 );
    static refalrts::Iter tCopy_1_2;
    refalrts::use( tCopy_1_2 );
    // e.Begin1  t.Copy1  e.Middle1  t.Copy1  e.End1 
    eBegin_1_b_1 = 0;
    eBegin_1_e_1 = 0;
    do {
      refalrts::Iter bb_1 = bb_0;
      refalrts::Iter be_1 = be_0;
      if( ! refalrts::tvar_left( tCopy_1_1, bb_1, be_1 ) )
        continue;
      eMiddle_1_b_1 = 0;
      eMiddle_1_e_1 = 0;
      do {
        refalrts::Iter bb_2 = bb_1;
        refalrts::Iter be_2 = be_1;
        if( ! refalrts::repeated_stvar_left( tCopy_1_2, tCopy_1_1, bb_2, be_2 ) )
          continue;
        eEnd_1_b_1 = bb_2;
        refalrts::use( eEnd_1_b_1 );
        eEnd_1_e_1 = be_2;
        refalrts::use( eEnd_1_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eBegin_1_b_1, & eBegin_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Unique, (void*) "Unique"},
          {refalrts::icSpliceSTVar, & tCopy_1_1},
          {refalrts::icSpliceEVar, & eMiddle_1_b_1, & eMiddle_1_e_1},
          {refalrts::icSpliceEVar, & eEnd_1_b_1, & eEnd_1_e_1},
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
        if( ! refalrts::alloc_name( n1, & Unique, "Unique" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eEnd_1_b_1, eEnd_1_e_1 );
        res = refalrts::splice_evar( res, eMiddle_1_b_1, eMiddle_1_e_1 );
        res = refalrts::splice_stvar( res, tCopy_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eBegin_1_b_1, eBegin_1_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eMiddle_1_b_1, eMiddle_1_e_1, bb_1, be_1 ) );
    } while ( refalrts::open_evar_advance( eBegin_1_b_1, eBegin_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eUniques_1_b_1;
    refalrts::use( eUniques_1_b_1 );
    static refalrts::Iter eUniques_1_e_1;
    refalrts::use( eUniques_1_e_1 );
    // e.Uniques1 
    eUniques_1_b_1 = bb_0;
    refalrts::use( eUniques_1_b_1 );
    eUniques_1_e_1 = be_0;
    refalrts::use( eUniques_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eUniques_1_b_1, & eUniques_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUniques_1_b_1, eUniques_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eVariables_1_b_1;
    refalrts::use( eVariables_1_b_1 );
    static refalrts::Iter eVariables_1_e_1;
    refalrts::use( eVariables_1_e_1 );
    // [~1 & Context s.StackDepth1  e.Variables1  ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
      break;
    eVariables_1_b_1 = bb_1;
    refalrts::use( eVariables_1_b_1 );
    eVariables_1_e_1 = be_1;
    refalrts::use( eVariables_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsSent, (void*) "FreeVarsSent"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FreeVarsFunc, (void*) "FreeVarsFunc"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eVariables_1_b_1, & eVariables_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
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
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & FreeVarsSent, "FreeVarsSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & FreeVarsFunc, "FreeVarsFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_adt( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eVariables_1_b_1, eVariables_1_e_1 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sStackDepth_1_1 );
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

refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sStackDepth_1_1;
    refalrts::use( sStackDepth_1_1 );
    static refalrts::Iter eClosureContext_1_b_1;
    refalrts::use( eClosureContext_1_b_1 );
    static refalrts::Iter eClosureContext_1_e_1;
    refalrts::use( eClosureContext_1_e_1 );
    static refalrts::Iter eOuters_1_b_1;
    refalrts::use( eOuters_1_b_1 );
    static refalrts::Iter eOuters_1_e_1;
    refalrts::use( eOuters_1_e_1 );
    // [~1 & Context s.StackDepth1  (~2 & FreeVarsSent )~2 (~3 & FreeVarsFunc e.ClosureContext1  )~3 e.Outers1  ]~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::adt_left( bb_1, be_1, & Context, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sStackDepth_1_1, bb_1, be_1 ) )
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
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    eClosureContext_1_b_1 = bb_3;
    refalrts::use( eClosureContext_1_b_1 );
    eClosureContext_1_e_1 = be_3;
    refalrts::use( eClosureContext_1_e_1 );
    eOuters_1_b_1 = bb_1;
    refalrts::use( eOuters_1_b_1 );
    eOuters_1_e_1 = be_1;
    refalrts::use( eOuters_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenADT},
      {refalrts::icFunc, (void*) & Context, (void*) "Context"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icSpliceSTVar, & sStackDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eOuters_1_b_1, & eOuters_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseADT},
      {refalrts::icSpliceEVar, & eClosureContext_1_b_1, & eClosureContext_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
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
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_adt( n5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eClosureContext_1_b_1, eClosureContext_1_e_1 );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eOuters_1_b_1, eOuters_1_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sStackDepth_1_1 );
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
