// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Entry(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult GN_Local(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_CheckUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Declared(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Defined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ST_AddDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SymTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SymTable(refalrts::Iter, refalrts::Iter) {
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
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
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
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_adt( n6 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
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

refalrts::FnResult ST_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Names#1
    // Unused closed variable e.References#1
    // Unused closed variable e.Idents#1

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

static refalrts::FnResult lambda_PatchReferences_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eName_1_1 = 6 };
    enum { __eName_1_2 = 8 };
    enum { __sLnNum_2_1 = 10 };
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
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 2},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 4},
      {refalrts::icEmpty, 0, 0, 4},
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
    // ( e.Name#1 ) ( s.LnNum#2 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sLnNum_2_1 = 6 };
    enum { __eName_2_1 = 7 };
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
      {refalrts::icBracketLeft, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 4},
      {refalrts::icContextSet, 0, __eName_2_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( e.Name#1 ) ( s.LnNum#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Name#1
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[4], context[5] ) )
      break;
    context[__eName_2_1] = context[4];
    context[__eName_2_1 + 1] = context[5];

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
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_2_1] );
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

static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eReferences_1_1 = 4 };
    enum { __eName_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_PatchReferences_0, "lambda_PatchReferences_0" },
      { refalrts::create_closure, "refalrts::create_closure" },
      { Map, "Map" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icContextSet, 0, __eReferences_1_1, 2},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
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
    // ( e.References#1 ) e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eReferences_1_1] = context[2];
    context[__eReferences_1_1 + 1] = context[3];
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, lambda_PatchReferences_0, "lambda_PatchReferences_0" ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tErrorList_1_1 = 12 };
    enum { __eReferences_1_1 = 13 };
    enum { __eIdents_1_1 = 15 };
    enum { __sLnNum_1_1 = 17 };
    enum { __eName_1_1 = 18 };
    enum { __eName_1_2 = 20 };
    enum { __eNames_B_1_1 = 22 };
    enum { __eNames_E_1_1 = 24 };
    enum { __sAnyScopeClass_1_1 = 26 };
    enum { __sScopeClass_1_1 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { SymTable, "SymTable" },
      { EL_AddErrorAt, "EL_AddErrorAt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sAnyScopeClass_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
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
      {refalrts::icSpliceSTVar, 0, __sAnyScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names_B#1 ( & Defined s.AnyScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
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
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sAnyScopeClass_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
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
      if( ! refalrts::alloc_name( n29, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_bracket( n36 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_adt( n37 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n28, n37 );
      res = refalrts::splice_elem( res, n37 );
      refalrts::link_brackets( n35, n36 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n35 );
      refalrts::link_brackets( n33, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n30, n32 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sAnyScopeClass_1_1] );
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
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tErrorList_1_1 = 12 };
    enum { __eReferences_1_1 = 13 };
    enum { __eIdents_1_1 = 15 };
    enum { __sScopeClass_1_1 = 17 };
    enum { __eName_1_1 = 18 };
    enum { __eName_1_2 = 20 };
    enum { __eNames_B_1_1 = 22 };
    enum { __eNames_E_1_1 = 24 };
    enum { __sLnNum_1_1 = 26 };
    enum { __sAnyScopeClass_1_1 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { PatchReferences, "PatchReferences" },
      { Defined, "Defined" },
      { SymTable, "SymTable" },
      { Declared, "Declared" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 3, 8},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sAnyScopeClass_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names_B#1 ( & Declared s.AnyScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
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
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sAnyScopeClass_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_open_call( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, PatchReferences, "PatchReferences" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_adt( n12 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n12 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::push_stack( n9 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
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
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __tErrorList_1_1 = 8 };
    enum { __eNames_1_1 = 9 };
    enum { __eReferences_1_1 = 11 };
    enum { __eIdents_1_1 = 13 };
    enum { __sScopeClass_1_1 = 15 };
    enum { __eName_1_1 = 16 };
    enum { __sLnNum_1_1 = 18 };
    enum { __eName_1_2 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { PatchReferences, "PatchReferences" },
      { Defined, "Defined" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, PatchReferences, "PatchReferences" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_adt( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
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

refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __tErrorList_1_1 = 2 };
    enum { __tSymTable_1_1 = 3 };
    enum { __eName_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { ST_AddDeclared, "ST_AddDeclared" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::ictVarLeft, 0, __tSymTable_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceSTVar, 0, __tSymTable_1_1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icInt, 0, 0 , 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
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
    // t.ErrorList#1 t.SymTable#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::tvar_left( context[__tSymTable_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, ST_AddDeclared, "ST_AddDeclared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_number( n3, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tSymTable_1_1] );
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

static refalrts::FnResult ST_AddDeclared(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tErrorList_1_1 = 12 };
    enum { __eReferences_1_1 = 13 };
    enum { __eIdents_1_1 = 15 };
    enum { __eName_1_1 = 17 };
    enum { __eNames_B_1_1 = 19 };
    enum { __eNames_E_1_1 = 21 };
    enum { __sScopeClass_1_1 = 23 };
    enum { __sAnyScopeClass_1_1 = 24 };
    enum { __sLnNum_1_1 = 25 };
    enum { __eName_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Declared, "Declared" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sAnyScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
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
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names_B#1 ( & Declared s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.AnyScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sAnyScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_close_adt( n9 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
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
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tErrorList_1_1 = 12 };
    enum { __eReferences_1_1 = 13 };
    enum { __eIdents_1_1 = 15 };
    enum { __eName_1_1 = 17 };
    enum { __eNames_B_1_1 = 19 };
    enum { __eNames_E_1_1 = 21 };
    enum { __sScopeClass_1_1 = 23 };
    enum { __sAnyScopeClass_1_1 = 24 };
    enum { __sLnNum_1_1 = 25 };
    enum { __eName_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sAnyScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
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
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.AnyScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sAnyScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_close_adt( n9 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
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
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __tErrorList_1_1 = 8 };
    enum { __eNames_1_1 = 9 };
    enum { __eReferences_1_1 = 11 };
    enum { __eIdents_1_1 = 13 };
    enum { __eName_1_1 = 15 };
    enum { __sAnyScopeClass_1_1 = 17 };
    enum { __sLnNum_1_1 = 18 };
    enum { __eName_1_2 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { PatchReferences, "PatchReferences" },
      { GN_Entry, "GN_Entry" },
      { Declared, "Declared" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icADTLeft, 3, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sAnyScopeClass_1_1, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 3, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icCopyEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ] s.AnyScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sAnyScopeClass_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, PatchReferences, "PatchReferences" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_adt( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
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

refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eReferences_1_1 = 12 };
    enum { __eIdents_1_1 = 14 };
    enum { __eName_1_1 = 16 };
    enum { __eNames_B_1_1 = 18 };
    enum { __eNames_E_1_1 = 20 };
    enum { __sLnNum_1_1 = 22 };
    enum { __eName_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { Declared, "Declared" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 1, 8},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // [SymTable  e.Names_B#1 ( & Declared & GN_Entry e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( GN_Entry, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, GN_Entry, "GN_Entry" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
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
      refalrts::link_brackets( n0, n10 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
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
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eReferences_1_1 = 12 };
    enum { __eIdents_1_1 = 14 };
    enum { __sLnNum_1_1 = 16 };
    enum { __eName_1_1 = 17 };
    enum { __eName_1_2 = 19 };
    enum { __eNames_B_1_1 = 21 };
    enum { __eNames_E_1_1 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Local, "GN_Local" },
      { Declared, "Declared" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 1, 8},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_2, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // [SymTable  e.Names_B#1 ( & Declared & GN_Local e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Declared, context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( GN_Local, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, Declared, "Declared" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, GN_Local, "GN_Local" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_adt( n12 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n12 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n6, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eName_1_2], context[__eName_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eNames_E_1_1], context[__eNames_E_1_1 + 1] );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_B_1_1], context[__eNames_B_1_1 + 1] );
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
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eReferences_1_1 = 12 };
    enum { __eIdents_1_1 = 14 };
    enum { __eName_1_1 = 16 };
    enum { __eNames_B_1_1 = 18 };
    enum { __eNames_E_1_1 = 20 };
    enum { __sScopeClass_1_1 = 22 };
    enum { __sLnNum_1_1 = 23 };
    enum { __eName_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::iceRepeatRight, __eName_1_2, __eName_1_1, 8},
      {refalrts::icContextSet, 0, __eNames_E_1_1, 10},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, __eNames_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eNames_E_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // [SymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sLnNum_1_1], context[0], context[1] ) )
      break;
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eNames_E_1_1] = context[10];
      context[__eNames_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_close_adt( n9 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
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
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eNames_B_1_1], context[__eNames_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __eNames_1_1 = 8 };
    enum { __eReferences_1_1 = 10 };
    enum { __eIdents_1_1 = 12 };
    enum { __sLnNum_1_1 = 14 };
    enum { __eName_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icsVarLeft, 0, __sLnNum_1_1, 0},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
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
    if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_adt( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLnNum_1_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
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

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eNames_1_1 = 12 };
    enum { __eReferences_1_1 = 14 };
    enum { __eName_1_1 = 16 };
    enum { __eIdents_B_1_1 = 18 };
    enum { __eIdents_E_1_1 = 20 };
    enum { __eName_1_2 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEPrepare, 0, __eIdents_B_1_1, 4},
      {refalrts::icEStart, 0, __eIdents_B_1_1, 4},
      {refalrts::icSave, 0, 10, 4},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::iceRepeatLeft, __eName_1_2, __eName_1_1, 8},
      {refalrts::icEmpty, 0, 0, 8},
      {refalrts::icContextSet, 0, __eIdents_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_B_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_E_1_1, 0},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents_B#1 ( e.Name#1 ) e.Idents_E#1 ) ] e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];
    context[__eIdents_B_1_1] = 0;
    context[__eIdents_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[4];
      context[11] = context[5];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eName_1_2], context[__eName_1_2 + 1], context[__eName_1_1], context[__eName_1_1 + 1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      context[__eIdents_E_1_1] = context[10];
      context[__eIdents_E_1_1 + 1] = context[11];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_adt( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_adt( n8 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n8 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n4, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eIdents_E_1_1], context[__eIdents_E_1_1 + 1] );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eIdents_B_1_1], context[__eIdents_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eIdents_B_1_1], context[__eIdents_B_1_1 + 1], context[4], context[5] ) );
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eNames_1_1 = 8 };
    enum { __eReferences_1_1 = 10 };
    enum { __eIdents_1_1 = 12 };
    enum { __eName_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icContextSet, 0, __eName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ] e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    context[__eName_1_1] = context[0];
    context[__eName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_adt( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, SymTable, "SymTable" ) )
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
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_adt( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
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

static refalrts::FnResult lambda_ST_CheckUnresolved_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sLnNum_2_1 = 4 };
    enum { __eName_2_1 = 5 };
    enum { __tErrorList_2_1 = 7 };
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
      {refalrts::icBracketRight, 0, 2, 0},
      {refalrts::icsVarLeft, 0, __sLnNum_2_1, 2},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::ictVarLeft, 0, __tErrorList_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_2_1, 0},
      {refalrts::icSpliceSTVar, 0, __sLnNum_2_1, 0},
      {refalrts::icChar, 0, 'F', 0},
      {refalrts::icChar, 0, 'u', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'c', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 's', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'o', 0},
      {refalrts::icChar, 0, 't', 0},
      {refalrts::icChar, 0, ' ', 0},
      {refalrts::icChar, 0, 'd', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'f', 0},
      {refalrts::icChar, 0, 'i', 0},
      {refalrts::icChar, 0, 'n', 0},
      {refalrts::icChar, 0, 'e', 0},
      {refalrts::icChar, 0, 'd', 0},
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
    // t.ErrorList#2 ( s.LnNum#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLnNum_2_1], context[2], context[3] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tErrorList_2_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    if( ! refalrts::alloc_char( n12, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 't' ) )
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
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
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
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLnNum_2_1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_2_1] );
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

refalrts::FnResult ST_CheckUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __eNames_1_1 = 8 };
    enum { __eReferences_1_1 = 10 };
    enum { __eIdents_1_1 = 12 };
    enum { __tErrorList_1_1 = 14 };
    enum { __eReferences_1_2 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" },
      { lambda_ST_CheckUnresolved_0, "lambda_ST_CheckUnresolved_0" },
      { Reduce, "Reduce" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTRight, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icContextSet, 0, __eReferences_1_1, 6},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::ictVarLeft, 0, __tErrorList_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 2, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, __tErrorList_1_1, 0},
      {refalrts::icSpliceEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenADT, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, __eReferences_1_1, 0},
      {refalrts::icBracket, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // t.ErrorList#1 [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_right( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    context[__eReferences_1_1] = context[6];
    context[__eReferences_1_1 + 1] = context[7];
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];
    if( ! refalrts::tvar_left( context[__tErrorList_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eReferences_1_2], context[__eReferences_1_2 + 1], context[__eReferences_1_1], context[__eReferences_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Reduce, "Reduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, lambda_ST_CheckUnresolved_0, "lambda_ST_CheckUnresolved_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_adt( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, SymTable, "SymTable" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eReferences_1_2], context[__eReferences_1_2 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eReferences_1_1], context[__eReferences_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__tErrorList_1_1] );
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

static refalrts::FnResult lambda_ST_AllFunctions_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eName_2_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { GN_Entry, "GN_Entry" },
      { Declared, "Declared" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 1, 2},
      {refalrts::icFuncLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( & Declared & GN_Entry e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( Declared, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( GN_Entry, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, GN_Entry, "GN_Entry" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

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
      { GN_Local, "GN_Local" },
      { Declared, "Declared" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 1, 2},
      {refalrts::icFuncLeft, 0, 0, 2},
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
    // ( & Declared & GN_Local e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( Declared, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( GN_Local, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    refalrts::start_sentence();
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sScopeClass_2_1 = 4 };
    enum { __eName_2_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icsVarLeft, 0, __sScopeClass_2_1, 2},
      {refalrts::icContextSet, 0, __eName_2_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, __sScopeClass_2_1, 0},
      {refalrts::icSpliceEVar, 0, __eName_2_1, 0},
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
    // ( & Defined s.ScopeClass#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( Defined, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sScopeClass_2_1], context[2], context[3] ) )
      break;
    context[__eName_2_1] = context[2];
    context[__eName_2_1 + 1] = context[3];

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
    res = refalrts::splice_evar( res, context[__eName_2_1], context[__eName_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sScopeClass_2_1] );
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

refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eNames_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" },
      { Map, "Map" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 2, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eNames_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icBracket, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eNames_1_1, 0},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eNames_1_1] = context[2];
    context[__eNames_1_1 + 1] = context[3];
    // Unused closed variable e.References#1
    // Unused closed variable e.Idents#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eNames_1_1], context[__eNames_1_1 + 1] );
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

refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::start_sentence();
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eIdents_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 0, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icContextSet, 0, __eIdents_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, __eIdents_1_1, 0},
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
    // [SymTable  e.Names#1 ( e.References#1 ) ( e.Idents#1 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Names#1
    // Unused closed variable e.References#1
    context[__eIdents_1_1] = context[4];
    context[__eIdents_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eIdents_1_1], context[__eIdents_1_1 + 1] );
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
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __eName_1_1 = 12 };
    enum { __eNames_B_1_1 = 14 };
    enum { __sScopeClass_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { Defined, "Defined" },
      { SymTable, "SymTable" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icADTLeft, 1, 2, 0},
      {refalrts::icBracketRight, 0, 4, 2},
      {refalrts::icBracketRight, 0, 6, 2},
      {refalrts::icEmpty, 0, 0, 0},
      {refalrts::icEPrepare, 0, __eNames_B_1_1, 2},
      {refalrts::icEStart, 0, __eNames_B_1_1, 2},
      {refalrts::icSave, 0, 10, 2},
      {refalrts::icBracketLeft, 0, 8, 10},
      {refalrts::icFuncLeft, 0, 0, 8},
      {refalrts::icsVarLeft, 0, __sScopeClass_1_1, 8},
      {refalrts::icContextSet, 0, __eName_1_1, 8},
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
    // [SymTable  e.Names_B#1 ( & Defined s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ( e.References#1 ) ( e.Idents#1 ) ]
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.References#1
    // Unused closed variable e.Idents#1
    context[__eNames_B_1_1] = 0;
    context[__eNames_B_1_1 + 1] = 0;
    refalrts::start_e_loop();
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::function_left( Defined, context[8], context[9] ) )
        continue;
      // Unused closed variable e.Names_E#1
      if( ! refalrts::svar_left( context[__sScopeClass_1_1], context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];

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
