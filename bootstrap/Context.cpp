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
    refalrts::start_sentence();
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
      { Context, "Context" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
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
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
    refalrts::start_sentence();
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
      { Context, "Context" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icNumLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
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
    // [Context  0 ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::number_left( 0UL, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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

//$LABEL CSuccess
template <typename SREFAL_PARAM_INT>
struct CSuccess {
  static const char *name() {
    return "CSuccess";
  }
};

//$LABEL CInvalidMode
template <typename SREFAL_PARAM_INT>
struct CInvalidMode {
  static const char *name() {
    return "CInvalidMode";
  }
};

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __sStackDepth_1_1 = 8 };
    enum { __sMode_1_1 = 9 };
    enum { __sMode_1_2 = 10 };
    enum { __eIndex_1_1 = 11 };
    enum { __eIndex_1_2 = 13 };
    enum { __eVariables_B_1_1 = 15 };
    enum { __eVariables_E_1_1 = 17 };
    enum { __sVarDepth_1_1 = 19 };
    enum { __sVarDepth_1_2 = 20 };
    enum { __sVarDepth_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ShiftVariable, "ShiftVariable" },
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CSuccess<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 2},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icsRepeatLeft, __sMode_1_2, __sMode_1_1, 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sVarDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_2, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
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
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sMode_1_2], context[__sMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eVariables_E_1_1] = context[6];
      context[__eVariables_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sVarDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_2], context[__sVarDepth_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_3], context[__sVarDepth_1_2] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, ShiftVariable, "ShiftVariable" ) )
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
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_3] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_2] );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __sStackDepth_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __eVariables_B_1_1 = 11 };
    enum { __eVariables_E_1_1 = 13 };
    enum { __sOldMode_1_1 = 15 };
    enum { __sVarDepth_1_1 = 16 };
    enum { __sNewMode_1_1 = 17 };
    enum { __eIndex_1_2 = 18 };
    enum { __sOldMode_1_2 = 20 };
    enum { __sVarDepth_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CInvalidMode<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNewMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 2},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sOldMode_1_1, 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icsVarLeft, 0, __sVarDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icCopySTVar, 0, __sOldMode_1_1, 0},
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
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNewMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      context[__eVariables_E_1_1] = context[6];
      context[__eVariables_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sOldMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[__sVarDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sOldMode_1_2], context[__sOldMode_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_2], context[__sVarDepth_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
      res = refalrts::splice_stvar( res, context[__sOldMode_1_2] );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_2] );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sOldMode_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __sStackDepth_1_1 = 4 };
    enum { __eVariables_1_1 = 5 };
    enum { __sMode_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
    enum { __sStackDepth_1_2 = 10 };
    enum { __sStackDepth_1_3 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CSuccess<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eVariables_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icCopySTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sStackDepth_1_1, 0},
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
    // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    context[__eVariables_1_1] = context[2];
    context[__eVariables_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sStackDepth_1_2], context[__sStackDepth_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sStackDepth_1_3], context[__sStackDepth_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_3] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eVariables_1_1], context[__eVariables_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_2] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __sMode_1_1 = 10 };
    enum { __sVarDepth_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    enum { __eVariables_B_1_1 = 14 };
    enum { __eFree_1_1 = 16 };
    enum { __eFreeFunc_1_1 = 18 };
    enum { __eVariables_E_1_1 = 20 };
    enum { __sMode_1_2 = 22 };
    enum { __sMode_1_3 = 23 };
    enum { __eIndex_1_2 = 24 };
    enum { __eIndex_1_3 = 26 };
    enum { __sVarDepth_1_2 = 28 };
    enum { __sVarDepth_1_3 = 29 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ShiftVariable, "ShiftVariable" },
      { FreeVarsFunc, "FreeVarsFunc" },
      { ShiftVariable_AddToFree, "ShiftVariable_AddToFree" },
      { FreeVarsSent, "FreeVarsSent" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icsVarRight, 0, __sVarDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 0},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 0},
      {refalrts::icSave, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 4, 8},
      {refalrts::icFuncLeft, 0, 3, 4},
      {refalrts::icBracketLeft, 0, 6, 8},
      {refalrts::icFuncLeft, 0, 1, 6},
      {refalrts::icContextSet, 0, __eFree_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFree_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, __eIndex_1_1, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( & FreeVarsSent e.Free#1 ) ( & FreeVarsFunc e.FreeFunc#1 ) e.Variables_E#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sVarDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsSent, context[4], context[5] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsFunc, context[6], context[7] ) )
        continue;
      context[__eFree_1_1] = context[4];
      context[__eFree_1_1 + 1] = context[5];
      context[__eFreeFunc_1_1] = context[6];
      context[__eFreeFunc_1_1 + 1] = context[7];
      context[__eVariables_E_1_1] = context[8];
      context[__eVariables_E_1_1 + 1] = context[9];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sMode_1_3], context[__sMode_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_3], context[__eIndex_1_3 + 1], context[__eIndex_1_2], context[__eIndex_1_2 + 1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_2], context[__sVarDepth_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_3], context[__sVarDepth_1_2] ) )
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
      if( ! refalrts::alloc_name( n3, FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, ShiftVariable_AddToFree, "ShiftVariable_AddToFree" ) )
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
      if( ! refalrts::alloc_name( n11, FreeVarsFunc, "FreeVarsFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, ShiftVariable, "ShiftVariable" ) )
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
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n15, n16 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_3] );
      res = refalrts::splice_evar( res, context[__eIndex_1_3], context[__eIndex_1_3 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_3] );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n10, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n2, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eFree_1_1], context[__eFree_1_1 + 1] );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_2] );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_2] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      refalrts::link_brackets( n0, n1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eVariables_1_1 = 4 };
    enum { __sMode_1_1 = 6 };
    enum { __sVarDepth_1_1 = 7 };
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
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eVariables_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icsVarRight, 0, __sVarDepth_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_1_1, 0},
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
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eVariables_1_1] = context[0];
    context[__eVariables_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sVarDepth_1_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.Index#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eVariables_1_1], context[__eVariables_1_1 + 1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __sMode_1_1 = 8 };
    enum { __sVarDepth_1_1 = 9 };
    enum { __eIndex_1_1 = 10 };
    enum { __eVariables_B_1_1 = 12 };
    enum { __eVariables_E_1_1 = 14 };
    enum { __sMode_1_2 = 16 };
    enum { __sVarDepth_1_2 = 17 };
    enum { __eIndex_1_2 = 18 };
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
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icsVarRight, 0, __sVarDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 0},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 0},
      {refalrts::icSave, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icsRepeatLeft, __sMode_1_2, __sMode_1_1, 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icsRepeatLeft, __sVarDepth_1_2, __sVarDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
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
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sVarDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sMode_1_2], context[__sMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sVarDepth_1_2], context[__sVarDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eVariables_E_1_1] = context[6];
      context[__eVariables_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_close_bracket( n1 ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n0, n1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eVariables_1_1 = 4 };
    enum { __sMode_1_1 = 6 };
    enum { __sVarDepth_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
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
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eVariables_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 2},
      {refalrts::icsVarRight, 0, __sVarDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eVariables_1_1] = context[0];
    context[__eVariables_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sVarDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

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
    res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, context[__eVariables_1_1], context[__eVariables_1_1 + 1] );
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
template <typename SREFAL_PARAM_INT>
struct CAlreadyBounded {
  static const char *name() {
    return "CAlreadyBounded";
  }
};

extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_Cntx_AddNewVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __sStackDepth_1_1 = 14 };
    enum { __sMode_1_1 = 15 };
    enum { __eIndex_1_1 = 16 };
    enum { __eFreeSent_1_1 = 18 };
    enum { __eFreeFunc_1_1 = 20 };
    enum { __eStack_1_1 = 22 };
    enum { __eLocalVars_B_2_1 = 24 };
    enum { __eLocalVars_E_2_1 = 26 };
    enum { __sDepth_2_1 = 28 };
    enum { __sMode_1_2 = 29 };
    enum { __eIndex_1_2 = 30 };
    enum { __sDepth_2_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CAlreadyBounded<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icContextSet, 0, __eFreeSent_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eStack_1_1, 8},
      {refalrts::icEPrepare, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icEStart, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::icsRepeatLeft, __sMode_1_2, __sMode_1_1, 10},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 10},
      {refalrts::icContextSet, 0, __eLocalVars_E_2_1, 12},
      {refalrts::icsVarLeft, 0, __sDepth_2_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sDepth_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_E_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eFreeSent_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eStack_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sDepth_2_1, 0},
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
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.Mode#1 e.Index#1 s.Depth#2 ) e.LocalVars_E#2
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
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
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eFreeSent_1_1] = context[4];
    context[__eFreeSent_1_1 + 1] = context[5];
    context[__eFreeFunc_1_1] = context[6];
    context[__eFreeFunc_1_1 + 1] = context[7];
    context[__eStack_1_1] = context[8];
    context[__eStack_1_1 + 1] = context[9];
    context[__eLocalVars_B_2_1] = 0;
    context[__eLocalVars_B_2_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
        continue;
      context[__eLocalVars_E_2_1] = context[12];
      context[__eLocalVars_E_2_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sDepth_2_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sDepth_2_2], context[__sDepth_2_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
      if( ! refalrts::alloc_name( n5, FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, FreeVarsFunc, "FreeVarsFunc" ) )
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
      res = refalrts::splice_stvar( res, context[__sDepth_2_2] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eStack_1_1], context[__eStack_1_1 + 1] );
      refalrts::link_brackets( n7, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n4, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eFreeSent_1_1], context[__eFreeSent_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eLocalVars_E_2_1], context[__eLocalVars_E_2_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sDepth_2_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eLocalVars_B_2_1], context[__eLocalVars_B_2_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLocalVars_B_2_1], context[__eLocalVars_B_2_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __sStackDepth_1_1 = 14 };
    enum { __eIndex_1_1 = 15 };
    enum { __eFreeSent_1_1 = 17 };
    enum { __eFreeFunc_1_1 = 19 };
    enum { __eStack_1_1 = 21 };
    enum { __eLocalVars_B_2_1 = 23 };
    enum { __eLocalVars_E_2_1 = 25 };
    enum { __sOldMode_2_1 = 27 };
    enum { __sVarDepth_2_1 = 28 };
    enum { __sMode_1_1 = 29 };
    enum { __eIndex_1_2 = 30 };
    enum { __sOldMode_2_2 = 32 };
    enum { __sVarDepth_2_2 = 33 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CInvalidMode<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icContextSet, 0, __eFreeSent_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eStack_1_1, 8},
      {refalrts::icEPrepare, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icEStart, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icSave, 0, 12, 0},
      {refalrts::icBracketLeft, 0, 10, 12},
      {refalrts::icContextSet, 0, __eLocalVars_E_2_1, 12},
      {refalrts::icsVarLeft, 0, __sOldMode_2_1, 10},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 10},
      {refalrts::icsVarLeft, 0, __sVarDepth_2_1, 10},
      {refalrts::icEmpty, 0, 0, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_B_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_E_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eFreeSent_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eStack_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_2_1, 0},
      {refalrts::icCopySTVar, 0, __sOldMode_2_1, 0},
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
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.OldMode#2 e.Index#1 s.VarDepth#2 ) e.LocalVars_E#2
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
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
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eFreeSent_1_1] = context[4];
    context[__eFreeSent_1_1 + 1] = context[5];
    context[__eFreeFunc_1_1] = context[6];
    context[__eFreeFunc_1_1 + 1] = context[7];
    context[__eStack_1_1] = context[8];
    context[__eStack_1_1 + 1] = context[9];
    context[__eLocalVars_B_2_1] = 0;
    context[__eLocalVars_B_2_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      context[__eLocalVars_E_2_1] = context[12];
      context[__eLocalVars_E_2_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sOldMode_2_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[__sVarDepth_2_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sOldMode_2_2], context[__sOldMode_2_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_2_2], context[__sVarDepth_2_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
      if( ! refalrts::alloc_name( n5, FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, FreeVarsFunc, "FreeVarsFunc" ) )
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
      res = refalrts::splice_stvar( res, context[__sOldMode_2_2] );
      res = refalrts::splice_stvar( res, context[__sVarDepth_2_2] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eStack_1_1], context[__eStack_1_1 + 1] );
      refalrts::link_brackets( n7, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n4, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eFreeSent_1_1], context[__eFreeSent_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eLocalVars_E_2_1], context[__eLocalVars_E_2_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_2_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sOldMode_2_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eLocalVars_B_2_1], context[__eLocalVars_B_2_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLocalVars_B_2_1], context[__eLocalVars_B_2_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __sStackDepth_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    enum { __eFreeSent_1_1 = 14 };
    enum { __eFreeFunc_1_1 = 16 };
    enum { __eStack_1_1 = 18 };
    enum { __eLocalVars_2_1 = 20 };
    enum { __sStackDepth_1_2 = 22 };
    enum { __sStackDepth_1_3 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CSuccess<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 0},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 8, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 2},
      {refalrts::icContextSet, 0, __eFreeSent_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eStack_1_1, 8},
      {refalrts::icContextSet, 0, __eLocalVars_2_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icCopySTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_2_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eFreeSent_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eStack_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sStackDepth_1_1, 0},
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
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars#2
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
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
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eFreeSent_1_1] = context[4];
    context[__eFreeSent_1_1 + 1] = context[5];
    context[__eFreeFunc_1_1] = context[6];
    context[__eFreeFunc_1_1 + 1] = context[7];
    context[__eStack_1_1] = context[8];
    context[__eStack_1_1 + 1] = context[9];
    context[__eLocalVars_2_1] = context[0];
    context[__eLocalVars_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sStackDepth_1_2], context[__sStackDepth_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sStackDepth_1_3], context[__sStackDepth_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
    if( ! refalrts::alloc_name( n5, FreeVarsSent, "FreeVarsSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, FreeVarsFunc, "FreeVarsFunc" ) )
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
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_3] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eStack_1_1], context[__eStack_1_1 + 1] );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFreeSent_1_1], context[__eFreeSent_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eLocalVars_2_1], context[__eLocalVars_2_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_2] );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __sStackDepth_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    enum { __eLocalVars_1_1 = 14 };
    enum { __eFreeSent_1_1 = 16 };
    enum { __eFreeFunc_1_1 = 18 };
    enum { __eStack_1_1 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Fetch, "Fetch" },
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Context, "Context" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 5, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEPrepare, 0, __eLocalVars_1_1, 2},
      {refalrts::icEStart, 0, __eLocalVars_1_1, 2},
      {refalrts::icSave, 0, 8, 2},
      {refalrts::icBracketLeft, 0, 4, 8},
      {refalrts::icFuncLeft, 0, 4, 4},
      {refalrts::icBracketLeft, 0, 6, 8},
      {refalrts::icFuncLeft, 0, 3, 6},
      {refalrts::icContextSet, 0, __eFreeSent_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eStack_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eLocalVars_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFreeSent_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eStack_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // [Context  s.StackDepth#1 e.LocalVars#1 ( & FreeVarsSent e.FreeSent#1 ) ( & FreeVarsFunc e.FreeFunc#1 ) e.Stack#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];
    context[__eLocalVars_1_1] = 0;
    context[__eLocalVars_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsSent, context[4], context[5] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsFunc, context[6], context[7] ) )
        continue;
      context[__eFreeSent_1_1] = context[4];
      context[__eFreeSent_1_1 + 1] = context[5];
      context[__eFreeFunc_1_1] = context[6];
      context[__eFreeFunc_1_1 + 1] = context[7];
      context[__eStack_1_1] = context[8];
      context[__eStack_1_1 + 1] = context[9];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" ) )
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
      res = refalrts::splice_evar( res, context[__eStack_1_1], context[__eStack_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eFreeSent_1_1], context[__eFreeSent_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eLocalVars_1_1], context[__eLocalVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLocalVars_1_1], context[__eLocalVars_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

//$LABEL CExistVariable
template <typename SREFAL_PARAM_INT>
struct CExistVariable {
  static const char *name() {
    return "CExistVariable";
  }
};

//$LABEL CNotFound
template <typename SREFAL_PARAM_INT>
struct CNotFound {
  static const char *name() {
    return "CNotFound";
  }
};

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __sStackDepth_1_1 = 8 };
    enum { __sMode_1_1 = 9 };
    enum { __sMode_1_2 = 10 };
    enum { __eIndex_1_1 = 11 };
    enum { __eIndex_1_2 = 13 };
    enum { __eVariables_B_1_1 = 15 };
    enum { __eVariables_E_1_1 = 17 };
    enum { __sVarDepth_1_1 = 19 };
    enum { __sVarDepth_1_2 = 20 };
    enum { __sVarDepth_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { ShiftVariable, "ShiftVariable" },
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CExistVariable<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 2},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icsRepeatLeft, __sMode_1_2, __sMode_1_1, 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sVarDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_2, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icCopySTVar, 0, __sVarDepth_1_1, 0},
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
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sMode_1_2], context[__sMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eVariables_E_1_1] = context[6];
      context[__eVariables_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sVarDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_2], context[__sVarDepth_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sVarDepth_1_3], context[__sVarDepth_1_2] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, ShiftVariable, "ShiftVariable" ) )
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
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_3] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_2] );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __sStackDepth_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __eVariables_B_1_1 = 11 };
    enum { __eVariables_E_1_1 = 13 };
    enum { __sOldMode_1_1 = 15 };
    enum { __sVarDepth_1_1 = 16 };
    enum { __sNewMode_1_1 = 17 };
    enum { __eIndex_1_2 = 18 };
    enum { __sOldMode_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CInvalidMode<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icsVarLeft, 0, __sNewMode_1_1, 0},
      {refalrts::icContextSet, 0, __eIndex_1_1, 0},
      {refalrts::icEPrepare, 0, __eVariables_B_1_1, 2},
      {refalrts::icEStart, 0, __eVariables_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icContextSet, 0, __eVariables_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sOldMode_1_1, 4},
      {refalrts::iceRepeatLeft, __eIndex_1_2, __eIndex_1_1, 4},
      {refalrts::icsVarLeft, 0, __sVarDepth_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sOldMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eIndex_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sVarDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icCopySTVar, 0, __sOldMode_1_1, 0},
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
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNewMode_1_1], context[0], context[1] ) )
      break;
    context[__eIndex_1_1] = context[0];
    context[__eIndex_1_1 + 1] = context[1];
    context[__eVariables_B_1_1] = 0;
    context[__eVariables_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      context[__eVariables_E_1_1] = context[6];
      context[__eVariables_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sOldMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[__sVarDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sOldMode_1_2], context[__sOldMode_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
      res = refalrts::splice_stvar( res, context[__sOldMode_1_2] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eVariables_E_1_1], context[__eVariables_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sVarDepth_1_1] );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sOldMode_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVariables_B_1_1], context[__eVariables_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sStackDepth_1_1 = 4 };
    enum { __eVariables_1_1 = 5 };
    enum { __sMode_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Context, "Context" }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CNotFound<int>::name
    };
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eVariables_1_1, 2},
      {refalrts::icsVarLeft, 0, __sMode_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icIdent, 0, 0, 0},
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
    // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    context[__eVariables_1_1] = context[2];
    context[__eVariables_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.Index#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
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
    res = refalrts::splice_evar( res, context[__eVariables_1_1], context[__eVariables_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __sStackDepth_1_1 = 10 };
    enum { __eFreeSent_1_1 = 11 };
    enum { __eFreeFunc_1_1 = 13 };
    enum { __eOuters_1_1 = 15 };
    enum { __eLocals_1_1 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Unique, "Unique" },
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Context, "Context" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 3, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icEPrepare, 0, __eLocals_1_1, 2},
      {refalrts::icEStart, 0, __eLocals_1_1, 2},
      {refalrts::icSave, 0, 8, 2},
      {refalrts::icBracketLeft, 0, 4, 8},
      {refalrts::icFuncLeft, 0, 2, 4},
      {refalrts::icBracketLeft, 0, 6, 8},
      {refalrts::icFuncLeft, 0, 1, 6},
      {refalrts::icContextSet, 0, __eFreeSent_1_1, 4},
      {refalrts::icContextSet, 0, __eFreeFunc_1_1, 6},
      {refalrts::icContextSet, 0, __eOuters_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eFreeSent_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eFreeFunc_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eOuters_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
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
    // [Context  s.StackDepth#1 e.Locals#1 ( & FreeVarsSent e.FreeSent#1 ) ( & FreeVarsFunc e.FreeFunc#1 ) e.Outers#1 ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    context[__eLocals_1_1] = 0;
    context[__eLocals_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsSent, context[4], context[5] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( FreeVarsFunc, context[6], context[7] ) )
        continue;
      context[__eFreeSent_1_1] = context[4];
      context[__eFreeSent_1_1 + 1] = context[5];
      context[__eFreeFunc_1_1] = context[6];
      context[__eFreeFunc_1_1 + 1] = context[7];
      context[__eOuters_1_1] = context[8];
      context[__eOuters_1_1 + 1] = context[9];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, Context, "Context" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, FreeVarsSent, "FreeVarsSent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, FreeVarsFunc, "FreeVarsFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, Unique, "Unique" ) )
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
      res = refalrts::splice_evar( res, context[__eOuters_1_1], context[__eOuters_1_1 + 1] );
      refalrts::link_brackets( n5, n10 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::push_stack( n9 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eFreeFunc_1_1], context[__eFreeFunc_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eFreeSent_1_1], context[__eFreeSent_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLocals_1_1], context[__eLocals_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eBegin_1_1 = 6 };
    enum { __tCopy_1_1 = 8 };
    enum { __eMiddle_1_1 = 9 };
    enum { __eEnd_1_1 = 11 };
    enum { __tCopy_1_2 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Unique, "Unique" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEPrepare, 0, __eBegin_1_1, 0},
      {refalrts::icEStart, 0, __eBegin_1_1, 0},
      {refalrts::icSave, 0, 2, 0},
      {refalrts::ictVarLeft, 0, __tCopy_1_1, 2},
      {refalrts::icEPrepare, 0, __eMiddle_1_1, 2},
      {refalrts::icEStart, 0, __eMiddle_1_1, 2},
      {refalrts::icSave, 0, 4, 2},
      {refalrts::ictRepeatLeft, __tCopy_1_2, __tCopy_1_1, 4},
      {refalrts::icContextSet, 0, __eEnd_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eBegin_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tCopy_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eMiddle_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eEnd_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
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
    // e.Begin#1 t.Copy#1 e.Middle#1 t.Copy#1 e.End#1
    context[__eBegin_1_1] = 0;
    context[__eBegin_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[2] = context[0];
      context[3] = context[1];
      if( ! refalrts::tvar_left( context[__tCopy_1_1], context[2], context[3] ) )
        continue;
      context[__eMiddle_1_1] = 0;
      context[__eMiddle_1_1 + 1] = 0;
      refalrts::start_e_loop();
      do {
        context[4] = context[2];
        context[5] = context[3];
        if( ! refalrts::repeated_stvar_left( context[__tCopy_1_2], context[__tCopy_1_1], context[4], context[5] ) )
          continue;
        context[__eEnd_1_1] = context[4];
        context[__eEnd_1_1 + 1] = context[5];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, Unique, "Unique" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eEnd_1_1], context[__eEnd_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eMiddle_1_1], context[__eMiddle_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__tCopy_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, context[__eBegin_1_1], context[__eBegin_1_1 + 1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eMiddle_1_1], context[__eMiddle_1_1 + 1], context[2], context[3] ) );
    } while ( refalrts::open_evar_advance( context[__eBegin_1_1], context[__eBegin_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eUniques_1_1 = 2 };
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
      {refalrts::icContextSet, 0, __eUniques_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eUniques_1_1, 0},
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
    // e.Uniques#1
    context[__eUniques_1_1] = context[0];
    context[__eUniques_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eUniques_1_1], context[__eUniques_1_1 + 1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sStackDepth_1_1 = 4 };
    enum { __eVariables_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" },
      { Inc, "Inc" },
      { Context, "Context" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 3, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icContextSet, 0, __eVariables_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eVariables_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
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
    // [Context  s.StackDepth#1 e.Variables#1 ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    context[__eVariables_1_1] = context[2];
    context[__eVariables_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, FreeVarsSent, "FreeVarsSent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, FreeVarsFunc, "FreeVarsFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_adt( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eVariables_1_1], context[__eVariables_1_1 + 1] );
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
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
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
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sStackDepth_1_1 = 8 };
    enum { __eClosureContext_1_1 = 9 };
    enum { __eOuters_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Dec, "Dec" },
      { Context, "Context" },
      { FreeVarsFunc, "FreeVarsFunc" },
      { FreeVarsSent, "FreeVarsSent" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sStackDepth_1_1, 2},
      {refalrts::icBracketLeft, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 3, 4},
      {refalrts::icBracketLeft, 0, 6, 2},
      {refalrts::icFuncLeft, 0, 2, 6},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eClosureContext_1_1, 6},
      {refalrts::icContextSet, 0, __eOuters_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sStackDepth_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eOuters_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseADT, 0},
      {refalrts::icSpliceEVar, 0, __eClosureContext_1_1, 0},
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
    // [Context  s.StackDepth#1 ( & FreeVarsSent ) ( & FreeVarsFunc e.ClosureContext#1 ) e.Outers#1 ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sStackDepth_1_1], context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( FreeVarsSent, context[4], context[5] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( FreeVarsFunc, context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eClosureContext_1_1] = context[6];
    context[__eClosureContext_1_1 + 1] = context[7];
    context[__eOuters_1_1] = context[2];
    context[__eOuters_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Context, "Context" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_adt( n5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eClosureContext_1_1], context[__eClosureContext_1_1 + 1] );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eOuters_1_1], context[__eOuters_1_1 + 1] );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sStackDepth_1_1] );
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
