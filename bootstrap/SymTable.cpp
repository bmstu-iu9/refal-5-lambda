// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SymTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #GN_Entry
template <typename SREFAL_PARAM_INT>
struct ident_GN_Entry {
  static const char *name() {
    return "GN_Entry";
  }
};

static refalrts::FnResult SymTable(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 10},
    {refalrts::icLinkBrackets, 2, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PatchReferences_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +10, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Name#1/1
    //8: e.Name#1/2
    //10: s.LnNum#2/1
    // ( e.Name#1 ) ( s.LnNum#2 e.Name#1 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 6, 2},
    {refalrts::iceRepeatRight, 8, 6, 4},
    {refalrts::icsVarLeft, 0, 10, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.LnNum#2/1
    //9: e.Name#2/1
    // ( e.Name#1 ) ( s.LnNum#2 e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // Unused closed variable e.Name#1
    {refalrts::icsVarLeft, 0, 8, 4},
    {refalrts::icContextSet, 0, 9, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //6: e.Name#1/1
    //8: e.Name#1/2
    //10: s.LnNum#2/1
    // ( e.Name#1 ) ( s.LnNum#2 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::repeated_evar_right( context[8], context[9], context[6], context[7], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: s.LnNum#2/1
  //9: e.Name#2/1
  // ( e.Name#1 ) ( s.LnNum#2 e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Name#1
  if( ! refalrts::svar_left( context[8], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = context[4];
  context[10] = context[5];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PatchReferences_0, "lambda_PatchReferences_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //15: e.References#1/1
    //17: e.Name#1/1
    // ( e.References#1 ) e.Name#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 15, 2},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 4, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //15: e.References#1/1
  //17: e.Name#1/1
  // ( e.References#1 ) e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[2];
  context[16] = context[3];
  context[17] = context[0];
  context[18] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_PatchReferences_0, "lambda_PatchReferences_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { SymTable, "SymTable" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" already defined", 16},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +71, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //32: t.ErrorList#1/1
    //33: e.References#1/1
    //35: e.Idents#1/1
    //37: e.Externs#1/1
    //39: s.ScopeClass#1/1
    //40: s.LnNum#1/1
    //41: e.Name#1/1
    //43: e.Name#1/2
    //45: e.Names_B#1/1
    //47: e.Names_E#1/1
    //49: s.AnyScopeClass#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.AnyScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    {refalrts::ictVarLeft, 0, 32, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 33, 4},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icsVarLeft, 0, 39, 0},
    {refalrts::icsVarLeft, 0, 40, 0},
    {refalrts::icContextSet, 0, 41, 0},
    {refalrts::icEPrepare, 0, 45, 2},
    {refalrts::icEStart, 0, 45, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatRight, 43, 41, 10},
    {refalrts::icContextSet, 0, 47, 12},
    {refalrts::icsVarLeft, 0, 49, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icString, 0, 1, 16},
    {refalrts::icString, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 31},
    {refalrts::icLinkBrackets, 21, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceSTVar, 0, 0, 49},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 45},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceRange, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceRange, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +65, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: t.ErrorList#1/1
    //29: e.References#1/1
    //31: e.Idents#1/1
    //33: e.Names#1/1
    //35: s.ScopeClass#1/1
    //36: s.LnNum#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    //41: e.Externs_B#1/1
    //43: e.Externs_E#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    {refalrts::ictVarLeft, 0, 28, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 29, 4},
    {refalrts::icContextSet, 0, 31, 6},
    {refalrts::icContextSet, 0, 33, 2},
    {refalrts::icsVarLeft, 0, 35, 0},
    {refalrts::icsVarLeft, 0, 36, 0},
    {refalrts::icContextSet, 0, 37, 0},
    {refalrts::icEPrepare, 0, 41, 8},
    {refalrts::icEStart, 0, 41, 8},
    {refalrts::icSave, 0, 12, 8},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatLeft, 39, 37, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icContextSet, 0, 43, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 27},
    {refalrts::icLinkBrackets, 14, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: t.ErrorList#1/1
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Externs#1/1
    //31: e.Names#1/1
    //33: s.ScopeClass#1/1
    //34: s.LnNum#1/1
    //35: e.Name#1/1
    //37: e.Name#1/2
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icContextSet, 0, 29, 8},
    {refalrts::icContextSet, 0, 31, 2},
    {refalrts::icsVarLeft, 0, 33, 0},
    {refalrts::icsVarLeft, 0, 34, 0},
    {refalrts::icContextSet, 0, 35, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 37, 35, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 23},
    {refalrts::icLinkBrackets, 10, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icSpliceSTVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //32: t.ErrorList#1/1
    //33: e.References#1/1
    //35: e.Idents#1/1
    //37: e.Externs#1/1
    //39: s.ScopeClass#1/1
    //40: s.LnNum#1/1
    //41: e.Name#1/1
    //43: e.Name#1/2
    //45: e.Names_B#1/1
    //47: e.Names_E#1/1
    //49: s.AnyScopeClass#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.AnyScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[32], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[33] = context[4];
    context[34] = context[5];
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[9];
    if( ! refalrts::svar_left( context[39], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[40], context[0], context[1] ) )
      continue;
    context[41] = context[0];
    context[42] = context[1];
    context[45] = 0;
    context[46] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[43], context[44], context[41], context[42], context[10], context[11] ) )
        continue;
      context[47] = context[12];
      context[48] = context[13];
      if( ! refalrts::svar_left( context[49], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[16], context[17], "Function ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[18], context[19], " already defined", 16 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[21], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      refalrts::link_brackets( context[29], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_stvar( res, context[49] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      refalrts::link_brackets( context[27], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[45], context[46], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //28: t.ErrorList#1/1
    //29: e.References#1/1
    //31: e.Idents#1/1
    //33: e.Names#1/1
    //35: s.ScopeClass#1/1
    //36: s.LnNum#1/1
    //37: e.Name#1/1
    //39: e.Name#1/2
    //41: e.Externs_B#1/1
    //43: e.Externs_E#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
    if( ! refalrts::tvar_left( context[28], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[29] = context[4];
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[7];
    context[33] = context[2];
    context[34] = context[3];
    if( ! refalrts::svar_left( context[35], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[36], context[0], context[1] ) )
      continue;
    context[37] = context[0];
    context[38] = context[1];
    context[41] = 0;
    context[42] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[8];
      context[13] = context[9];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[39], context[40], context[37], context[38], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      context[43] = context[12];
      context[44] = context[13];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], PatchReferences, "PatchReferences" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::push_stack( context[20] );
      refalrts::push_stack( context[16] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_stvar( res, context[28] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[41], context[42], context[8], context[9] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //24: t.ErrorList#1/1
  //25: e.References#1/1
  //27: e.Idents#1/1
  //29: e.Externs#1/1
  //31: e.Names#1/1
  //33: s.ScopeClass#1/1
  //34: s.LnNum#1/1
  //35: e.Name#1/1
  //37: e.Name#1/2
  // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] s.ScopeClass#1 s.LnNum#1 e.Name#1
  if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = context[4];
  context[26] = context[5];
  context[27] = context[6];
  context[28] = context[7];
  context[29] = context[8];
  context[30] = context[9];
  context[31] = context[2];
  context[32] = context[3];
  if( ! refalrts::svar_left( context[33], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[34], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[35] = context[0];
  context[36] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[37], context[38], context[35], context[36]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], PatchReferences, "PatchReferences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_stvar( res, context[33] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +53, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: t.ErrorList#1/1
    //26: e.References#1/1
    //28: e.Idents#1/1
    //30: e.Names#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Externs_B#1/1
    //38: e.Externs_E#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] e.Name#1
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icContextSet, 0, 28, 6},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icEPrepare, 0, 36, 8},
    {refalrts::icEStart, 0, 36, 8},
    {refalrts::icSave, 0, 12, 8},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatLeft, 34, 32, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icContextSet, 0, 38, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: t.ErrorList#1/1
    //26: e.References#1/1
    //28: e.Idents#1/1
    //30: e.Externs#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Names_B#1/1
    //38: e.Names_E#1/1
    //40: s.ScopeClass#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] e.Name#1
    {refalrts::ictVarLeft, 0, 25, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icContextSet, 0, 28, 6},
    {refalrts::icContextSet, 0, 30, 8},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icEPrepare, 0, 36, 2},
    {refalrts::icEStart, 0, 36, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatRight, 34, 32, 10},
    {refalrts::icContextSet, 0, 38, 12},
    {refalrts::icsVarLeft, 0, 40, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //24: t.ErrorList#1/1
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Externs#1/1
    //31: e.Names#1/1
    //33: e.Name#1/1
    //35: e.Name#1/2
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
    {refalrts::ictVarLeft, 0, 24, 0},
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icContextSet, 0, 29, 8},
    {refalrts::icContextSet, 0, 31, 2},
    {refalrts::icContextSet, 0, 33, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopyEVar, 35, 33, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 23},
    {refalrts::icLinkBrackets, 10, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icLinkBrackets, 19, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: t.ErrorList#1/1
    //26: e.References#1/1
    //28: e.Idents#1/1
    //30: e.Names#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Externs_B#1/1
    //38: e.Externs_E#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] e.Name#1
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[26] = context[4];
    context[27] = context[5];
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[2];
    context[31] = context[3];
    context[32] = context[0];
    context[33] = context[1];
    context[36] = 0;
    context[37] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[8];
      context[13] = context[9];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[34], context[35], context[32], context[33], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      context[38] = context[12];
      context[39] = context[13];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::link_brackets( context[20], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_stvar( res, context[25] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[36], context[37], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: t.ErrorList#1/1
    //26: e.References#1/1
    //28: e.Idents#1/1
    //30: e.Externs#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Names_B#1/1
    //38: e.Names_E#1/1
    //40: s.ScopeClass#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] e.Name#1
    if( ! refalrts::tvar_left( context[25], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[26] = context[4];
    context[27] = context[5];
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[8];
    context[31] = context[9];
    context[32] = context[0];
    context[33] = context[1];
    context[36] = 0;
    context[37] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[34], context[35], context[32], context[33], context[10], context[11] ) )
        continue;
      context[38] = context[12];
      context[39] = context[13];
      if( ! refalrts::svar_left( context[40], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_stvar( res, context[25] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[36], context[37], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //24: t.ErrorList#1/1
  //25: e.References#1/1
  //27: e.Idents#1/1
  //29: e.Externs#1/1
  //31: e.Names#1/1
  //33: e.Name#1/1
  //35: e.Name#1/2
  // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
  if( ! refalrts::tvar_left( context[24], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[25] = context[4];
  context[26] = context[5];
  context[27] = context[6];
  context[28] = context[7];
  context[29] = context[8];
  context[30] = context[9];
  context[31] = context[2];
  context[32] = context[3];
  context[33] = context[0];
  context[34] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_evar(context[35], context[36], context[33], context[34]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], PatchReferences, "PatchReferences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::link_brackets( context[19], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[24] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +52, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Names#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Externs_B#1/1
    //38: e.Externs_E#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] s.LnNum#1 e.Name#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icsVarLeft, 0, 31, 0},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icEPrepare, 0, 36, 8},
    {refalrts::icEStart, 0, 36, 8},
    {refalrts::icSave, 0, 12, 8},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatLeft, 34, 32, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icContextSet, 0, 38, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icLinkBrackets, 20, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +54, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Externs#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Names_B#1/1
    //38: e.Names_E#1/1
    //40: s.ScopeClass#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.LnNum#1 e.Name#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icContextSet, 0, 29, 8},
    {refalrts::icsVarLeft, 0, 31, 0},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icEPrepare, 0, 36, 2},
    {refalrts::icEStart, 0, 36, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatRight, 34, 32, 10},
    {refalrts::icContextSet, 0, 38, 12},
    {refalrts::icsVarLeft, 0, 40, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.References#1/1
    //23: e.Idents#1/1
    //25: e.Externs#1/1
    //27: e.Names#1/1
    //29: s.LnNum#1/1
    //30: e.Name#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] s.LnNum#1 e.Name#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icContextSet, 0, 23, 6},
    {refalrts::icContextSet, 0, 25, 8},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icsVarLeft, 0, 29, 0},
    {refalrts::icContextSet, 0, 30, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 12, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 13, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Names#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Externs_B#1/1
    //38: e.Externs_E#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs_B#1 ( e.Name#1 ) e.Externs_E#1 ) e.Names#1 ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[7];
    context[29] = context[2];
    context[30] = context[3];
    if( ! refalrts::svar_left( context[31], context[0], context[1] ) )
      continue;
    context[32] = context[0];
    context[33] = context[1];
    context[36] = 0;
    context[37] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[8];
      context[13] = context[9];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[34], context[35], context[32], context[33], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      context[38] = context[12];
      context[39] = context[13];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::link_brackets( context[20], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[36], context[37], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.References#1/1
    //27: e.Idents#1/1
    //29: e.Externs#1/1
    //31: s.LnNum#1/1
    //32: e.Name#1/1
    //34: e.Name#1/2
    //36: e.Names_B#1/1
    //38: e.Names_E#1/1
    //40: s.ScopeClass#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ] s.LnNum#1 e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[7];
    context[29] = context[8];
    context[30] = context[9];
    if( ! refalrts::svar_left( context[31], context[0], context[1] ) )
      continue;
    context[32] = context[0];
    context[33] = context[1];
    context[36] = 0;
    context[37] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[34], context[35], context[32], context[33], context[10], context[11] ) )
        continue;
      context[38] = context[12];
      context[39] = context[13];
      if( ! refalrts::svar_left( context[40], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[36], context[37], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //21: e.References#1/1
  //23: e.Idents#1/1
  //25: e.Externs#1/1
  //27: e.Names#1/1
  //29: s.LnNum#1/1
  //30: e.Name#1/1
  // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] s.LnNum#1 e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[4];
  context[22] = context[5];
  context[23] = context[6];
  context[24] = context[7];
  context[25] = context[8];
  context[26] = context[9];
  context[27] = context[2];
  context[28] = context[3];
  if( ! refalrts::svar_left( context[29], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = context[0];
  context[31] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_stvar( res, context[29] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +51, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //25: e.References#1/1
    //27: e.Externs#1/1
    //29: e.Names#1/1
    //31: e.Name#1/1
    //33: e.Name#1/2
    //35: e.Idents_B#1/1
    //37: e.Idents_E#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents_B#1 ( e.Name#1 ) e.Idents_E#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 8},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 31, 0},
    {refalrts::icEPrepare, 0, 35, 6},
    {refalrts::icEStart, 0, 35, 6},
    {refalrts::icSave, 0, 12, 6},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::iceRepeatLeft, 33, 31, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icContextSet, 0, 37, 12},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //21: e.References#1/1
    //23: e.Idents#1/1
    //25: e.Externs#1/1
    //27: e.Names#1/1
    //29: e.Name#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 21, 4},
    {refalrts::icContextSet, 0, 23, 6},
    {refalrts::icContextSet, 0, 25, 8},
    {refalrts::icContextSet, 0, 27, 2},
    {refalrts::icContextSet, 0, 29, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //25: e.References#1/1
    //27: e.Externs#1/1
    //29: e.Names#1/1
    //31: e.Name#1/1
    //33: e.Name#1/2
    //35: e.Idents_B#1/1
    //37: e.Idents_E#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents_B#1 ( e.Name#1 ) e.Idents_E#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[8];
    context[28] = context[9];
    context[29] = context[2];
    context[30] = context[3];
    context[31] = context[0];
    context[32] = context[1];
    context[35] = 0;
    context[36] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[6];
      context[13] = context[7];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[33], context[34], context[31], context[32], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      context[37] = context[12];
      context[38] = context[13];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[18], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[19], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[35], context[36], context[6], context[7] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //21: e.References#1/1
  //23: e.Idents#1/1
  //25: e.Externs#1/1
  //27: e.Names#1/1
  //29: e.Name#1/1
  // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ] e.Name#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = context[4];
  context[22] = context[5];
  context[23] = context[6];
  context[24] = context[7];
  context[25] = context[8];
  context[26] = context[9];
  context[27] = context[2];
  context[28] = context[3];
  context[29] = context[0];
  context[30] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[14], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AddUnresolved_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" is not defined", 15},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //11: s.LnNum#2/1
    //12: e.Name#2/1
    //14: t.ErrorList#2/1
    // t.ErrorList#2 ( s.LnNum#2 e.Name#2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 11, 2},
    {refalrts::icContextSet, 0, 12, 2},
    {refalrts::ictVarLeft, 0, 14, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icString, 0, 1, 6},
    {refalrts::icString, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 10},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //11: s.LnNum#2/1
  //12: e.Name#2/1
  //14: t.ErrorList#2/1
  // t.ErrorList#2 ( s.LnNum#2 e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::tvar_left( context[14], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[6], context[7], "Function ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], " is not defined", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[4] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ST_AddUnresolved_0, "lambda_ST_AddUnresolved_0" },
    { Reduce, "Reduce" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.References#1/1
    //16: t.ErrorList#1/1
    // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
    {refalrts::icADTRight, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 14, 4},
    // Unused closed variable e.Idents#1
    // Unused closed variable e.Externs#1
    // Unused closed variable e.Names#1
    {refalrts::ictVarLeft, 0, 16, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //14: e.References#1/1
  //16: t.ErrorList#1/1
  // t.ErrorList#1 [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_right( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = context[4];
  context[15] = context[5];
  // Unused closed variable e.Idents#1
  // Unused closed variable e.Externs#1
  // Unused closed variable e.Names#1
  if( ! refalrts::tvar_left( context[16], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_ST_AddUnresolved_0, "lambda_ST_AddUnresolved_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AllFunctions_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //7: e.Name#2/1
    // ( e.Name#2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icContextSet, 0, 7, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //7: e.Name#2/1
  // ( e.Name#2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = context[2];
  context[8] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_GN_Entry<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" },
    { Map, "Map" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Externs#1/1
    //16: e.Names#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
    {refalrts::icADTLeft, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // Unused closed variable e.References#1
    // Unused closed variable e.Idents#1
    {refalrts::icContextSet, 0, 14, 8},
    {refalrts::icContextSet, 0, 16, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //14: e.Externs#1/1
  //16: e.Names#1/1
  // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.References#1
  // Unused closed variable e.Idents#1
  context[14] = context[8];
  context[15] = context[9];
  context[16] = context[2];
  context[17] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //10: e.Idents#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // Unused closed variable e.References#1
    {refalrts::icContextSet, 0, 10, 6},
    // Unused closed variable e.Externs#1
    // Unused closed variable e.Names#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //10: e.Idents#1/1
  // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.References#1
  context[10] = context[6];
  context[11] = context[7];
  // Unused closed variable e.Externs#1
  // Unused closed variable e.Names#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: e.Names_B#1/1
    //16: s.ScopeClass#1/1
    //17: e.Name#1/1
    // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // Unused closed variable e.References#1
    // Unused closed variable e.Idents#1
    // Unused closed variable e.Externs#1
    {refalrts::icEPrepare, 0, 14, 2},
    {refalrts::icEStart, 0, 14, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 10, 12},
    // Unused closed variable e.Names_E#1
    {refalrts::icsVarLeft, 0, 16, 10},
    {refalrts::icContextSet, 0, 17, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icFail, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //14: e.Names_B#1/1
  //16: s.ScopeClass#1/1
  //17: e.Name#1/1
  // [SymTable  ( e.References#1 ) ( e.Idents#1 ) ( e.Externs#1 ) e.Names_B#1 ( s.ScopeClass#1 e.Name#1 ) e.Names_E#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.References#1
  // Unused closed variable e.Idents#1
  // Unused closed variable e.Externs#1
  context[14] = 0;
  context[15] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[2];
    context[13] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
      continue;
    // Unused closed variable e.Names_E#1
    if( ! refalrts::svar_left( context[16], context[10], context[11] ) )
      continue;
    context[17] = context[10];
    context[18] = context[11];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[14], context[15], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}


//End of file
