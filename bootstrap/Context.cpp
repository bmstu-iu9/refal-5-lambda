// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Context(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlreadyBounded
template <typename SREFAL_PARAM_INT>
struct ident_AlreadyBounded {
  static const char *name() {
    return "AlreadyBounded";
  }
};

// identifier #ExistVariable
template <typename SREFAL_PARAM_INT>
struct ident_ExistVariable {
  static const char *name() {
    return "ExistVariable";
  }
};

// identifier #FreeVarsFunc
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsFunc {
  static const char *name() {
    return "FreeVarsFunc";
  }
};

// identifier #FreeVarsSent
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsSent {
  static const char *name() {
    return "FreeVarsSent";
  }
};

// identifier #InvalidMode
template <typename SREFAL_PARAM_INT>
struct ident_InvalidMode {
  static const char *name() {
    return "InvalidMode";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult Context(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
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
    {refalrts::icInt, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
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
  if( ! refalrts::alloc_name( context[3], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[4], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context  0 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icNumLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
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
  // [Context  0 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::number_left( 0UL, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" },
    { ShiftVariable, "ShiftVariable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name,
    & ident_InvalidMode<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //19: s.StackDepth#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Variables_B#1/1
    //28: e.Variables_E#1/1
    //30: s.VarDepth#1/1
    //31: s.VarDepth#1/2
    //32: s.VarDepth#1/3
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icContextSet, 0, 22, 0},
    {refalrts::icEPrepare, 0, 26, 2},
    {refalrts::icEStart, 0, 26, 2},
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icsRepeatLeft, 21, 20, 4},
    {refalrts::iceRepeatLeft, 24, 22, 4},
    {refalrts::icContextSet, 0, 28, 6},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 31, 30, 0},
    {refalrts::icCopySTVar, 32, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 17},
    {refalrts::icIdent, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.StackDepth#1/1
    //15: s.NewMode#1/1
    //16: e.Index#1/1
    //18: e.Index#1/2
    //20: e.Variables_B#1/1
    //22: e.Variables_E#1/1
    //24: s.OldMode#1/1
    //25: s.VarDepth#1/1
    //26: s.OldMode#1/2
    //27: s.VarDepth#1/2
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icsVarLeft, 0, 15, 0},
    {refalrts::icContextSet, 0, 16, 0},
    {refalrts::icEPrepare, 0, 20, 2},
    {refalrts::icEStart, 0, 20, 2},
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icContextSet, 0, 22, 6},
    {refalrts::icsVarLeft, 0, 24, 4},
    {refalrts::iceRepeatLeft, 18, 16, 4},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 26, 24, 0},
    {refalrts::icCopySTVar, 27, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: s.StackDepth#1/1
    //11: e.Variables#1/1
    //13: s.Mode#1/1
    //14: e.Index#1/1
    //16: s.StackDepth#1/2
    //17: s.StackDepth#1/3
    // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icContextSet, 0, 11, 2},
    {refalrts::icsVarLeft, 0, 13, 0},
    {refalrts::icContextSet, 0, 14, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 16, 10, 0},
    {refalrts::icCopySTVar, 17, 16, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //19: s.StackDepth#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Variables_B#1/1
    //28: e.Variables_E#1/1
    //30: s.VarDepth#1/1
    //31: s.VarDepth#1/2
    //32: s.VarDepth#1/3
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
      continue;
    context[22] = context[0];
    context[23] = context[1];
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[21], context[20], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[24], context[25], context[22], context[23], context[4], context[5] ) )
        continue;
      context[28] = context[6];
      context[29] = context[7];
      if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[31], context[30]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[32], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[11], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_Success<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[8], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::link_brackets( context[15], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::link_brackets( context[12], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //14: s.StackDepth#1/1
    //15: s.NewMode#1/1
    //16: e.Index#1/1
    //18: e.Index#1/2
    //20: e.Variables_B#1/1
    //22: e.Variables_E#1/1
    //24: s.OldMode#1/1
    //25: s.VarDepth#1/1
    //26: s.OldMode#1/2
    //27: s.VarDepth#1/2
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[0], context[1] ) )
      continue;
    context[16] = context[0];
    context[17] = context[1];
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      context[22] = context[6];
      context[23] = context[7];
      if( ! refalrts::svar_left( context[24], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[18], context[19], context[16], context[17], context[4], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[26], context[24]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[27], context[25]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[13], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_stvar( res, context[27] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::link_brackets( context[8], context[12] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::link_brackets( context[10], context[11] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_stvar( res, context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_stvar( res, context[14] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[20], context[21], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //10: s.StackDepth#1/1
  //11: e.Variables#1/1
  //13: s.Mode#1/1
  //14: e.Index#1/1
  //16: s.StackDepth#1/2
  //17: s.StackDepth#1/3
  // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::svar_left( context[13], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = context[0];
  context[15] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[16], context[10]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[16]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_adt( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[17] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ShiftVariable, "ShiftVariable" },
    { ShiftVariable_AddToFree, "ShiftVariable_AddToFree" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +81, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //28: s.Mode#1/1
    //29: s.VarDepth#1/1
    //30: e.Index#1/1
    //32: e.Variables_B#1/1
    //34: e.Free#1/1
    //36: e.FreeFunc#1/1
    //38: e.Variables_E#1/1
    //40: s.Mode#1/2
    //41: s.Mode#1/3
    //42: e.Index#1/2
    //44: e.Index#1/3
    //46: s.VarDepth#1/2
    //47: s.VarDepth#1/3
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( # FreeVarsSent e.Free#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Variables_E#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 28, 2},
    {refalrts::icsVarRight, 0, 29, 2},
    {refalrts::icContextSet, 0, 30, 2},
    {refalrts::icEPrepare, 0, 32, 0},
    {refalrts::icEStart, 0, 32, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 4, 8},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icContextSet, 0, 34, 4},
    {refalrts::icContextSet, 0, 36, 6},
    {refalrts::icContextSet, 0, 38, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 40, 28, 0},
    {refalrts::icCopySTVar, 41, 40, 0},
    {refalrts::icCopyEVar, 42, 30, 0},
    {refalrts::icCopyEVar, 44, 42, 0},
    {refalrts::icCopySTVar, 46, 29, 0},
    {refalrts::icCopySTVar, 47, 46, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 1, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 47},
    {refalrts::icSpliceEVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 41},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 12, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 46},
    {refalrts::icSpliceEVar, 0, 0, 42},
    {refalrts::icSpliceSTVar, 0, 0, 40},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //4: e.Variables#1/1
    //6: s.Mode#1/1
    //7: s.VarDepth#1/1
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 4, 0},
    {refalrts::icsVarLeft, 0, 6, 2},
    {refalrts::icsVarRight, 0, 7, 2},
    // Unused closed variable e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 4},
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
    //28: s.Mode#1/1
    //29: s.VarDepth#1/1
    //30: e.Index#1/1
    //32: e.Variables_B#1/1
    //34: e.Free#1/1
    //36: e.FreeFunc#1/1
    //38: e.Variables_E#1/1
    //40: s.Mode#1/2
    //41: s.Mode#1/3
    //42: e.Index#1/2
    //44: e.Index#1/3
    //46: s.VarDepth#1/2
    //47: s.VarDepth#1/3
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( # FreeVarsSent e.Free#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Variables_E#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[29], context[2], context[3] ) )
      continue;
    context[30] = context[2];
    context[31] = context[3];
    context[32] = 0;
    context[33] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[4], context[5] ) )
        continue;
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[6], context[7] ) )
        continue;
      context[34] = context[4];
      context[35] = context[5];
      context[36] = context[6];
      context[37] = context[7];
      context[38] = context[8];
      context[39] = context[9];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[40], context[28]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[41], context[40]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[42], context[43], context[30], context[31]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[44], context[45], context[42], context[43]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[46], context[29]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[47], context[46]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[13], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], ShiftVariable_AddToFree, "ShiftVariable_AddToFree" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[27] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[47] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_stvar( res, context[41] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[20], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::link_brackets( context[12], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::push_stack( context[18] );
      refalrts::push_stack( context[14] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[46] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      refalrts::link_brackets( context[10], context[11] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_stvar( res, context[29] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[32], context[33], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //4: e.Variables#1/1
  //6: s.Mode#1/1
  //7: s.VarDepth#1/1
  // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = context[0];
  context[5] = context[1];
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Index#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[4], context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +26, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //10: s.Mode#1/1
    //11: s.Mode#1/2
    //12: s.VarDepth#1/1
    //13: s.VarDepth#1/2
    //14: e.Index#1/1
    //16: e.Index#1/2
    //18: e.Variables_B#1/1
    //20: e.Variables_E#1/1
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 10, 2},
    {refalrts::icsVarRight, 0, 12, 2},
    {refalrts::icContextSet, 0, 14, 2},
    {refalrts::icEPrepare, 0, 18, 0},
    {refalrts::icEStart, 0, 18, 0},
    {refalrts::icSave, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icsRepeatLeft, 11, 10, 4},
    {refalrts::iceRepeatLeft, 16, 14, 4},
    {refalrts::icsRepeatLeft, 13, 12, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icContextSet, 0, 20, 6},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //6: e.Variables#1/1
    //8: s.Mode#1/1
    //9: s.VarDepth#1/1
    //10: e.Index#1/1
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icContextSet, 0, 6, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icsVarRight, 0, 9, 2},
    {refalrts::icContextSet, 0, 10, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icLinkBrackets, 4, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceEVar, 0, 0, 6},
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
    //10: s.Mode#1/1
    //11: s.Mode#1/2
    //12: s.VarDepth#1/1
    //13: s.VarDepth#1/2
    //14: e.Index#1/1
    //16: e.Index#1/2
    //18: e.Variables_B#1/1
    //20: e.Variables_E#1/1
    // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[2], context[3] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[11], context[10], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[16], context[17], context[14], context[15], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[13], context[12], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      context[20] = context[6];
      context[21] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[9] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::link_brackets( context[8], context[9] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[18], context[19], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //6: e.Variables#1/1
  //8: s.Mode#1/1
  //9: s.VarDepth#1/1
  //10: e.Index#1/1
  // ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = context[0];
  context[7] = context[1];
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = context[2];
  context[11] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Cntx_AddNewVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name,
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_AlreadyBounded<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +61, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: s.StackDepth#1/1
    //27: s.Mode#1/1
    //28: s.Mode#1/2
    //29: e.Index#1/1
    //31: e.Index#1/2
    //33: e.FreeSent#1/1
    //35: e.FreeFunc#1/1
    //37: e.Stack#1/1
    //39: e.LocalVars_B#2/1
    //41: e.LocalVars_E#2/1
    //43: s.Depth#2/1
    //44: s.Depth#2/2
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.Mode#1 e.Index#1 s.Depth#2 ) e.LocalVars_E#2
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icsVarLeft, 0, 27, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 29, 2},
    {refalrts::icContextSet, 0, 33, 4},
    {refalrts::icContextSet, 0, 35, 6},
    {refalrts::icContextSet, 0, 37, 8},
    {refalrts::icEPrepare, 0, 39, 0},
    {refalrts::icEStart, 0, 39, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::icsRepeatLeft, 28, 27, 10},
    {refalrts::iceRepeatLeft, 31, 29, 10},
    {refalrts::icContextSet, 0, 41, 12},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 2, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icIdent, 0, 4, 25},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 37},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +63, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //26: s.StackDepth#1/1
    //27: s.Mode#1/1
    //28: e.Index#1/1
    //30: e.Index#1/2
    //32: e.FreeSent#1/1
    //34: e.FreeFunc#1/1
    //36: e.Stack#1/1
    //38: e.LocalVars_B#2/1
    //40: e.LocalVars_E#2/1
    //42: s.OldMode#2/1
    //43: s.VarDepth#2/1
    //44: s.OldMode#2/2
    //45: s.VarDepth#2/2
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.OldMode#2 e.Index#1 s.VarDepth#2 ) e.LocalVars_E#2
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icsVarLeft, 0, 27, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 28, 2},
    {refalrts::icContextSet, 0, 32, 4},
    {refalrts::icContextSet, 0, 34, 6},
    {refalrts::icContextSet, 0, 36, 8},
    {refalrts::icEPrepare, 0, 38, 0},
    {refalrts::icEStart, 0, 38, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::icContextSet, 0, 40, 12},
    {refalrts::icsVarLeft, 0, 42, 10},
    {refalrts::iceRepeatLeft, 30, 28, 10},
    {refalrts::icsVarLeft, 0, 43, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 44, 42, 0},
    {refalrts::icCopySTVar, 45, 43, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 14},
    {refalrts::icFunc, 0, 0, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 2, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icIdent, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icIdent, 0, 3, 25},
    {refalrts::icSpliceSTVar, 0, 0, 44},
    {refalrts::icSpliceSTVar, 0, 0, 45},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 14, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icLinkBrackets, 21, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 18, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 40},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 43},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceSTVar, 0, 0, 42},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //22: s.StackDepth#1/1
    //23: s.Mode#1/1
    //24: e.Index#1/1
    //26: e.FreeSent#1/1
    //28: e.FreeFunc#1/1
    //30: e.Stack#1/1
    //32: e.LocalVars#2/1
    //34: s.StackDepth#1/2
    //35: s.StackDepth#1/3
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars#2
    {refalrts::icsVarLeft, 0, 22, 0},
    {refalrts::icsVarLeft, 0, 23, 0},
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icContextSet, 0, 24, 2},
    {refalrts::icContextSet, 0, 26, 4},
    {refalrts::icContextSet, 0, 28, 6},
    {refalrts::icContextSet, 0, 30, 8},
    {refalrts::icContextSet, 0, 32, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 34, 22, 0},
    {refalrts::icCopySTVar, 35, 34, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icIdent, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 1, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icIdent, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 30},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 22},
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
    //26: s.StackDepth#1/1
    //27: s.Mode#1/1
    //28: s.Mode#1/2
    //29: e.Index#1/1
    //31: e.Index#1/2
    //33: e.FreeSent#1/1
    //35: e.FreeFunc#1/1
    //37: e.Stack#1/1
    //39: e.LocalVars_B#2/1
    //41: e.LocalVars_E#2/1
    //43: s.Depth#2/1
    //44: s.Depth#2/2
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.Mode#1 e.Index#1 s.Depth#2 ) e.LocalVars_E#2
    if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[29] = context[2];
    context[30] = context[3];
    context[33] = context[4];
    context[34] = context[5];
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[9];
    context[39] = 0;
    context[40] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[28], context[27], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[31], context[32], context[29], context[30], context[10], context[11] ) )
        continue;
      context[41] = context[12];
      context[42] = context[13];
      if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[43]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[19], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_AlreadyBounded<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::link_brackets( context[21], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[18], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[43] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_stvar( res, context[27] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[39], context[40], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //26: s.StackDepth#1/1
    //27: s.Mode#1/1
    //28: e.Index#1/1
    //30: e.Index#1/2
    //32: e.FreeSent#1/1
    //34: e.FreeFunc#1/1
    //36: e.Stack#1/1
    //38: e.LocalVars_B#2/1
    //40: e.LocalVars_E#2/1
    //42: s.OldMode#2/1
    //43: s.VarDepth#2/1
    //44: s.OldMode#2/2
    //45: s.VarDepth#2/2
    // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars_B#2 ( s.OldMode#2 e.Index#1 s.VarDepth#2 ) e.LocalVars_E#2
    if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[0], context[1] ) )
      continue;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[28] = context[2];
    context[29] = context[3];
    context[32] = context[4];
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[7];
    context[36] = context[8];
    context[37] = context[9];
    context[38] = 0;
    context[39] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      context[40] = context[12];
      context[41] = context[13];
      if( ! refalrts::svar_left( context[42], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[30], context[31], context[28], context[29], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[43], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[44], context[42]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[45], context[43]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[15], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[19], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[22], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[25], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[44] );
      res = refalrts::splice_stvar( res, context[45] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[14], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::link_brackets( context[21], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[18], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[43] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_stvar( res, context[42] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[38], context[39], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //22: s.StackDepth#1/1
  //23: s.Mode#1/1
  //24: e.Index#1/1
  //26: e.FreeSent#1/1
  //28: e.FreeFunc#1/1
  //30: e.Stack#1/1
  //32: e.LocalVars#2/1
  //34: s.StackDepth#1/2
  //35: s.StackDepth#1/3
  // s.StackDepth#1 s.Mode#1 ( e.Index#1 ) ( e.FreeSent#1 ) ( e.FreeFunc#1 ) ( e.Stack#1 ) e.LocalVars#2
  if( ! refalrts::svar_left( context[22], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = context[2];
  context[25] = context[3];
  context[26] = context[4];
  context[27] = context[5];
  context[28] = context[6];
  context[29] = context[7];
  context[30] = context[8];
  context[31] = context[9];
  context[32] = context[0];
  context[33] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if (! refalrts::copy_stvar(context[34], context[22]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[35], context[34]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[15], & ident_FreeVarsSent<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[35] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::link_brackets( context[17], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[14], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[34] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_stvar( res, context[23] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[22] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //25: s.StackDepth#1/1
    //26: s.Mode#1/1
    //27: e.Index#1/1
    //29: e.LocalVars#1/1
    //31: e.FreeSent#1/1
    //33: e.FreeFunc#1/1
    //35: e.Stack#1/1
    // [Context  s.StackDepth#1 e.LocalVars#1 ( # FreeVarsSent e.FreeSent#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Stack#1 ] s.Mode#1 e.Index#1
    {refalrts::icADTLeft, 3, 2, 0},
    {refalrts::icsVarLeft, 0, 25, 2},
    {refalrts::icsVarLeft, 0, 26, 0},
    {refalrts::icContextSet, 0, 27, 0},
    {refalrts::icEPrepare, 0, 29, 2},
    {refalrts::icEStart, 0, 29, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 4, 8},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icContextSet, 0, 31, 4},
    {refalrts::icContextSet, 0, 33, 6},
    {refalrts::icContextSet, 0, 35, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 2, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 1, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  //25: s.StackDepth#1/1
  //26: s.Mode#1/1
  //27: e.Index#1/1
  //29: e.LocalVars#1/1
  //31: e.FreeSent#1/1
  //33: e.FreeFunc#1/1
  //35: e.Stack#1/1
  // [Context  s.StackDepth#1 e.LocalVars#1 ( # FreeVarsSent e.FreeSent#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Stack#1 ] s.Mode#1 e.Index#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[27] = context[0];
  context[28] = context[1];
  context[29] = 0;
  context[30] = 0;
  refalrts::start_e_loop();
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[6], context[7] ) )
      continue;
    context[31] = context[4];
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[7];
    context[35] = context[8];
    context[36] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
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
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[10] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[12] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[15], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[26] );
    res = refalrts::splice_stvar( res, context[25] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[29], context[30], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" },
    { ShiftVariable, "ShiftVariable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_ExistVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +55, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //19: s.StackDepth#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Variables_B#1/1
    //28: e.Variables_E#1/1
    //30: s.VarDepth#1/1
    //31: s.VarDepth#1/2
    //32: s.VarDepth#1/3
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 19, 2},
    {refalrts::icsVarLeft, 0, 20, 0},
    {refalrts::icContextSet, 0, 22, 0},
    {refalrts::icEPrepare, 0, 26, 2},
    {refalrts::icEStart, 0, 26, 2},
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icsRepeatLeft, 21, 20, 4},
    {refalrts::iceRepeatLeft, 24, 22, 4},
    {refalrts::icContextSet, 0, 28, 6},
    {refalrts::icsVarLeft, 0, 30, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 31, 30, 0},
    {refalrts::icCopySTVar, 32, 31, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 17},
    {refalrts::icIdent, 0, 2, 18},
    {refalrts::icSpliceSTVar, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +40, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //15: s.StackDepth#1/1
    //16: s.NewMode#1/1
    //17: e.Index#1/1
    //19: e.Index#1/2
    //21: e.Variables_B#1/1
    //23: e.Variables_E#1/1
    //25: s.OldMode#1/1
    //26: s.VarDepth#1/1
    //27: s.OldMode#1/2
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 15, 2},
    {refalrts::icsVarLeft, 0, 16, 0},
    {refalrts::icContextSet, 0, 17, 0},
    {refalrts::icEPrepare, 0, 21, 2},
    {refalrts::icEStart, 0, 21, 2},
    {refalrts::icSave, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 4, 6},
    {refalrts::icContextSet, 0, 23, 6},
    {refalrts::icsVarLeft, 0, 25, 4},
    {refalrts::iceRepeatLeft, 19, 17, 4},
    {refalrts::icsVarLeft, 0, 26, 4},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icCopySTVar, 27, 25, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icInt, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 8, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 23},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //8: s.StackDepth#1/1
    //9: e.Variables#1/1
    //11: s.Mode#1/1
    // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 8, 2},
    {refalrts::icContextSet, 0, 9, 2},
    {refalrts::icsVarLeft, 0, 11, 0},
    // Unused closed variable e.Index#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 4},
    {refalrts::icFunc, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 6},
    {refalrts::icIdent, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
    //19: s.StackDepth#1/1
    //20: s.Mode#1/1
    //21: s.Mode#1/2
    //22: e.Index#1/1
    //24: e.Index#1/2
    //26: e.Variables_B#1/1
    //28: e.Variables_E#1/1
    //30: s.VarDepth#1/1
    //31: s.VarDepth#1/2
    //32: s.VarDepth#1/3
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.Mode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.Mode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[0], context[1] ) )
      continue;
    context[22] = context[0];
    context[23] = context[1];
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[21], context[20], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[24], context[25], context[22], context[23], context[4], context[5] ) )
        continue;
      context[28] = context[6];
      context[29] = context[7];
      if( ! refalrts::svar_left( context[30], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[31], context[30]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[32], context[31]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[11], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[13] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[18], & ident_ExistVariable<int>::name ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::link_brackets( context[8], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::link_brackets( context[15], context[16] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::push_stack( context[14] );
      refalrts::push_stack( context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::link_brackets( context[12], context[13] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_stvar( res, context[30] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    //15: s.StackDepth#1/1
    //16: s.NewMode#1/1
    //17: e.Index#1/1
    //19: e.Index#1/2
    //21: e.Variables_B#1/1
    //23: e.Variables_E#1/1
    //25: s.OldMode#1/1
    //26: s.VarDepth#1/1
    //27: s.OldMode#1/2
    // [Context  s.StackDepth#1 e.Variables_B#1 ( s.OldMode#1 e.Index#1 s.VarDepth#1 ) e.Variables_E#1 ] s.NewMode#1 e.Index#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[0], context[1] ) )
      continue;
    context[17] = context[0];
    context[18] = context[1];
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop();
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      context[23] = context[6];
      context[24] = context[7];
      if( ! refalrts::svar_left( context[25], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[19], context[20], context[17], context[18], context[4], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if (! refalrts::copy_stvar(context[27], context[25]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[8] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[9], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[10] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[11] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[12] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[13], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[14], 0UL ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[27] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::link_brackets( context[8], context[12] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::link_brackets( context[10], context[11] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[8] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[21], context[22], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //8: s.StackDepth#1/1
  //9: e.Variables#1/1
  //11: s.Mode#1/1
  // [Context  s.StackDepth#1 e.Variables#1 ] s.Mode#1 e.Index#1
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = context[2];
  context[10] = context[3];
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // Unused closed variable e.Index#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[7] );
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_stvar( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Unique, "Unique" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //22: s.StackDepth#1/1
    //23: e.Locals#1/1
    //25: e.FreeSent#1/1
    //27: e.FreeFunc#1/1
    //29: e.Outers#1/1
    // [Context  s.StackDepth#1 e.Locals#1 ( # FreeVarsSent e.FreeSent#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Outers#1 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 22, 2},
    {refalrts::icEPrepare, 0, 23, 2},
    {refalrts::icEStart, 0, 23, 2},
    {refalrts::icSave, 0, 8, 2},
    {refalrts::icBracketLeft, 0, 4, 8},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 8},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icContextSet, 0, 25, 4},
    {refalrts::icContextSet, 0, 27, 6},
    {refalrts::icContextSet, 0, 29, 8},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 1, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 21},
    {refalrts::icLinkBrackets, 10, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icLinkBrackets, 15, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
  //22: s.StackDepth#1/1
  //23: e.Locals#1/1
  //25: e.FreeSent#1/1
  //27: e.FreeFunc#1/1
  //29: e.Outers#1/1
  // [Context  s.StackDepth#1 e.Locals#1 ( # FreeVarsSent e.FreeSent#1 ) ( # FreeVarsFunc e.FreeFunc#1 ) e.Outers#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  refalrts::start_e_loop();
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[4], context[5] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[6], context[7] ) )
      continue;
    context[25] = context[4];
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[7];
    context[29] = context[8];
    context[30] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_adt( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], Context, "Context" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[13], & ident_FreeVarsSent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_FreeVarsFunc<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], Unique, "Unique" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_adt( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[10], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::link_brackets( context[15], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[17] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::link_brackets( context[12], context[14] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[23], context[24], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Unique, "Unique" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //9: e.Begin#1/1
    //11: t.Copy#1/1
    //12: t.Copy#1/2
    //13: e.Middle#1/1
    //15: e.End#1/1
    // e.Begin#1 t.Copy#1 e.Middle#1 t.Copy#1 e.End#1
    {refalrts::icEPrepare, 0, 9, 0},
    {refalrts::icEStart, 0, 9, 0},
    {refalrts::icSave, 0, 2, 0},
    {refalrts::ictVarLeft, 0, 11, 2},
    {refalrts::icEPrepare, 0, 13, 2},
    {refalrts::icEStart, 0, 13, 2},
    {refalrts::icSave, 0, 4, 2},
    {refalrts::ictRepeatLeft, 12, 11, 4},
    {refalrts::icContextSet, 0, 15, 4},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    //2: e.Uniques#1/1
    // e.Uniques#1
    {refalrts::icContextSet, 0, 2, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
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
    //9: e.Begin#1/1
    //11: t.Copy#1/1
    //12: t.Copy#1/2
    //13: e.Middle#1/1
    //15: e.End#1/1
    // e.Begin#1 t.Copy#1 e.Middle#1 t.Copy#1 e.End#1
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[2] = context[0];
      context[3] = context[1];
      if( ! refalrts::tvar_left( context[11], context[2], context[3] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[4] = context[2];
        context[5] = context[3];
        if( ! refalrts::repeated_stvar_left( context[12], context[11], context[4], context[5] ) )
          continue;
        context[15] = context[4];
        context[16] = context[5];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[6] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[7], Unique, "Unique" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[8] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[8] );
        refalrts::push_stack( context[6] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_stvar( res, context[11] );
        res = refalrts::splice_elem( res, context[7] );
        res = refalrts::splice_elem( res, context[6] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[13], context[14], context[2], context[3] ) );
    } while ( refalrts::open_evar_advance( context[9], context[10], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //2: e.Uniques#1/1
  // e.Uniques#1
  context[2] = context[0];
  context[3] = context[1];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //16: s.StackDepth#1/1
    //17: e.Variables#1/1
    // [Context  s.StackDepth#1 e.Variables#1 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 16, 2},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 4},
    {refalrts::icFunc, 0, 1, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icIdent, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icIdent, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 15},
    {refalrts::icLinkBrackets, 4, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 16},
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
  //16: s.StackDepth#1/1
  //17: e.Variables#1/1
  // [Context  s.StackDepth#1 e.Variables#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = context[2];
  context[18] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[5], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[10], & ident_FreeVarsSent<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::link_brackets( context[12], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[9], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Dec, "Dec" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //14: s.StackDepth#1/1
    //15: e.ClosureContext#1/1
    //17: e.Outers#1/1
    // [Context  s.StackDepth#1 ( # FreeVarsSent ) ( # FreeVarsFunc e.ClosureContext#1 ) e.Outers#1 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icIdentLeft, 0, 1, 4},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icIdentLeft, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 4},
    {refalrts::icContextSet, 0, 15, 6},
    {refalrts::icContextSet, 0, 17, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 8},
    {refalrts::icFunc, 0, 1, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 13},
    {refalrts::icSpliceEVar, 0, 0, 15},
    {refalrts::icLinkBrackets, 8, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
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
  //14: s.StackDepth#1/1
  //15: e.ClosureContext#1/1
  //17: e.Outers#1/1
  // [Context  s.StackDepth#1 ( # FreeVarsSent ) ( # FreeVarsFunc e.ClosureContext#1 ) e.Outers#1 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = context[6];
  context[16] = context[7];
  context[17] = context[2];
  context[18] = context[3];

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[13] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::link_brackets( context[8], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_stvar( res, context[14] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
