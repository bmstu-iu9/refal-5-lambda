// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult TSymTable(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
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
    if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
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
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Declared(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Defined(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Identifier(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    enum { __sOtherScopeClass_1_1 = 18 };
    enum { __sScopeClass_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sOtherScopeClass_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sOtherScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Defined s.OtherScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sOtherScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'y' ) )
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
      if( ! refalrts::alloc_char( n22, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_adt( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_open_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_name( n31, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_adt( n33 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n28, n33 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n30, n32 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sOtherScopeClass_1_1] );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sScopeClass_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eNames_B_1_1 = 12 };
    enum { __eNames_E_1_1 = 14 };
    enum { __sScopeClass_1_2 = 16 };
    enum { __sLnNum_1_1 = 17 };
    enum { __eName_1_2 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { Declared, "Declared" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 2, 4},
      {refalrts::icsRepeatLeft, __sScopeClass_1_2, __sScopeClass_1_1, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sScopeClass_1_2], context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { Declared, "Declared" },
      { GN_Local, "GN_Local" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 5, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 4, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared & GN_Entry e.Name#1 ) e.Names_E#1 ] & GN_Local s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Local, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Entry, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'r' ) )
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
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_open_adt( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_name( n38, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_adt( n43 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n37, n43 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::push_stack( n36 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Local, "GN_Local" },
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { Declared, "Declared" },
      { GN_Entry, "GN_Entry" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 5, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 4, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'L', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared & GN_Local e.Name#1 ) e.Names_E#1 ] & GN_Entry s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Entry, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Local, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'r' ) )
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
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_open_adt( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_name( n38, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_adt( n43 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n37, n43 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::push_stack( n36 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 4 };
    enum { __eNames_1_1 = 5 };
    enum { __sScopeClass_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    enum { __sLnNum_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Defined, "Defined" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_adt( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ST_AddDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sScopeClass_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eNames_B_1_1 = 12 };
    enum { __eNames_E_1_1 = 14 };
    enum { __sScopeClass_1_2 = 16 };
    enum { __sLnNum_1_1 = 17 };
    enum { __eName_1_2 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Declared, "Declared" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::icsRepeatLeft, __sScopeClass_1_2, __sScopeClass_1_1, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sScopeClass_1_2], context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sScopeClass_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eNames_B_1_1 = 12 };
    enum { __eNames_E_1_1 = 14 };
    enum { __sScopeClass_1_2 = 16 };
    enum { __sLnNum_1_1 = 17 };
    enum { __eName_1_2 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::icsRepeatLeft, __sScopeClass_1_2, __sScopeClass_1_1, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sScopeClass_1_2], context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { Declared, "Declared" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { GN_Local, "GN_Local" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 4, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 1, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared & GN_Entry e.Name#1 ) e.Names_E#1 ] & GN_Local s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Local, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Entry, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'r' ) )
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
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_open_adt( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_name( n38, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_adt( n43 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n37, n43 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::push_stack( n36 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Local, "GN_Local" },
      { Declared, "Declared" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { GN_Entry, "GN_Entry" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 4, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 1, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'L', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared & GN_Local e.Name#1 ) e.Names_E#1 ] & GN_Entry s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Entry, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Local, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'r' ) )
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
      if( ! refalrts::alloc_char( n28, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_char( n35, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_open_adt( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_name( n38, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_adt( n43 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n37, n43 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::push_stack( n36 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { GN_Local, "GN_Local" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 4, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 1, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'E', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Defined & GN_Entry e.Name#1 ) e.Names_E#1 ] & GN_Local s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Local, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Entry, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'E' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_call( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_open_adt( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_name( n37, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_open_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_name( n39, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_close_bracket( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_adt( n42 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n36, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n38, n41 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      refalrts::push_stack( n35 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Local, "GN_Local" },
      { Defined, "Defined" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" },
      { GN_Entry, "GN_Entry" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icFuncLeft, 0, 4, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 1, 4},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'L', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Defined & GN_Local e.Name#1 ) e.Names_E#1 ] & GN_Entry s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( GN_Entry, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( GN_Local, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'F' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'L' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_char( n31, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_char( n32, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_char( n33, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_char( n34, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_call( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_open_adt( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_name( n37, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_open_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_name( n39, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_close_bracket( n41 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_adt( n42 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n36, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n38, n41 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      refalrts::push_stack( n35 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 4 };
    enum { __eNames_1_1 = 5 };
    enum { __sScopeClass_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    enum { __sLnNum_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Declared, "Declared" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_adt( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __tErrorList_1_1 = 8 };
    enum { __sLnNum_1_1 = 9 };
    enum { __eName_1_1 = 10 };
    enum { __eName_1_2 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __eNames_E_1_1 = 16 };
    enum { __sScopeClass_1_1 = 18 };
    enum { __sOtherScopeClass_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Identifier, "Identifier" },
      { TSymTable, "TSymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sOtherScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'I', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'y', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Identifier s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.OtherScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sOtherScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Identifier, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, 'I' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'y' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'f' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'n' ) )
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
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_adt( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_name( n32, Identifier, "Identifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_close_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_adt( n34 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n29, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n31, n33 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n0 );
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
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tErrorList_1_1 = 4 };
    enum { __eNames_1_1 = 5 };
    enum { __sScopeClass_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    enum { __sLnNum_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Identifier, "Identifier" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Identifier, "Identifier" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_adt( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ST_CheckDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    enum { __eNames_B_1_1 = 11 };
    enum { __eNames_E_1_1 = 13 };
    enum { __sScopeClass_1_1 = 15 };
    enum { __sLnNum_1_1 = 16 };
    enum { __eName_1_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Declared, "Declared" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Declared s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    enum { __eNames_B_1_1 = 11 };
    enum { __eNames_E_1_1 = 13 };
    enum { __sScopeClass_1_1 = 15 };
    enum { __sLnNum_1_1 = 16 };
    enum { __eName_1_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Defined, "Defined" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __sLnNum_1_1 = 4 };
    enum { __eName_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

refalrts::FnResult ST_CheckIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tErrorList_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    enum { __eNames_B_1_1 = 11 };
    enum { __eNames_E_1_1 = 13 };
    enum { __sScopeClass_1_1 = 15 };
    enum { __sLnNum_1_1 = 16 };
    enum { __eName_1_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Identifier, "Identifier" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 6},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
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
    // t.ErrorList#1 [TSymTable  e.Names_B#1 ( & Identifier s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Identifier, context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
        continue;
      context[__eNames_E_1_1] = context[6];
      context[__eNames_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, TSymTable, "TSymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Identifier, "Identifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_adt( n5 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sScopeClass_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __sLnNum_1_1 = 4 };
    enum { __eName_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icChar, 0, 'I', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 'l', 0},
      {refalrts::icChar, 0, 'a', 0},
      {refalrts::icChar, 0, 'r', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, EL_AddErrorAt, "EL_AddErrorAt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eName_1_1 = 8 };
    enum { __eNames_B_1_1 = 10 };
    enum { __sScopeClass_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { TSymTable, "TSymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 6, 2},
      {refalrts::icBracketLeft, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 4},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 4},
      {refalrts::icContextSet, 0, __eName_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
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
    // [TSymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], TSymTable, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[4], context[5] ) )
        continue;
      // Unused closed variable e.Names_E#1
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[4], context[5] ) )
        continue;
      context[__eName_1_1] = context[4];
      context[__eName_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}


//End of file
