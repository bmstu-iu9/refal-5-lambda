// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __ePattern_1_1 = 6 };
    enum { __eResult_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenResult, "GenResult" },
      { & GenPattern, "GenPattern" },
      { & GeneralizeResult, "GeneralizeResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Pattern#1 ) ( e.Result#1 )
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
    context[__ePattern_1_1] = context[2];
    context[__ePattern_1_1 + 1] = context[3];
    context[__eResult_1_1] = context[4];
    context[__eResult_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult, "GeneralizeResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
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

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult AlgLeft(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult AlgRight(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult TkIdentifier(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdInitB0(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdEmpty(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdRepeated(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdClosedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdOpenedE_Start(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdOpenedE_End(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdComment(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdSave(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdIssueMem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdSetBound(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdBoundToLeft(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdBoundToRight(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdBoundEmptySeq(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiContextSet(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiNum(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiRepeat(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiSave(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiEPrepare(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiEStart(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiEmpty(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiFuncArray(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiLabelArray(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult CmdOpenedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sNumRanges_2_1 = 4 };
    enum { __eVars_2_1 = 5 };
    enum { __eCommands_2_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & SaveBrackets, "SaveBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_2_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eVars_2_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#2 ( e.Vars#2 ) e.Commands#2
    if( ! refalrts::svar_left( context[__sNumRanges_2_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eVars_2_1] = context[2];
    context[__eVars_2_1 + 1] = context[3];
    context[__eCommands_2_1] = context[0];
    context[__eCommands_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    if( ! refalrts::alloc_name( n3, & SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_2_1], context[__eCommands_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumRanges_2_1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_2_1], context[__eVars_2_1 + 1] );
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

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __ePattern_1_1 = 6 };
    enum { __eVars_2_1 = 8 };
    enum { __sNumRanges_2_1 = 10 };
    enum { __eCommands_2_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { & CmdComment, "CmdComment" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eVars_2_1, 4},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_2_1, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Pattern#1 ) ( e.Vars#2 ) s.NumRanges#2 e.Commands#2
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__ePattern_1_1] = context[2];
    context[__ePattern_1_1 + 1] = context[3];
    context[__eVars_2_1] = context[4];
    context[__eVars_2_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNumRanges_2_1], context[0], context[1] ) )
      break;
    context[__eCommands_2_1] = context[0];
    context[__eCommands_2_1 + 1] = context[1];

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
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eCommands_2_1], context[__eCommands_2_1 + 1] );
    refalrts::link_brackets( n3, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_2_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_2_1], context[__eVars_2_1 + 1] );
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

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __ePattern_1_1 = 2 };
    enum { __ePattern_1_2 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_GenPattern_1, "lambda_GenPattern_1" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & lambda_GenPattern_0, "lambda_GenPattern_0" },
      { & Seq, "Seq" },
      { & DoGenPattern, "DoGenPattern" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icSpliceEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __ePattern_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Pattern#1
    context[__ePattern_1_1] = context[0];
    context[__ePattern_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePattern_1_2], context[__ePattern_1_2 + 1], context[__ePattern_1_1], context[__ePattern_1_1 + 1] ) )
      return refalrts::cNoMemory;
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
    if( ! refalrts::alloc_name( n3, & DoGenPattern, "DoGenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_number( n6, 0UL ) )
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
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & lambda_GenPattern_0, "lambda_GenPattern_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & lambda_GenPattern_1, "lambda_GenPattern_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__ePattern_1_2], context[__ePattern_1_2 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__ePattern_1_1], context[__ePattern_1_1 + 1] );
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

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

//$LABEL Brackets
template <typename T>
struct Brackets {
  static const char *name() {
    return "Brackets";
  }
};

//$LABEL ADT_Brackets
template <typename T>
struct ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

//$LABEL CallBrackets
template <typename T>
struct CallBrackets {
  static const char *name() {
    return "CallBrackets";
  }
};

static refalrts::FnResult Inc2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNum_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Add, "Add" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_number( n2, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
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

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sChar_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdChar, "CmdChar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkChar, "TkChar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkChar s.Char#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkChar, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sChar_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sChar_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sNumber_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdNumber, "CmdNumber" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkNumber, "TkNumber" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkNumber s.Number#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eName_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdName, "CmdName" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkName e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkName, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eName_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdIdent, "CmdIdent" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkIdentifier, "TkIdentifier" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkIdentifier e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sChar_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdChar, "CmdChar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkChar, "TkChar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkChar s.Char#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkChar, context[8], context[9] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sChar_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sChar_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eRange_1_1 = 22 };
    enum { __sNumber_1_1 = 24 };
    enum { __sNum_1_2 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdNumber, "CmdNumber" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkNumber, "TkNumber" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkNumber s.Number#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, context[8], context[9] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eName_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdName, "CmdName" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkName e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkName, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eName_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdIdent, "CmdIdent" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkIdentifier, "TkIdentifier" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkIdentifier e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[8];
      context[__eName_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n12 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eSubRange_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNumRanges_1_2 = 26 };
    enum { __sNumRanges_1_3 = 27 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdBrackets, "CmdBrackets" },
      { & Inc2, "Inc2" },
      { & DoGenPattern, "DoGenPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # Brackets e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
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
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & CmdBrackets, "CmdBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eSubRange_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNumRanges_1_2 = 26 };
    enum { __sNumRanges_1_3 = 27 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdBrackets, "CmdBrackets" },
      { & Inc2, "Inc2" },
      { & DoGenPattern, "DoGenPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # Brackets e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
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
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & CmdBrackets, "CmdBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eVars_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sNumRanges_1_1 = 18 };
    enum { __eRanges_B_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eName_1_1 = 24 };
    enum { __eSubRange_1_1 = 26 };
    enum { __eRange_1_1 = 28 };
    enum { __sNumRanges_1_2 = 30 };
    enum { __sNumRanges_1_3 = 31 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdADT, "CmdADT" },
      { & Inc2, "Inc2" },
      { & DoGenPattern, "DoGenPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icBracketLeft, 0, 0, 10, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[10];
      context[__eName_1_1 + 1] = context[11];
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
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
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & CmdADT, "CmdADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eVars_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sNumRanges_1_1 = 18 };
    enum { __eRanges_B_1_1 = 19 };
    enum { __eName_1_1 = 21 };
    enum { __eSubRange_1_1 = 23 };
    enum { __eRanges_E_1_1 = 25 };
    enum { __sNum_1_1 = 27 };
    enum { __eRange_1_1 = 28 };
    enum { __sNumRanges_1_2 = 30 };
    enum { __sNumRanges_1_3 = 31 };
    enum { __sNum_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdADT, "CmdADT" },
      { & Inc2, "Inc2" },
      { & DoGenPattern, "DoGenPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icBracketLeft, 0, 0, 10, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eSubRange_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSubRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[8], context[9] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
        continue;
      context[__eName_1_1] = context[10];
      context[__eName_1_1 + 1] = context[11];
      context[__eSubRange_1_1] = context[8];
      context[__eSubRange_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_2], context[__sNumRanges_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNumRanges_1_3], context[__sNumRanges_1_2] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & Inc2, "Inc2" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
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
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & CmdADT, "CmdADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n11, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n12, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_3] );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eSubRange_1_1], context[__eSubRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_2] );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 20 elems
    refalrts::Iter context[20];
    refalrts::zeros( context, 20 );
    enum { __eVars_1_1 = 10 };
    enum { __eCommands_1_1 = 12 };
    enum { __sNumRanges_1_1 = 14 };
    enum { __eRanges_B_1_1 = 15 };
    enum { __eRanges_E_1_1 = 17 };
    enum { __sNum_1_1 = 19 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdEmpty, "CmdEmpty" },
      { & DoGenPattern, "DoGenPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[8], & context[9], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 8},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      context[__eRanges_E_1_1] = context[8];
      context[__eRanges_E_1_1 + 1] = context[9];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_name( n6, & CmdEmpty, "CmdEmpty" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_close_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_call( n10 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n10 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 41 elems
    refalrts::Iter context[41];
    refalrts::zeros( context, 41 );
    enum { __eCommands_1_1 = 18 };
    enum { __sNumRanges_1_1 = 20 };
    enum { __eRanges_B_1_1 = 21 };
    enum { __eRanges_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eRange_1_1 = 26 };
    enum { __sMode_1_1 = 28 };
    enum { __sMode_1_2 = 29 };
    enum { __eIndex_1_1 = 30 };
    enum { __eIndex_1_2 = 32 };
    enum { __eVars_B_1_1 = 34 };
    enum { __eVars_E_1_1 = 36 };
    enum { __sCount_1_1 = 38 };
    enum { __sNum_1_2 = 39 };
    enum { __sCount_1_2 = 40 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & AlgLeft, "AlgLeft" },
      { & CmdRepeated, "CmdRepeated" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[14], & context[15], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 4, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, 0, __eVars_B_1_1, 14},
      {refalrts::icEStart, 0, 0, __eVars_B_1_1, 14},
      {refalrts::icEPush, 0, 0, 0, 14},
      {refalrts::icSave, & context[16], & context[17], 0},
      {refalrts::icBracketLeft, 0, 0, 10, 16},
      {refalrts::iceRepeatRight, (void*)__eIndex_1_2, (void*)__eIndex_1_1, 0, 10},
      {refalrts::icsRepeatRight, (void*)__sMode_1_2, (void*)__sMode_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eVars_E_1_1, 16},
      {refalrts::icsVarLeft, & context[10], & context[11], __sCount_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[14] = context[4];
      context[15] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eVars_B_1_1] = 0;
      context[__eVars_B_1_1 + 1] = 0;
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
          continue;
        context[__eVars_E_1_1] = context[16];
        context[__eVars_E_1_1 + 1] = context[17];
        if( ! refalrts::svar_left( context[__sCount_1_1], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sCount_1_2], context[__sCount_1_1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
        if( ! refalrts::alloc_open_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_name( n14, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_2] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sCount_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_1] );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, context[__sCount_1_1] );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 41 elems
    refalrts::Iter context[41];
    refalrts::zeros( context, 41 );
    enum { __eCommands_1_1 = 18 };
    enum { __sNumRanges_1_1 = 20 };
    enum { __eRanges_B_1_1 = 21 };
    enum { __eRanges_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eRange_1_1 = 26 };
    enum { __sMode_1_1 = 28 };
    enum { __sMode_1_2 = 29 };
    enum { __eIndex_1_1 = 30 };
    enum { __eIndex_1_2 = 32 };
    enum { __eVars_B_1_1 = 34 };
    enum { __eVars_E_1_1 = 36 };
    enum { __sCount_1_1 = 38 };
    enum { __sNum_1_2 = 39 };
    enum { __sCount_1_2 = 40 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & AlgRight, "AlgRight" },
      { & CmdRepeated, "CmdRepeated" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[14], & context[15], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 4, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 12},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icsVarLeft, & context[8], & context[9], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, 0, __eVars_B_1_1, 14},
      {refalrts::icEStart, 0, 0, __eVars_B_1_1, 14},
      {refalrts::icEPush, 0, 0, 0, 14},
      {refalrts::icSave, & context[16], & context[17], 0},
      {refalrts::icBracketLeft, 0, 0, 10, 16},
      {refalrts::iceRepeatRight, (void*)__eIndex_1_2, (void*)__eIndex_1_1, 0, 10},
      {refalrts::icsRepeatRight, (void*)__sMode_1_2, (void*)__sMode_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eVars_E_1_1, 16},
      {refalrts::icsVarLeft, & context[10], & context[11], __sCount_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCount_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable s.Mode#1 e.Index#1 ) ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[14] = context[4];
      context[15] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      context[__eRanges_E_1_1] = context[12];
      context[__eRanges_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eVars_B_1_1] = 0;
      context[__eVars_B_1_1 + 1] = 0;
      do {
        context[16] = context[14];
        context[17] = context[15];
        context[10] = 0;
        context[11] = 0;
        if( ! refalrts::brackets_left( context[10], context[11], context[16], context[17] ) )
          continue;
        if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
          continue;
        context[__eVars_E_1_1] = context[16];
        context[__eVars_E_1_1 + 1] = context[17];
        if( ! refalrts::svar_left( context[__sCount_1_1], context[10], context[11] ) )
          continue;
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sCount_1_2], context[__sCount_1_1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
        if( ! refalrts::alloc_open_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_name( n7, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_name( n14, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_call( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_call( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n20 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::link_brackets( n11, n19 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n12, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_2] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sCount_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sMode_1_1] );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, context[__sCount_1_1] );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[14], context[15] ) );
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 26 elems
    refalrts::Iter context[26];
    refalrts::zeros( context, 26 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eIndex_1_2 = 24 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdClosedE, "CmdClosedE" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 'e e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_number( n4, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_call( n15 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n15 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n8, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n9, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n2, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n3, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdVar, "CmdVar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'s', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 's e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 's', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdVar, "CmdVar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'t', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 't e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 't', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdVar, "CmdVar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'s', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable 's e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 's', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eIndex_1_1 = 19 };
    enum { __eRanges_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgRight, "AlgRight" },
      { & CmdVar, "CmdVar" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'t', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable 't e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 't', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eVars_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNumRanges_1_1 = 16 };
    enum { __eRanges_B_1_1 = 17 };
    enum { __eRanges_E_1_1 = 19 };
    enum { __sNum_1_1 = 21 };
    enum { __eIndex_1_1 = 22 };
    enum { __eRange_1_1 = 24 };
    enum { __sNum_1_2 = 26 };
    enum { __eIndex_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdOpenedE, "CmdOpenedE" },
      { & DoGenPattern, "DoGenPattern" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eRanges_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNum_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icCharLeft, & context[8], & context[9], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eRange_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRange_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRanges_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 'e e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    context[__eRanges_B_1_1] = 0;
    context[__eRanges_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eRanges_E_1_1] = context[10];
      context[__eRanges_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[6], context[7] ) )
        continue;
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[8], context[9] ) )
        continue;
      context[__eIndex_1_1] = context[8];
      context[__eIndex_1_1 + 1] = context[9];
      context[__eRange_1_1] = context[6];
      context[__eRange_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenPattern, "DoGenPattern" ) )
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
      if( ! refalrts::alloc_number( n6, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'e' ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n17 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n17 );
      refalrts::link_brackets( n10, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n11, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eRanges_E_1_1], context[__eRanges_E_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eRange_1_1], context[__eRange_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eRanges_B_1_1], context[__eRanges_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eVars_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sNumRanges_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 2},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumRanges_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumRanges#1 ( e.Vars#1 ) ( e.Commands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eVars_1_1] = context[4];
    context[__eVars_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[2];
    context[__eCommands_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_close_bracket( n1 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLastBracket_1_1 = 2 };
    enum { __eCommands_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoSaveBrackets, "DoSaveBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
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

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_DoSaveBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __eCommands_E_1_1 = 5 };
    enum { __eCommandsBeforeEMatch_2_1 = 7 };
    enum { __eCommandsBeforeEMatch_2_2 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ExtractBrackets, "ExtractBrackets" },
      { & DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_E_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eCommandsBeforeEMatch_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Commands_E#1 ) e.CommandsBeforeEMatch#2
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eCommands_E_1_1] = context[2];
    context[__eCommands_E_1_1 + 1] = context[3];
    context[__eCommandsBeforeEMatch_2_1] = context[0];
    context[__eCommandsBeforeEMatch_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eCommandsBeforeEMatch_2_2], context[__eCommandsBeforeEMatch_2_2 + 1], context[__eCommandsBeforeEMatch_2_1], context[__eCommandsBeforeEMatch_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eCommandsBeforeEMatch_2_2], context[__eCommandsBeforeEMatch_2_2 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommandsBeforeEMatch_2_1], context[__eCommandsBeforeEMatch_2_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
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

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __sLastBracket_1_1 = 8 };
    enum { __eScanned_1_1 = 9 };
    enum { __eCommands_B_1_1 = 11 };
    enum { __eCommands_E_1_1 = 13 };
    enum { __sNum_1_1 = 15 };
    enum { __eIndex_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & AlgLeft, "AlgLeft" },
      { & CmdOpenedE, "CmdOpenedE" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 2},
      {refalrts::icEPrepare, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[6], & context[7], 0},
      {refalrts::icBracketLeft, 0, 0, 4, 6},
      {refalrts::icFuncLeft, 0, 0, 3, 4},
      {refalrts::icFuncLeft, 0, 0, 2, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_E_1_1, 6},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNum_1_1, 0},
      {refalrts::icCharLeft, & context[4], & context[5], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands_B#1 ( & CmdOpenedE & AlgLeft s.Num#1 'e e.Index#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( & AlgLeft, context[4], context[5] ) )
        continue;
      context[__eCommands_E_1_1] = context[6];
      context[__eCommands_E_1_1 + 1] = context[7];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[4], context[5] ) )
        continue;
      context[__eIndex_1_1] = context[4];
      context[__eIndex_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_open_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_name( n8, & refalrts::create_closure, "refalrts::create_closure" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & lambda_DoSaveBrackets_0, "lambda_DoSaveBrackets_0" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_call( n13 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n13 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::push_stack( n12 );
      refalrts::push_stack( n7 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n10, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n2, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __eScanned_1_1 = 5 };
    enum { __eCommands_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[2];
    context[__eScanned_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_DoSaveBrackets_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 4 };
    enum { __sCommand_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    enum { __eInfo_2_1 = 7 };
    enum { __sNum_1_1 = 9 };
    enum { __sNum_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCommand_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_2_1, 0},
      {refalrts::icsRepeatLeft, (void*)__sNum_1_2, (void*)__sNum_1_1, 0, 2},
      {refalrts::icContextSet, 0, 0, __eInfo_2_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCommand_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInfo_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.Num#1 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::repeated_stvar_left( context[__sNum_1_2], context[__sNum_1_1], context[2], context[3] ) )
      break;
    context[__eInfo_2_1] = context[2];
    context[__eInfo_2_1 + 1] = context[3];

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
    res = refalrts::splice_evar( res, context[__eInfo_2_1], context[__eInfo_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_2_1] );
    res = refalrts::splice_stvar( res, context[__sCommand_2_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sCommand_2_1 = 4 };
    enum { __sDirection_2_1 = 5 };
    enum { __sOtherNum_2_1 = 6 };
    enum { __eInfo_2_1 = 7 };
    enum { __sNum_1_1 = 9 };
    enum { __sLastBracket_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNum_1_1, 0},
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCommand_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sOtherNum_2_1, 0},
      {refalrts::icContextSet, 0, 0, __eInfo_2_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCommand_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOtherNum_2_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInfo_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.OtherNum#2 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sOtherNum_2_1], context[2], context[3] ) )
      break;
    context[__eInfo_2_1] = context[2];
    context[__eInfo_2_1 + 1] = context[3];

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
    res = refalrts::splice_evar( res, context[__eInfo_2_1], context[__eInfo_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sOtherNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_2_1] );
    res = refalrts::splice_stvar( res, context[__sCommand_2_1] );
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

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 34 elems
    refalrts::Iter context[34];
    refalrts::zeros( context, 34 );
    enum { __sLastBracket_1_1 = 14 };
    enum { __eScanned_1_1 = 15 };
    enum { __eBoundedBrackets_B_1_1 = 17 };
    enum { __sNum_1_1 = 19 };
    enum { __sNum_1_2 = 20 };
    enum { __eBoundedBrackets_E_1_1 = 21 };
    enum { __eCommands_B_1_1 = 23 };
    enum { __eCommands_E_1_1 = 25 };
    enum { __sCommand_1_1 = 27 };
    enum { __sDirection_1_1 = 28 };
    enum { __eArgs_1_1 = 29 };
    enum { __sLastBracket_1_2 = 31 };
    enum { __sLastBracket_1_3 = 32 };
    enum { __sNum_1_3 = 33 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & Map, "Map" },
      { & CmdSave, "CmdSave" },
      { & Inc2, "Inc2" },
      { & DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 4},
      {refalrts::icEPrepare, 0, 0, __eBoundedBrackets_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eBoundedBrackets_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[8], & context[9], 0},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icsVarLeft, & context[10], & context[11], __sNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eBoundedBrackets_E_1_1, 10},
      {refalrts::icEPrepare, 0, 0, __eCommands_B_1_1, 8},
      {refalrts::icEStart, 0, 0, __eCommands_B_1_1, 8},
      {refalrts::icEPush, 0, 0, 0, 8},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icContextSet, 0, 0, __eCommands_E_1_1, 12},
      {refalrts::icsVarLeft, & context[6], & context[7], __sCommand_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsRepeatLeft, (void*)__sNum_1_2, (void*)__sNum_1_1, 0, 6},
      {refalrts::icContextSet, 0, 0, __eArgs_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eBoundedBrackets_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eBoundedBrackets_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_2, 0},
      {refalrts::icCopySTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCommand_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArgs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.BoundedBrackets_B#1 s.Num#1 e.BoundedBrackets_E#1 ) ( e.Scanned#1 ) e.Commands_B#1 ( s.Command#1 s.Direction#1 s.Num#1 e.Args#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eBoundedBrackets_B_1_1] = 0;
    context[__eBoundedBrackets_B_1_1 + 1] = 0;
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[10] = context[2];
      context[11] = context[3];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[10], context[11] ) )
        continue;
      context[__eBoundedBrackets_E_1_1] = context[10];
      context[__eBoundedBrackets_E_1_1 + 1] = context[11];
      context[__eCommands_B_1_1] = 0;
      context[__eCommands_B_1_1 + 1] = 0;
      do {
        context[12] = context[8];
        context[13] = context[9];
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
          continue;
        context[__eCommands_E_1_1] = context[12];
        context[__eCommands_E_1_1 + 1] = context[13];
        if( ! refalrts::svar_left( context[__sCommand_1_1], context[6], context[7] ) )
          continue;
        if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( context[__sNum_1_2], context[__sNum_1_1], context[6], context[7] ) )
          continue;
        context[__eArgs_1_1] = context[6];
        context[__eArgs_1_1 + 1] = context[7];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( context[__sLastBracket_1_2], context[__sLastBracket_1_1] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sLastBracket_1_3], context[__sLastBracket_1_2] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( context[__sNum_1_3], context[__sNum_1_2] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & DoSaveBrackets_MakeSavers, "DoSaveBrackets_MakeSavers" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & Inc2, "Inc2" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_call( n4 ) )
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
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & CmdSave, "CmdSave" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_close_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_call( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, & Map, "Map" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_call( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & refalrts::create_closure, "refalrts::create_closure" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & lambda_DoSaveBrackets_MakeSavers_0, "lambda_DoSaveBrackets_MakeSavers_0" ) )
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
        if( ! refalrts::alloc_close_call( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n21 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n21 );
        refalrts::push_stack( n20 );
        refalrts::push_stack( n12 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
        refalrts::link_brackets( n18, n19 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, context[__eArgs_1_1], context[__eArgs_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNum_1_3] );
        res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
        res = refalrts::splice_stvar( res, context[__sCommand_1_1] );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n14 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_3] );
        res = refalrts::splice_stvar( res, context[__sNum_1_2] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        refalrts::link_brackets( n7, n11 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_2] );
        res = refalrts::splice_stvar( res, context[__sNum_1_1] );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n5, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, context[__eBoundedBrackets_E_1_1], context[__eBoundedBrackets_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eBoundedBrackets_B_1_1], context[__eBoundedBrackets_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n5 );
        refalrts::push_stack( n4 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eBoundedBrackets_B_1_1], context[__eBoundedBrackets_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sLastBracket_1_1 = 6 };
    enum { __eScanned_1_1 = 7 };
    enum { __eCommands_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoSaveBrackets, "DoSaveBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sLastBracket_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eScanned_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLastBracket_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScanned_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.LastBracket#1 ( e.UnusedBoundedBrackets#1 ) ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( context[__sLastBracket_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    // Unused closed variable e.UnusedBoundedBrackets#1
    context[__eScanned_1_1] = context[4];
    context[__eScanned_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScanned_1_1], context[__eScanned_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sLastBracket_1_1] );
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

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_ExtractBrackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sInnerNum_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdBrackets, "CmdBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNum_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sInnerNum_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdBrackets s.Direction#2 s.BracketNum#2 s.InnerNum#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdBrackets, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sInnerNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sInnerNum_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdADT, "CmdADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNum_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sInnerNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdADT s.Direction#2 s.BracketNum#2 s.InnerNum#2 e.Name#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdADT, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerNum_2_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.Name#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sInnerNum_2_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sBracketNum_2_1 = 4 };
    enum { __sCommand_2_1 = 5 };
    enum { __sDirection_2_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCommand_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_2_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNum_2_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Command#2 s.Direction#2 s.BracketNum#2 e.Info#2 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sCommand_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_2_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_2_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.Info#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sBracketNum_2_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eCommands_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" },
      { & Map, "Map" },
      { & Brackets_Set, "Brackets_Set" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & lambda_ExtractBrackets_0, "lambda_ExtractBrackets_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
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

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eUnique_1_1 = 6 };
    enum { __sRepeated_1_1 = 8 };
    enum { __eMiddle_1_1 = 9 };
    enum { __eRest_1_1 = 11 };
    enum { __sRepeated_1_2 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Brackets_Set, "Brackets_Set" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEPrepare, 0, 0, __eUnique_1_1, 0},
      {refalrts::icEStart, 0, 0, __eUnique_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[2], & context[3], 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sRepeated_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eMiddle_1_1, 2},
      {refalrts::icEStart, 0, 0, __eMiddle_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[4], & context[5], 0},
      {refalrts::icsRepeatLeft, (void*)__sRepeated_1_2, (void*)__sRepeated_1_1, 0, 4},
      {refalrts::icContextSet, 0, 0, __eRest_1_1, 4},
      {refalrts::icSpliceEVar, 0, 0, __eUnique_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sRepeated_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMiddle_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRest_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unique#1 s.Repeated#1 e.Middle#1 s.Repeated#1 e.Rest#1
    context[__eUnique_1_1] = 0;
    context[__eUnique_1_1 + 1] = 0;
    do {
      context[2] = context[0];
      context[3] = context[1];
      if( ! refalrts::svar_left( context[__sRepeated_1_1], context[2], context[3] ) )
        continue;
      context[__eMiddle_1_1] = 0;
      context[__eMiddle_1_1 + 1] = 0;
      do {
        context[4] = context[2];
        context[5] = context[3];
        if( ! refalrts::repeated_stvar_left( context[__sRepeated_1_2], context[__sRepeated_1_1], context[4], context[5] ) )
          continue;
        context[__eRest_1_1] = context[4];
        context[__eRest_1_1 + 1] = context[5];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eRest_1_1], context[__eRest_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eMiddle_1_1], context[__eMiddle_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sRepeated_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, context[__eUnique_1_1], context[__eUnique_1_1 + 1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eMiddle_1_1], context[__eMiddle_1_1 + 1], context[2], context[3] ) );
    } while ( refalrts::open_evar_advance( context[__eUnique_1_1], context[__eUnique_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eUnique_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eUnique_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eUnique_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unique#1
    context[__eUnique_1_1] = context[0];
    context[__eUnique_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eUnique_1_1], context[__eUnique_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eInner_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eInner_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '(', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInner_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, ')', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # Brackets e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & Brackets<int>::name, context[2], context[3] ) )
      break;
    context[__eInner_1_1] = context[2];
    context[__eInner_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eInner_1_1], context[__eInner_1_1 + 1] );
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
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eName_1_1 = 6 };
    enum { __eInner_1_1 = 8 };
    enum { __eTail_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 2},
      {refalrts::icBracketLeft, 0, 0, 4, 2},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eInner_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '[', 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInner_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, ']', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( # ADT_Brackets ( e.Name#1 ) e.Inner#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[4];
    context[__eName_1_1 + 1] = context[5];
    context[__eInner_1_1] = context[2];
    context[__eInner_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ']' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eInner_1_1], context[__eInner_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sChar_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkChar, "TkChar" },
      { & TextFromPattern_Char, "TextFromPattern_Char" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkChar, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & TkChar, "TkChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
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
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { & StrFromInt, "StrFromInt" },
      { & TkNumber, "TkNumber" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkNumber s.Number#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkNumber, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eName_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '&', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkName e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eTail_1_1 = 4 };
    enum { __sMode_1_1 = 6 };
    enum { __sDepth_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { & StrFromInt, "StrFromInt" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icsVarRight, & context[2], & context[3], __sDepth_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '#', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkVariable s.Mode#1 e.Index#1 s.Depth#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '#' ) )
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eName_1_1 = 4 };
    enum { __eTail_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { & TkIdentifier, "TkIdentifier" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '#', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkIdentifier e.Name#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'\n', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\n'
    if( ! refalrts::char_left( '\n', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'\r', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\r'
    if( ! refalrts::char_left( '\r', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'\t', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\t'
    if( ! refalrts::char_left( '\t', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'\\', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\\'
    if( ! refalrts::char_left( '\\', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'\'', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\''
    if( ! refalrts::char_left( '\'', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharLeft, & context[0], & context[1], (int)'"', 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\\', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // '\"'
    if( ! refalrts::char_left( '"', context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sOther_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOther_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Other#1
    if( ! refalrts::svar_left( context[__sOther_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sOther_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eTail_1_1 = 4 };
    enum { __sChar_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern_Char, "TextFromPattern_Char" },
      { & Escape, "Escape" },
      { & TkChar, "TkChar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & TkChar s.Char#1 ) e.Tail#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkChar, context[2], context[3] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TextFromPattern, "TextFromPattern" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eOther_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOther_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Other#1
    context[__eOther_1_1] = context[0];
    context[__eOther_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eOther_1_1], context[__eOther_1_1 + 1] );
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

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eResult_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoGenResult, "DoGenResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Result#1
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_number( n8, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
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

refalrts::FnResult CmdAllocateElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdLinkBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdPushStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdInsertElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdInsertVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

//$LABEL CloseCall
template <typename T>
struct CloseCall {
  static const char *name() {
    return "CloseCall";
  }
};

static refalrts::FnResult DoGenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sValue_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElChar, "ElChar" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkChar, "TkChar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sValue_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sValue_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkChar s.Value#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkChar, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sValue_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElChar, "ElChar" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sValue_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eName_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElName, "ElName" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkName, "TkName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkName e.Name#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkName, context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElName, "ElName" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sNumber_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElNumber, "ElNumber" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkNumber, "TkNumber" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkNumber s.Number#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkNumber, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElNumber, "ElNumber" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eName_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElIdent, "ElIdent" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkIdentifier, "TkIdentifier" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 5, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkIdentifier e.Name#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[8];
    context[__eName_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElIdent, "ElIdent" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n18 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eInBrackets_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    enum { __sCounter_1_4 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseBracket, "TkCloseBracket" },
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElOpenBracket, "ElOpenBracket" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # Brackets e.InBrackets#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & Brackets<int>::name, context[8], context[9] ) )
      break;
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElOpenBracket, "ElOpenBracket" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & TkCloseBracket, "TkCloseBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 24 elems
    refalrts::Iter context[24];
    refalrts::zeros( context, 24 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eInBrackets_1_1 = 17 };
    enum { __eResult_1_1 = 19 };
    enum { __sCounter_1_2 = 21 };
    enum { __sCounter_1_3 = 22 };
    enum { __sCounter_1_4 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElOpenCall, "ElOpenCall" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CloseCall<int>::name,
      & CallBrackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 1, 8},
      {refalrts::icContextSet, 0, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icIdent, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CallBrackets e.InBrackets#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CallBrackets<int>::name, context[8], context[9] ) )
      break;
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElOpenCall, "ElOpenCall" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_ident( n19, & CloseCall<int>::name ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __eVars_1_1 = 12 };
    enum { __eAllocCommands_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sCounter_1_1 = 18 };
    enum { __eName_1_1 = 19 };
    enum { __eInBrackets_1_1 = 21 };
    enum { __eResult_1_1 = 23 };
    enum { __sCounter_1_2 = 25 };
    enum { __sCounter_1_3 = 26 };
    enum { __sCounter_1_4 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & TkCloseADT, "TkCloseADT" },
      { & TkName, "TkName" },
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & ElOpenADT, "ElOpenADT" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & ADT_Brackets<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icBracketLeft, 0, 0, 10, 8},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eInBrackets_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 6, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # ADT_Brackets ( e.Name#1 ) e.InBrackets#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, context[8], context[9] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[8], context[9] ) )
      break;
    context[__eName_1_1] = context[10];
    context[__eName_1_1 + 1] = context[11];
    context[__eInBrackets_1_1] = context[8];
    context[__eInBrackets_1_1 + 1] = context[9];
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElOpenADT, "ElOpenADT" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & TkName, "TkName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & TkCloseADT, "TkCloseADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eInBrackets_1_1], context[__eInBrackets_1_1 + 1] );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & CmdLinkBrackets, "CmdLinkBrackets" },
      { & ElCloseBracket, "ElCloseBracket" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkCloseBracket, "TkCloseBracket" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 6, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sOpenCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOpenCounter_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkCloseBracket s.OpenCounter#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElCloseBracket, "ElCloseBracket" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & CmdLinkBrackets, "CmdLinkBrackets" },
      { & ElCloseADT, "ElCloseADT" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { & TkCloseADT, "TkCloseADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 6, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sOpenCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOpenCounter_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkCloseADT s.OpenCounter#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElCloseADT, "ElCloseADT" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n21 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 23 elems
    refalrts::Iter context[23];
    refalrts::zeros( context, 23 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sOpenCounter_1_1 = 19 };
    enum { __sCounter_1_2 = 20 };
    enum { __sCounter_1_3 = 21 };
    enum { __sCounter_1_4 = 22 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertElem, "CmdInsertElem" },
      { & CmdPushStack, "CmdPushStack" },
      { & ElCloseCall, "ElCloseCall" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { & DoGenResult, "DoGenResult" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      & CloseCall<int>::name,
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icIdentLeft, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sOpenCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOpenCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CloseCall s.OpenCounter#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::ident_left(  & CloseCall<int>::name, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOpenCounter_1_1], context[8], context[9] ) )
      break;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sCounter_1_2], context[__sCounter_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_3], context[__sCounter_1_2] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sCounter_1_4], context[__sCounter_1_3] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElCloseCall, "ElCloseCall" ) )
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
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdPushStack, "CmdPushStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CmdPushStack, "CmdPushStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_4] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n10, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_3] );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, context[__sOpenCounter_1_1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 33 elems
    refalrts::Iter context[33];
    refalrts::zeros( context, 33 );
    enum { __eAllocCommands_1_1 = 14 };
    enum { __eCommands_1_1 = 16 };
    enum { __sCounter_1_1 = 18 };
    enum { __eResult_1_1 = 19 };
    enum { __sMode_1_1 = 21 };
    enum { __sMode_1_2 = 22 };
    enum { __eIndex_1_1 = 23 };
    enum { __eIndex_1_2 = 25 };
    enum { __eVars_B_1_1 = 27 };
    enum { __eVars_E_1_1 = 29 };
    enum { __sUsings_1_1 = 31 };
    enum { __sUsings_1_2 = 32 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & CmdInsertVar, "CmdInsertVar" },
      { & DoGenResult, "DoGenResult" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icEPrepare, 0, 0, __eVars_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eVars_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icBracketLeft, 0, 0, 10, 12},
      {refalrts::iceRepeatRight, (void*)__eIndex_1_2, (void*)__eIndex_1_1, 0, 10},
      {refalrts::icsRepeatRight, (void*)__sMode_1_2, (void*)__sMode_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eVars_E_1_1, 12},
      {refalrts::icsVarLeft, & context[10], & context[11], __sUsings_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 10},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
      break;
    context[__eIndex_1_1] = context[8];
    context[__eIndex_1_1 + 1] = context[9];
    context[__eVars_B_1_1] = 0;
    context[__eVars_B_1_1 + 1] = 0;
    do {
      context[12] = context[2];
      context[13] = context[3];
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[10], context[11] ) )
        continue;
      context[__eVars_E_1_1] = context[12];
      context[__eVars_E_1_1 + 1] = context[13];
      if( ! refalrts::svar_left( context[__sUsings_1_1], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sUsings_1_2], context[__sUsings_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_open_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_name( n5, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
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
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & CmdInsertVar, "CmdInsertVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_call( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_close_bracket( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_close_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n19 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
      refalrts::link_brackets( n11, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n12, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_2] );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, context[__sUsings_1_2] );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eVars_E_1_1], context[__eVars_E_1_1 + 1] );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eVars_B_1_1], context[__eVars_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eVars_B_1_1], context[__eVars_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __eVars_1_1 = 10 };
    enum { __eAllocCommands_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sCounter_1_1 = 16 };
    enum { __eResult_1_1 = 17 };
    enum { __sMode_1_1 = 19 };
    enum { __eIndex_1_1 = 20 };
    enum { __sMode_1_2 = 22 };
    enum { __eIndex_1_2 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdInsertVar, "CmdInsertVar" },
      { & DoGenResult, "DoGenResult" },
      { & TkVariable, "TkVariable" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 8},
      {refalrts::icContextSet, 0, 0, __eResult_1_1, 0},
      {refalrts::icsVarLeft, & context[8], & context[9], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icCopySTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sCounter_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResult_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & TkVariable, context[8], context[9] ) )
      break;
    context[__eResult_1_1] = context[0];
    context[__eResult_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sMode_1_1], context[8], context[9] ) )
      break;
    context[__eIndex_1_1] = context[8];
    context[__eIndex_1_1 + 1] = context[9];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGenResult, "DoGenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
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
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & CmdInsertVar, "CmdInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_number( n12, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eResult_1_1], context[__eResult_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sCounter_1_1] );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __eVars_1_1 = 8 };
    enum { __eAllocCommands_1_1 = 10 };
    enum { __eCommands_1_1 = 12 };
    enum { __sCounter_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eAllocCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1
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
    context[__eVars_1_1] = context[2];
    context[__eVars_1_1 + 1] = context[3];
    context[__eAllocCommands_1_1] = context[4];
    context[__eAllocCommands_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[6];
    context[__eCommands_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocCommands_1_1], context[__eAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
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

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FoldAllocCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Add(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CmdEmptyResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdReturnResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdIfDef(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdElse(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdEndIf(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdInitRAA(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdFinRAA(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiRunInterpret(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdiReserveStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DebugVarInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sUsings_1_1 = 4 };
    enum { __eIndex_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n39 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
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

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sUsings_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_close_call( n46 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n46 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DebugNVarInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" },
      { & WriteLine, "WriteLine" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_call( n51 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n51 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
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
    refalrts::push_stack( n30 );
    refalrts::push_stack( n28 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" },
      { & WriteLine, "WriteLine" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icChar, 0, 0, '\t', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icChar, 0, 0, '\n', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'A' ) )
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
    if( ! refalrts::alloc_char( n25, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, '\t' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, '\n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_close_call( n58 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n58 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
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
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult NumerateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __sNumber_1_1 = 4 };
    enum { __eEtc_1_1 = 5 };
    enum { __sUsings_1_1 = 7 };
    enum { __eIndex_1_1 = 8 };
    enum { __sNumber_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Add, "Add" },
      { & NumerateVars, "NumerateVars" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumber_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 ( s.Usings#1 'e e.Index#1 ) e.Etc#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Add, "Add" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_number( n7, 2UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __sNumber_1_1 = 4 };
    enum { __eEtc_1_1 = 5 };
    enum { __sUsings_1_1 = 7 };
    enum { __sMode_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sNumber_1_2 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & NumerateVars, "NumerateVars" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumber_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Etc#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNumber_1_2], context[__sNumber_1_1] ) )
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
    if( ! refalrts::alloc_name( n3, & NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_2] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sNumber_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.Number#1
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

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
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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

static refalrts::FnResult FindAllocForCopiedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eSet1_B_1_1 = 16 };
    enum { __eSet1_E_1_1 = 18 };
    enum { __sNumber_1_1 = 20 };
    enum { __eCommon_1_1 = 21 };
    enum { __eSet2_B_1_1 = 23 };
    enum { __eSet2_E_1_1 = 25 };
    enum { __eCommon_1_2 = 27 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FindAllocForCopiedVars, "FindAllocForCopiedVars" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEPrepare, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[12], & context[13], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::icContextSet, 0, 0, __eSet1_E_1_1, 10},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eCommon_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eSet2_B_1_1, 12},
      {refalrts::icEStart, 0, 0, __eSet2_B_1_1, 12},
      {refalrts::icEPush, 0, 0, 0, 12},
      {refalrts::icSave, & context[14], & context[15], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 14},
      {refalrts::iceRepeatLeft, (void*)__eCommon_1_2, (void*)__eCommon_1_1, 0, 8},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icContextSet, 0, 0, __eSet2_E_1_1, 14},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommon_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 ( s.Number#1 e.Common#1 ) e.Set1_E#1 ) ( e.Set2_B#1 ( e.Common#1 ) e.Set2_E#1 )
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
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[12] = context[4];
      context[13] = context[5];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
        continue;
      context[__eSet1_E_1_1] = context[10];
      context[__eSet1_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[6], context[7] ) )
        continue;
      context[__eCommon_1_1] = context[6];
      context[__eCommon_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      do {
        context[14] = context[12];
        context[15] = context[13];
        context[8] = 0;
        context[9] = 0;
        if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eCommon_1_2], context[__eCommon_1_2 + 1], context[__eCommon_1_1], context[__eCommon_1_1 + 1], context[8], context[9] ) )
          continue;
        if( ! refalrts::empty_seq( context[8], context[9] ) )
          continue;
        context[__eSet2_E_1_1] = context[14];
        context[__eSet2_E_1_1 + 1] = context[15];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
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
        if( ! refalrts::alloc_name( n3, & FindAllocForCopiedVars, "FindAllocForCopiedVars" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
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
        if( ! refalrts::alloc_close_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n8 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n6, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        refalrts::link_brackets( n0, n1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, context[__eCommon_1_1], context[__eCommon_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[12], context[13] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
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
    // Unused closed variable e.Set1#1
    // Unused closed variable e.Set2#1

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

static refalrts::FnResult GenInterpretPatternCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sNum_1_1 = 7 };
    enum { __sNumRanges_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiBracket, "CmdiBracket" },
      { & CmdBrackets, "CmdBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNum_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumRanges_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumRanges_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdBrackets s.Direction#1 s.Num#1 s.NumRanges#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdBrackets, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumRanges_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiBracket, "CmdiBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumRanges_1_1] );
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiContextSet, "CmdiContextSet" },
      { & AlgLeft, "AlgLeft" },
      { & CmdClosedE, "CmdClosedE" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdClosedE & AlgLeft s.BracketNumber#1 'e e.Index#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdClosedE, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiContextSet, "CmdiContextSet" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sNumber_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiNum, "CmdiNum" },
      { & CmdNumber, "CmdNumber" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdNumber s.Direction#1 s.BracketNumber#1 s.Number#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdNumber, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiNum, "CmdiNum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiIdent, "CmdiIdent" },
      { & CmdIdent, "CmdIdent" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdIdent s.Direction#1 s.BracketNumber#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdIdent, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiIdent, "CmdiIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eEtc_1_1 = 4 };
    enum { __sOldBracketNumber_1_1 = 6 };
    enum { __sNewBracketNumber_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiSave, "CmdiSave" },
      { & CmdSave, "CmdSave" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sOldBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNewBracketNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sOldBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNewBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdSave s.OldBracketNumber#1 s.NewBracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdSave, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sOldBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNewBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiSave, "CmdiSave" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNewBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sOldBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNum_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    enum { __sBracketNum_1_2 = 9 };
    enum { __eIndex_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiEStart, "CmdiEStart" },
      { & CmdiEPrepare, "CmdiEPrepare" },
      { & AlgLeft, "AlgLeft" },
      { & CmdOpenedE, "CmdOpenedE" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNum_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icCopySTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdOpenedE & AlgLeft s.BracketNum#1 'e e.Index#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdOpenedE, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sBracketNum_1_2], context[__sBracketNum_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiEPrepare, "CmdiEPrepare" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdiEStart, "CmdiEStart" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_2] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sChar_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiChar, "CmdiChar" },
      { & CmdChar, "CmdChar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdChar s.Direction#1 s.BracketNumber#1 s.Char#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdChar, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sChar_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiChar, "CmdiChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eName_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiName, "CmdiName" },
      { & CmdName, "CmdName" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdName s.Direction#1 s.BracketNumber#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdName, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiName, "CmdiName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sInnerBrackets_1_1 = 8 };
    enum { __eName_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiADT, "CmdiADT" },
      { & CmdADT, "CmdADT" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sInnerBrackets_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdADT s.Direction#1 s.BracketNumber#1 s.InnerBrackets#1 e.Name#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdADT, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiADT, "CmdiADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __eVarInfo_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiRepeat, "CmdiRepeat" },
      { & CmdRepeated, "CmdRepeated" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eVarInfo_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVarInfo_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdRepeated s.Direction#1 s.BracketNumber#1 e.VarInfo#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdRepeated, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    context[__eVarInfo_1_1] = context[2];
    context[__eVarInfo_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiRepeat, "CmdiRepeat" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eVarInfo_1_1], context[__eVarInfo_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eEtc_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiEmpty, "CmdiEmpty" },
      { & AlgLeft, "AlgLeft" },
      { & CmdEmpty, "CmdEmpty" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdEmpty & AlgLeft s.BracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdEmpty, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiEmpty, "CmdiEmpty" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eEtc_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sBracketNumber_1_1 = 7 };
    enum { __sMode_1_1 = 8 };
    enum { __eInfo_1_1 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdiVar, "CmdiVar" },
      { & CmdVar, "CmdVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eEtc_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eInfo_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eInfo_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdVar s.Direction#1 s.BracketNumber#1 s.Mode#1 e.Info#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdVar, context[2], context[3] ) )
      break;
    context[__eEtc_1_1] = context[0];
    context[__eEtc_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eInfo_1_1] = context[2];
    context[__eInfo_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiVar, "CmdiVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eEtc_1_1], context[__eEtc_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eInfo_1_1], context[__eInfo_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sDirection_1_1 = 4 };
    enum { __sBracketNumber_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & CmdEmpty, "CmdEmpty" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'y', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdEmpty s.Direction#1 s.BracketNumber#1 ) e.Etc#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdEmpty, context[2], context[3] ) )
      break;
    // Unused closed variable e.Etc#1
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, context[__sBracketNumber_1_1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
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
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __ePatternCommands_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Command#1 ) e.PatternCommands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.Command#1
    context[__ePatternCommands_1_1] = context[0];
    context[__ePatternCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
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
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GeneralizeResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __ePatternVars_2_1 = 8 };
    enum { __eResultVars_2_1 = 10 };
    enum { __eRepeatedEs_2_1 = 12 };
    enum { __eClosedEs_2_1 = 14 };
    enum { __ePatternVars_2_2 = 16 };
    enum { __eResultVars_2_2 = 18 };
    enum { __eResultVars_2_3 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & VarSetDifference, "VarSetDifference" },
      { & VarSetUnion, "VarSetUnion" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __ePatternVars_2_1, 2},
      {refalrts::icContextSet, 0, 0, __eResultVars_2_1, 4},
      {refalrts::icContextSet, 0, 0, __eRepeatedEs_2_1, 6},
      {refalrts::icContextSet, 0, 0, __eClosedEs_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __ePatternVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eClosedEs_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eRepeatedEs_2_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eResultVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternVars#2 ) ( e.ResultVars#2 ) ( e.RepeatedEs#2 ) e.ClosedEs#2
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
    context[__ePatternVars_2_1] = context[2];
    context[__ePatternVars_2_1 + 1] = context[3];
    context[__eResultVars_2_1] = context[4];
    context[__eResultVars_2_1 + 1] = context[5];
    context[__eRepeatedEs_2_1] = context[6];
    context[__eRepeatedEs_2_1 + 1] = context[7];
    context[__eClosedEs_2_1] = context[0];
    context[__eClosedEs_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternVars_2_2], context[__ePatternVars_2_2 + 1], context[__ePatternVars_2_1], context[__ePatternVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultVars_2_2], context[__eResultVars_2_2 + 1], context[__eResultVars_2_1], context[__eResultVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultVars_2_3], context[__eResultVars_2_3 + 1], context[__eResultVars_2_2], context[__eResultVars_2_2 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & VarSetUnion, "VarSetUnion" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
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
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
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
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_3], context[__eResultVars_2_3 + 1] );
    res = refalrts::splice_evar( res, context[__eRepeatedEs_2_1], context[__eRepeatedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, context[__eClosedEs_2_1], context[__eClosedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n9, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__ePatternVars_2_2], context[__ePatternVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_2], context[__eResultVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eResultVars_2_1], context[__eResultVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__ePatternVars_2_1], context[__ePatternVars_2_1 + 1] );
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

static refalrts::FnResult lambda_GeneralizeResult_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __ePatternCommands_1_1 = 8 };
    enum { __eCommonVars_2_1 = 10 };
    enum { __eCopiedVars_2_1 = 12 };
    enum { __eUnusedClosedEs_2_1 = 14 };
    enum { __eUnusedClosedEs_2_2 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" },
      { & Map, "Map" },
      { & VarSetDifference, "VarSetDifference" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __ePatternCommands_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommonVars_2_1, 4},
      {refalrts::icContextSet, 0, 0, __eCopiedVars_2_1, 6},
      {refalrts::icContextSet, 0, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommonVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eUnusedClosedEs_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.UnusedClosedEs#2
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
    context[__ePatternCommands_1_1] = context[2];
    context[__ePatternCommands_1_1 + 1] = context[3];
    context[__eCommonVars_2_1] = context[4];
    context[__eCommonVars_2_1 + 1] = context[5];
    context[__eCopiedVars_2_1] = context[6];
    context[__eCopiedVars_2_1 + 1] = context[7];
    context[__eUnusedClosedEs_2_1] = context[0];
    context[__eUnusedClosedEs_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eUnusedClosedEs_2_2], context[__eUnusedClosedEs_2_2 + 1], context[__eUnusedClosedEs_2_1], context[__eUnusedClosedEs_2_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
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
    if( ! refalrts::alloc_close_call( n7 ) )
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
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & FilterUnusedCmdClosedE, "FilterUnusedCmdClosedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eUnusedClosedEs_2_2], context[__eUnusedClosedEs_2_2 + 1] );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eUnusedClosedEs_2_1], context[__eUnusedClosedEs_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommonVars_2_1], context[__eCommonVars_2_1 + 1] );
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

static refalrts::FnResult lambda_GeneralizeResult_2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sNumBrackets_1_1 = 6 };
    enum { __eCommonVars_2_1 = 7 };
    enum { __eCopiedVars_2_1 = 9 };
    enum { __eEtc_2_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & NumerateVars, "NumerateVars" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumBrackets_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eCommonVars_2_1, 2},
      {refalrts::icContextSet, 0, 0, __eCopiedVars_2_1, 4},
      {refalrts::icContextSet, 0, 0, __eEtc_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumBrackets_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommonVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // s.NumBrackets#1 ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.Etc#2
    if( ! refalrts::svar_left( context[__sNumBrackets_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eCommonVars_2_1] = context[2];
    context[__eCommonVars_2_1 + 1] = context[3];
    context[__eCopiedVars_2_1] = context[4];
    context[__eCopiedVars_2_1 + 1] = context[5];
    context[__eEtc_2_1] = context[0];
    context[__eEtc_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & NumerateVars, "NumerateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
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
    res = refalrts::splice_evar( res, context[__eEtc_2_1], context[__eEtc_2_1 + 1] );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eCommonVars_2_1], context[__eCommonVars_2_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNumBrackets_1_1] );
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

static refalrts::FnResult lambda_GeneralizeResult_3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __eNCommonVars_2_1 = 8 };
    enum { __eCopiedVars_2_1 = 10 };
    enum { __eEtc_2_1 = 12 };
    enum { __sNumber_2_1 = 14 };
    enum { __eNCommonVars_2_2 = 15 };
    enum { __eCopiedVars_2_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FindAllocForCopiedVars, "FindAllocForCopiedVars" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 2},
      {refalrts::icContextSet, 0, 0, __eNCommonVars_2_1, 2},
      {refalrts::icContextSet, 0, 0, __eCopiedVars_2_1, 4},
      {refalrts::icContextSet, 0, 0, __eEtc_2_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sNumber_2_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eEtc_2_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.NCommonVars#2 ( s.Number#2 ) ) ( e.CopiedVars#2 ) e.Etc#2
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
    if( ! refalrts::brackets_right( context[6], context[7], context[2], context[3] ) )
      break;
    context[__eNCommonVars_2_1] = context[2];
    context[__eNCommonVars_2_1 + 1] = context[3];
    context[__eCopiedVars_2_1] = context[4];
    context[__eCopiedVars_2_1 + 1] = context[5];
    context[__eEtc_2_1] = context[0];
    context[__eEtc_2_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNumber_2_1], context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eNCommonVars_2_2], context[__eNCommonVars_2_2 + 1], context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eCopiedVars_2_2], context[__eCopiedVars_2_2 + 1], context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] ) )
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
    if( ! refalrts::alloc_name( n4, & FindAllocForCopiedVars, "FindAllocForCopiedVars" ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
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
    res = refalrts::splice_evar( res, context[__eEtc_2_1], context[__eEtc_2_1 + 1] );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_2], context[__eCopiedVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_2], context[__eNCommonVars_2_2 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_2_1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] );
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

static refalrts::FnResult lambda_GeneralizeResult_4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 31 elems
    refalrts::Iter context[31];
    refalrts::zeros( context, 31 );
    enum { __eResultAllocCommands_1_1 = 12 };
    enum { __eResultCommands_1_1 = 14 };
    enum { __eNCommonVars_2_1 = 16 };
    enum { __sNumber_2_1 = 18 };
    enum { __eMCopiedVars_2_1 = 19 };
    enum { __eCopiedVars_2_1 = 21 };
    enum { __ePatternCommands_2_1 = 23 };
    enum { __ePatternCommands_2_2 = 25 };
    enum { __eResultAllocCommands_1_2 = 27 };
    enum { __eResultCommands_1_2 = 29 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdEndIf, "CmdEndIf" },
      { & CmdReturnResult, "CmdReturnResult" },
      { & MakeCopyVar, "MakeCopyVar" },
      { & Map, "Map" },
      { & CmdEmptyResult, "CmdEmptyResult" },
      { & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" },
      { & CmdElse, "CmdElse" },
      { & CmdiRunInterpret, "CmdiRunInterpret" },
      { & CmdFinRAA, "CmdFinRAA" },
      { & FoldAllocCommands, "FoldAllocCommands" },
      { & MakeInterpCommands, "MakeInterpCommands" },
      { & GenInterpretPatternCommand, "GenInterpretPatternCommand" },
      { & CmdInitRAA, "CmdInitRAA" },
      { & OutlineConstants, "OutlineConstants" },
      { & PrepareOpenEStack, "PrepareOpenEStack" },
      { & CmdIfDef, "CmdIfDef" },
      { & CmdInitB0, "CmdInitB0" },
      { & MakeDeclaration, "MakeDeclaration" },
      { & CmdIssueMem, "CmdIssueMem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eResultAllocCommands_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eResultCommands_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eNCommonVars_2_1, 6},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumber_2_1, 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 10, 0},
      {refalrts::icContextSet, 0, 0, __eMCopiedVars_2_1, 8},
      {refalrts::icContextSet, 0, 0, __eCopiedVars_2_1, 10},
      {refalrts::icContextSet, 0, 0, __ePatternCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 18, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 17, 0},
      {refalrts::icSpliceEVar, 0, 0, __eNCommonVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 16, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 15, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 14, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 13, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 12, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 11, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 9, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 8, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 7, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 6, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icCopyEVar, 0, 0, __ePatternCommands_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCopiedVars_2_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icCopyEVar, 0, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 ) ( e.NCommonVars#2 ) s.Number#2 ( e.MCopiedVars#2 ) ( e.CopiedVars#2 ) e.PatternCommands#2
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
    context[__eResultAllocCommands_1_1] = context[2];
    context[__eResultAllocCommands_1_1 + 1] = context[3];
    context[__eResultCommands_1_1] = context[4];
    context[__eResultCommands_1_1 + 1] = context[5];
    context[__eNCommonVars_2_1] = context[6];
    context[__eNCommonVars_2_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNumber_2_1], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      break;
    context[__eMCopiedVars_2_1] = context[8];
    context[__eMCopiedVars_2_1 + 1] = context[9];
    context[__eCopiedVars_2_1] = context[10];
    context[__eCopiedVars_2_1 + 1] = context[11];
    context[__ePatternCommands_2_1] = context[0];
    context[__ePatternCommands_2_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternCommands_2_2], context[__ePatternCommands_2_2 + 1], context[__ePatternCommands_2_1], context[__ePatternCommands_2_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultAllocCommands_1_2], context[__eResultAllocCommands_1_2 + 1], context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eResultCommands_1_2], context[__eResultCommands_1_2 + 1], context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdIssueMem, "CmdIssueMem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdInitB0, "CmdInitB0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & PrepareOpenEStack, "PrepareOpenEStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_number( n18, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_number( n21, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CmdInitRAA, "CmdInitRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & GenInterpretPatternCommand, "GenInterpretPatternCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_open_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_call( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & CmdFinRAA, "CmdFinRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_number( n44, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & CmdiRunInterpret, "CmdiRunInterpret" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_open_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_name( n50, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_open_call( n52 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_name( n53, & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_open_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_name( n55, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_close_bracket( n56 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_open_call( n57 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_name( n58, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_name( n59, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_close_call( n60 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_open_bracket( n61 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_name( n62, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_close_bracket( n63 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_close_call( n64 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_open_bracket( n65 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_name( n66, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n67 = 0;
    if( ! refalrts::alloc_close_bracket( n67 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n65, n67 );
    res = refalrts::splice_elem( res, n67 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    refalrts::push_stack( n64 );
    refalrts::push_stack( n52 );
    res = refalrts::splice_elem( res, n64 );
    refalrts::link_brackets( n61, n63 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_2], context[__eResultCommands_1_2 + 1] );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_2], context[__eResultAllocCommands_1_2 + 1] );
    refalrts::push_stack( n60 );
    refalrts::push_stack( n57 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_evar( res, context[__eCopiedVars_2_1], context[__eCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    refalrts::link_brackets( n54, n56 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_2_2], context[__ePatternCommands_2_2 + 1] );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    refalrts::link_brackets( n49, n51 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::link_brackets( n46, n48 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::push_stack( n43 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n40, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n29 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::push_stack( n38 );
    refalrts::push_stack( n34 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n31, n33 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_evar( res, context[__eMCopiedVars_2_1], context[__eMCopiedVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_2_1], context[__ePatternCommands_2_1 + 1] );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n23, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n20, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eNCommonVars_2_1], context[__eNCommonVars_2_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_2_1] );
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

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __ePatternVars_1_1 = 12 };
    enum { __ePatternCommands_1_1 = 14 };
    enum { __eResultVars_1_1 = 16 };
    enum { __eResultAllocCommands_1_1 = 18 };
    enum { __eResultCommands_1_1 = 20 };
    enum { __sNumBrackets_1_1 = 22 };
    enum { __ePatternCommands_1_2 = 23 };
    enum { __ePatternCommands_1_3 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" },
      { & refalrts::create_closure, "refalrts::create_closure" },
      { & lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" },
      { & lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" },
      { & lambda_GeneralizeResult_1, "lambda_GeneralizeResult_1" },
      { & lambda_GeneralizeResult_0, "lambda_GeneralizeResult_0" },
      { & Seq, "Seq" },
      { & ClosedEVariables, "ClosedEVariables" },
      { & Map, "Map" },
      { & RepeatedEVariables, "RepeatedEVariables" },
      { & ReplicateVars, "ReplicateVars" },
      { & Fetch, "Fetch" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icBracketRight, 0, 0, 8, 0},
      {refalrts::icBracketRight, 0, 0, 10, 0},
      {refalrts::icContextSet, 0, 0, __ePatternVars_1_1, 2},
      {refalrts::icContextSet, 0, 0, __ePatternCommands_1_1, 10},
      {refalrts::icContextSet, 0, 0, __eResultVars_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eResultAllocCommands_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eResultCommands_1_1, 4},
      {refalrts::icsVarLeft, & context[0], & context[1], __sNumBrackets_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 11, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 10, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 8, 0},
      {refalrts::icFunc, 0, 0, 9, 0},
      {refalrts::icSpliceEVar, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 8, 0},
      {refalrts::icFunc, 0, 0, 7, 0},
      {refalrts::icCopyEVar, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 6, 0},
      {refalrts::icFunc, 0, 0, 5, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __ePatternCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumBrackets_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultAllocCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eResultCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.PatternVars#1 ) s.NumBrackets#1 ( e.PatternCommands#1 ) ( e.ResultVars#1 ) ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_right( context[8], context[9], context[0], context[1] ) )
      break;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_right( context[10], context[11], context[0], context[1] ) )
      break;
    context[__ePatternVars_1_1] = context[2];
    context[__ePatternVars_1_1 + 1] = context[3];
    context[__ePatternCommands_1_1] = context[10];
    context[__ePatternCommands_1_1 + 1] = context[11];
    context[__eResultVars_1_1] = context[8];
    context[__eResultVars_1_1 + 1] = context[9];
    context[__eResultAllocCommands_1_1] = context[6];
    context[__eResultAllocCommands_1_1 + 1] = context[7];
    context[__eResultCommands_1_1] = context[4];
    context[__eResultCommands_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNumBrackets_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1], context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__ePatternCommands_1_3], context[__ePatternCommands_1_3 + 1], context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & RepeatedEVariables, "RepeatedEVariables" ) )
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
    if( ! refalrts::alloc_name( n19, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & ClosedEVariables, "ClosedEVariables" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, & Seq, "Seq" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & lambda_GeneralizeResult_0, "lambda_GeneralizeResult_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_name( n26, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & lambda_GeneralizeResult_1, "lambda_GeneralizeResult_1" ) )
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
    if( ! refalrts::alloc_open_call( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_name( n32, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & lambda_GeneralizeResult_2, "lambda_GeneralizeResult_2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_call( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & lambda_GeneralizeResult_3, "lambda_GeneralizeResult_3" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & lambda_GeneralizeResult_4, "lambda_GeneralizeResult_4" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_open_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_close_call( n44 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n45 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n45 );
    refalrts::push_stack( n44 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elem( res, n44 );
    refalrts::push_stack( n43 );
    refalrts::push_stack( n36 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::link_brackets( n41, n42 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, context[__eResultCommands_1_1], context[__eResultCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n41 );
    refalrts::link_brackets( n39, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_evar( res, context[__eResultAllocCommands_1_1], context[__eResultAllocCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::push_stack( n34 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_stvar( res, context[__sNumBrackets_1_1] );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_3], context[__ePatternCommands_1_3 + 1] );
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
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_2], context[__ePatternCommands_1_2 + 1] );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n12, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, context[__ePatternCommands_1_1], context[__ePatternCommands_1_1 + 1] );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eResultVars_1_1], context[__eResultVars_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__ePatternVars_1_1], context[__ePatternVars_1_1 + 1] );
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

extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sMode_1_1 = 4 };
    enum { __eIndex_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumLeft, (void*)1 , 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( 1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::number_left( 1UL, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __sUsing_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    enum { __sUsing_1_2 = 8 };
    enum { __sMode_1_2 = 9 };
    enum { __eIndex_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Dec, "Dec" },
      { & ReplicateVar, "ReplicateVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsing_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsing_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sUsing_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Using#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsing_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sUsing_1_2], context[__sUsing_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sMode_1_2], context[__sMode_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Dec, "Dec" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_2] );
    res = refalrts::splice_stvar( res, context[__sUsing_1_2] );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sUsing_1_1] );
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

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eVars_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ReplicateVar, "ReplicateVar" },
      { & Map, "Map" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVars_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Vars#1
    context[__eVars_1_1] = context[0];
    context[__eVars_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ReplicateVar, "ReplicateVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eVars_1_1], context[__eVars_1_1 + 1] );
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

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eSet1_B_1_1 = 12 };
    enum { __tCommon_1_1 = 14 };
    enum { __eSet1_E_1_1 = 15 };
    enum { __eSet2_B_1_1 = 17 };
    enum { __eSet2_E_1_1 = 19 };
    enum { __tCommon_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & VarSetUnion, "VarSetUnion" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEPrepare, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[6], & context[7], 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[8], & context[9], 0},
      {refalrts::ictVarLeft, & context[6], & context[7], __tCommon_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eSet1_E_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eSet2_B_1_1, 8},
      {refalrts::icEStart, 0, 0, __eSet2_B_1_1, 8},
      {refalrts::icEPush, 0, 0, 0, 8},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::ictRepeatLeft, (void*)__tCommon_1_2, (void*)__tCommon_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eSet2_E_1_1, 10},
      {refalrts::icSpliceSTVar, 0, 0, __tCommon_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
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
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[8] = context[4];
      context[9] = context[5];
      if( ! refalrts::tvar_left( context[__tCommon_1_1], context[6], context[7] ) )
        continue;
      context[__eSet1_E_1_1] = context[6];
      context[__eSet1_E_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[__tCommon_1_2], context[__tCommon_1_1], context[10], context[11] ) )
          continue;
        context[__eSet2_E_1_1] = context[10];
        context[__eSet2_E_1_1 + 1] = context[11];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & VarSetUnion, "VarSetUnion" ) )
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
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, context[__tCommon_1_1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eSet1_1_1 = 6 };
    enum { __eSet2_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eSet1_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eSet2_1_1, 4},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
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
    context[__eSet1_1_1] = context[2];
    context[__eSet1_1_1 + 1] = context[3];
    context[__eSet2_1_1] = context[4];
    context[__eSet2_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eSet2_1_1], context[__eSet2_1_1 + 1] );
    res = refalrts::splice_evar( res, context[__eSet1_1_1], context[__eSet1_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eSet1_B_1_1 = 12 };
    enum { __eSet1_E_1_1 = 14 };
    enum { __eSet2_B_1_1 = 16 };
    enum { __eSet2_E_1_1 = 18 };
    enum { __tCommon_1_1 = 20 };
    enum { __tCommon_1_2 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & VarSetDifference, "VarSetDifference" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEPrepare, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eSet1_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[6], & context[7], 0},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[8], & context[9], 0},
      {refalrts::ictVarLeft, & context[6], & context[7], __tCommon_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eSet1_E_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eSet2_B_1_1, 8},
      {refalrts::icEStart, 0, 0, __eSet2_B_1_1, 8},
      {refalrts::icEPush, 0, 0, 0, 8},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::ictRepeatLeft, (void*)__tCommon_1_2, (void*)__tCommon_1_1, 0, 10},
      {refalrts::icContextSet, 0, 0, __eSet2_E_1_1, 10},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSet2_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
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
    context[__eSet1_B_1_1] = 0;
    context[__eSet1_B_1_1 + 1] = 0;
    do {
      context[6] = context[2];
      context[7] = context[3];
      context[8] = context[4];
      context[9] = context[5];
      if( ! refalrts::tvar_left( context[__tCommon_1_1], context[6], context[7] ) )
        continue;
      context[__eSet1_E_1_1] = context[6];
      context[__eSet1_E_1_1 + 1] = context[7];
      context[__eSet2_B_1_1] = 0;
      context[__eSet2_B_1_1 + 1] = 0;
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[__tCommon_1_2], context[__tCommon_1_1], context[10], context[11] ) )
          continue;
        context[__eSet2_E_1_1] = context[10];
        context[__eSet2_E_1_1 + 1] = context[11];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & VarSetDifference, "VarSetDifference" ) )
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
        if( ! refalrts::alloc_close_call( n6 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n6 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n6 );
        refalrts::link_brackets( n4, n5 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eSet2_E_1_1], context[__eSet2_E_1_1 + 1] );
        res = refalrts::splice_evar( res, context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1] );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eSet1_E_1_1], context[__eSet1_E_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eSet2_B_1_1], context[__eSet2_B_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eSet1_B_1_1], context[__eSet1_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eSet1_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eSet1_1_1, 2},
      {refalrts::icSpliceEVar, 0, 0, __eSet1_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Set1#1 ) ( e.Set2#1 )
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
    context[__eSet1_1_1] = context[2];
    context[__eSet1_1_1 + 1] = context[3];
    // Unused closed variable e.Set2#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eSet1_1_1], context[__eSet1_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ClosedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eIndex_1_1 = 4 };
    enum { __sNum_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdClosedE, "CmdClosedE" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNum_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdClosedE & AlgLeft s.Num#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdClosedE, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tOther_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Other#1
    if( ! refalrts::tvar_left( context[__tOther_1_1], context[0], context[1] ) )
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

static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __eIndex_1_1 = 4 };
    enum { __sDirection_1_1 = 6 };
    enum { __sNum_1_1 = 7 };
    enum { __sCount_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdRepeated, "CmdRepeated" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNum_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCount_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( & CmdRepeated s.Direction#1 s.Num#1 s.Count#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdRepeated, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sCount_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOther_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tOther_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // t.Other#1
    if( ! refalrts::tvar_left( context[__tOther_1_1], context[0], context[1] ) )
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

static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __sDepth_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sNum_1_1 = 11 };
    enum { __sDepth_1_2 = 12 };
    enum { __eIndex_1_2 = 13 };
    enum { __eUnuseds_B_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" },
      { & CmdComment, "CmdComment" },
      { & AlgLeft, "AlgLeft" },
      { & CmdClosedE, "CmdClosedE" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 3, 2},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNum_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icsVarRight, & context[2], & context[3], __sDepth_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, 0, __eUnuseds_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eUnuseds_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[6], & context[7], 0},
      {refalrts::icBracketLeft, 0, 0, 4, 6},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icNumLeft, (void*)1 , 0, 0},
      {refalrts::icCharLeft, & context[4], & context[5], (int)'e', 0},
      {refalrts::iceRepeatLeft, (void*)__eIndex_1_2, (void*)__eIndex_1_1, 0, 4},
      {refalrts::icsRepeatLeft, (void*)__sDepth_1_2, (void*)__sDepth_1_1, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'v', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icChar, 0, 0, '#', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unuseds_B#1 ( 1 'e e.Index#1 s.Depth#1 ) e.Unuseds_E#1 ( & CmdClosedE & AlgLeft s.Num#1 'e e.Index#1 s.Depth#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdClosedE, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNum_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eUnuseds_B_1_1] = 0;
    context[__eUnuseds_B_1_1 + 1] = 0;
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::number_left( 1UL, context[4], context[5] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sDepth_1_2], context[__sDepth_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;
      // Unused closed variable e.Unuseds_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & CmdComment, "CmdComment" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_char( n2, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'U' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'n' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_char( n5, 'u' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_char( n6, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_char( n8, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_char( n10, 'c' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 'o' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_char( n13, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_char( n14, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_char( n15, 'd' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_char( n17, 'v' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'r' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'i' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'a' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'b' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_char( n23, 'l' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, ' ' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_char( n26, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_char( n27, '.' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_char( n28, '#' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_call( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & StrFromInt, "StrFromInt" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_call( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n32 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::push_stack( n31 );
      refalrts::push_stack( n29 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
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
    } while ( refalrts::open_evar_advance( context[__eUnuseds_B_1_1], context[__eUnuseds_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __tOtherCommand_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarRight, & context[0], & context[1], __tOtherCommand_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tOtherCommand_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Unuseds#1 t.OtherCommand#1
    if( ! refalrts::tvar_right( context[__tOtherCommand_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.Unuseds#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tOtherCommand_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdDeclareEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdDeclareVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdDeclareEVar, "CmdDeclareEVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdDeclareEVar, "CmdDeclareEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __sNumber_1_1 = 4 };
    enum { __sUsings_1_1 = 5 };
    enum { __sMode_1_1 = 6 };
    enum { __eIndex_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdDeclareVar, "CmdDeclareVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
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

refalrts::FnResult CmdCopyEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdCopyVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sUsings_1_1 = 4 };
    enum { __eIndex_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdCopyEVar, "CmdCopyEVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 'e e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'e', context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdCopyEVar, "CmdCopyEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sUsings_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdCopyVar, "CmdCopyVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
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

refalrts::FnResult CmdArrChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrFunc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrInt(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrOB(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrCB(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrOADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrCADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrOC(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrCC(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrSplice(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdArrCopy(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult FoldAllocCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __eCommands_1_1 = 10 };
    enum { __sElemNo_1_1 = 12 };
    enum { __eAllocs_B_1_1 = 13 };
    enum { __eAllocs_E_1_1 = 15 };
    enum { __sType_1_1 = 17 };
    enum { __eValue_1_1 = 18 };
    enum { __sElemNo_1_2 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdInsertElem, "CmdInsertElem" },
      { & FoldAllocCommands, "FoldAllocCommands" },
      { & CmdAllocateElem, "CmdAllocateElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sElemNo_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEPrepare, 0, 0, __eAllocs_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eAllocs_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[8], & context[9], 0},
      {refalrts::icBracketLeft, 0, 0, 6, 8},
      {refalrts::icFuncLeft, 0, 0, 2, 6},
      {refalrts::icsRepeatLeft, (void*)__sElemNo_1_2, (void*)__sElemNo_1_1, 0, 6},
      {refalrts::icContextSet, 0, 0, __eAllocs_E_1_1, 8},
      {refalrts::icsVarLeft, & context[6], & context[7], __sType_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eValue_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_B_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sType_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sElemNo_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eValue_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs_B#1 ( & CmdAllocateElem s.ElemNo#1 s.Type#1 e.Value#1 ) e.Allocs_E#1 ) ( & CmdInsertElem s.ElemNo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[4], context[5] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sElemNo_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      break;
    context[__eAllocs_B_1_1] = 0;
    context[__eAllocs_B_1_1 + 1] = 0;
    do {
      context[8] = context[2];
      context[9] = context[3];
      context[6] = 0;
      context[7] = 0;
      if( ! refalrts::brackets_left( context[6], context[7], context[8], context[9] ) )
        continue;
      if( ! refalrts::function_left( & CmdAllocateElem, context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[__sElemNo_1_2], context[__sElemNo_1_1], context[6], context[7] ) )
        continue;
      context[__eAllocs_E_1_1] = context[8];
      context[__eAllocs_E_1_1 + 1] = context[9];
      if( ! refalrts::svar_left( context[__sType_1_1], context[6], context[7] ) )
        continue;
      context[__eValue_1_1] = context[6];
      context[__eValue_1_1 + 1] = context[7];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & FoldAllocCommands, "FoldAllocCommands" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_close_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & CmdInsertElem, "CmdInsertElem" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eValue_1_1], context[__eValue_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sElemNo_1_1] );
      res = refalrts::splice_stvar( res, context[__sType_1_1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eAllocs_E_1_1], context[__eAllocs_E_1_1 + 1] );
      res = refalrts::splice_evar( res, context[__eAllocs_B_1_1], context[__eAllocs_B_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eAllocs_B_1_1], context[__eAllocs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sUsings_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdInsertVar, "CmdInsertVar" },
      { & FoldAllocCommands, "FoldAllocCommands" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[4], context[5] ) )
      break;
    context[__eIndex_1_1] = context[4];
    context[__eIndex_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdInsertVar, "CmdInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    enum { __sUsings_1_1 = 10 };
    enum { __sMode_1_1 = 11 };
    enum { __eIndex_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdInsertVar, "CmdInsertVar" },
      { & FoldAllocCommands, "FoldAllocCommands" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[4], context[5] ) )
      break;
    context[__eIndex_1_1] = context[4];
    context[__eIndex_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdInsertVar, "CmdInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FoldAllocCommands, "FoldAllocCommands" },
      { & CmdLinkBrackets, "CmdLinkBrackets" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 4},
      {refalrts::icContextSet, 0, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( & CmdLinkBrackets e.CmdInfo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdLinkBrackets, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    // Unused closed variable e.CmdInfo#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eAllocs_1_1 = 6 };
    enum { __eCommands_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FoldAllocCommands, "FoldAllocCommands" },
      { & CmdPushStack, "CmdPushStack" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 4},
      {refalrts::icContextSet, 0, 0, __eAllocs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eAllocs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Allocs#1 ) ( & CmdPushStack e.CmdInfo#1 ) e.Commands#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdPushStack, context[4], context[5] ) )
      break;
    context[__eAllocs_1_1] = context[2];
    context[__eAllocs_1_1 + 1] = context[3];
    // Unused closed variable e.CmdInfo#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FoldAllocCommands, "FoldAllocCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eAllocs_1_1], context[__eAllocs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
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
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
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

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __sMode_1_1 = 8 };
    enum { __eIndex_1_1 = 9 };
    enum { __sUsings_1_1 = 11 };
    enum { __sUsings_1_2 = 12 };
    enum { __sMode_1_2 = 13 };
    enum { __eIndex_1_2 = 14 };
    enum { __eCopiedVars_B_1_1 = 16 };
    enum { __sNumber_1_1 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrCopy, "CmdArrCopy" },
      { & CmdInsertVar, "CmdInsertVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icEPrepare, 0, 0, __eCopiedVars_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eCopiedVars_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[6], & context[7], 0},
      {refalrts::icBracketLeft, 0, 0, 4, 6},
      {refalrts::iceRepeatRight, (void*)__eIndex_1_2, (void*)__eIndex_1_1, 0, 4},
      {refalrts::icsRepeatRight, (void*)__sMode_1_2, (void*)__sMode_1_1, 0, 4},
      {refalrts::icsRepeatRight, (void*)__sUsings_1_2, (void*)__sUsings_1_1, 0, 4},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars_B#1 ( s.Number#1 s.Usings#1 s.Mode#1 e.Index#1 ) e.CopiedVars_E#1 ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];
    context[__eCopiedVars_B_1_1] = 0;
    context[__eCopiedVars_B_1_1 + 1] = 0;
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_left( context[4], context[5], context[6], context[7] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sMode_1_2], context[__sMode_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::repeated_stvar_right( context[__sUsings_1_2], context[__sUsings_1_1], context[4], context[5] ) )
        continue;
      // Unused closed variable e.CopiedVars_E#1
      if( ! refalrts::svar_left( context[__sNumber_1_1], context[4], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[4], context[5] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & CmdArrCopy, "CmdArrCopy" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_close_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n2 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sMode_1_1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCopiedVars_B_1_1], context[__eCopiedVars_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __sUsings_1_1 = 4 };
    enum { __sMode_1_1 = 5 };
    enum { __eIndex_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrSplice, "CmdArrSplice" },
      { & CmdInsertVar, "CmdInsertVar" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sUsings_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sMode_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sUsings_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sMode_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sUsings_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sMode_1_1], context[2], context[3] ) )
      break;
    context[__eIndex_1_1] = context[2];
    context[__eIndex_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrSplice, "CmdArrSplice" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sMode_1_1] );
    res = refalrts::splice_stvar( res, context[__sUsings_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sValue_1_1 = 4 };
    enum { __sCounter_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrChar, "CmdArrChar" },
      { & ElChar, "ElChar" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sValue_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sValue_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElChar s.Counter#1 s.Value#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElChar, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sValue_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrChar, "CmdArrChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sValue_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sCounter_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrFunc, "CmdArrFunc" },
      { & ElName, "ElName" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElName s.Counter#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElName, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrFunc, "CmdArrFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __sNumber_1_1 = 4 };
    enum { __sCounter_1_1 = 5 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrInt, "CmdArrInt" },
      { & ElNumber, "ElNumber" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElNumber s.Counter#1 s.Number#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElNumber, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrInt, "CmdArrInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sCounter_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrIdent, "CmdArrIdent" },
      { & ElIdent, "ElIdent" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElIdent s.Counter#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElIdent, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrIdent, "CmdArrIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrOB, "CmdArrOB" },
      { & ElOpenBracket, "ElOpenBracket" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenBracket s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElOpenBracket, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrOB, "CmdArrOB" ) )
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
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrOADT, "CmdArrOADT" },
      { & ElOpenADT, "ElOpenADT" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenADT s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElOpenADT, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrOADT, "CmdArrOADT" ) )
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
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrOC, "CmdArrOC" },
      { & ElOpenCall, "ElOpenCall" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenCall s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElOpenCall, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrOC, "CmdArrOC" ) )
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
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrCB, "CmdArrCB" },
      { & ElCloseBracket, "ElCloseBracket" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseBracket s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElCloseBracket, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrCB, "CmdArrCB" ) )
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
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrCADT, "CmdArrCADT" },
      { & ElCloseADT, "ElCloseADT" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseADT s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElCloseADT, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrCADT, "CmdArrCADT" ) )
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
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sCounter_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrCC, "CmdArrCC" },
      { & ElCloseCall, "ElCloseCall" },
      { & CmdInsertElem, "CmdInsertElem" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icsVarLeft, & context[2], & context[3], __sCounter_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseCall s.Counter#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & ElCloseCall, context[2], context[3] ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( context[__sCounter_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdArrCC, "CmdArrCC" ) )
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
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __eName_1_1 = 4 };
    enum { __sNumber_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eName_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.Number#1 e.Name#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[2], context[3] ) )
      break;
    context[__eName_1_1] = context[2];
    context[__eName_1_1 + 1] = context[3];

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
    res = refalrts::splice_evar( res, context[__eName_1_1], context[__eName_1_1 + 1] );
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

static refalrts::FnResult OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 12 elems
    refalrts::Iter context[12];
    refalrts::zeros( context, 12 );
    enum { __eFuncs_1_1 = 6 };
    enum { __eLabels_1_1 = 8 };
    enum { __sNextFunc_1_1 = 10 };
    enum { __sNextLabel_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & RemoveNumber, "RemoveNumber" },
      { & Map, "Map" },
      { & CmdiLabelArray, "CmdiLabelArray" },
      { & CmdiFuncArray, "CmdiFuncArray" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextLabel_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 )
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
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiFuncArray, "CmdiFuncArray" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdiLabelArray, "CmdiLabelArray" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & RemoveNumber, "RemoveNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n13 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
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
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eLabels_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextFunc_1_1 = 16 };
    enum { __sDirection_1_1 = 17 };
    enum { __sBracketNum_1_1 = 18 };
    enum { __eFunc_1_1 = 19 };
    enum { __eFuncs_B_1_1 = 21 };
    enum { __eFuncs_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eFunc_1_2 = 26 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiName, "CmdiName" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 10},
      {refalrts::iceRepeatRight, (void*)__eFunc_1_2, (void*)__eFunc_1_1, 0, 8},
      {refalrts::icContextSet, 0, 0, __eFuncs_E_1_1, 10},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiName, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eFuncs_E_1_1] = context[10];
      context[__eFuncs_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdiName, "CmdiName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __eLabels_1_1 = 8 };
    enum { __eCommands_1_1 = 10 };
    enum { __sNextFunc_1_1 = 12 };
    enum { __eFuncs_1_1 = 13 };
    enum { __sDirection_1_1 = 15 };
    enum { __sBracketNum_1_1 = 16 };
    enum { __eFunc_1_1 = 17 };
    enum { __sNextFunc_1_2 = 19 };
    enum { __sNextFunc_1_3 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiName, "CmdiName" },
      { & Inc, "Inc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdiName s.Direction#1 s.BracketNum#1 e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiName, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CmdiName, "CmdiName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
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
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eLabels_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __eFunc_1_1 = 16 };
    enum { __sNextFunc_1_1 = 18 };
    enum { __eFuncs_B_1_1 = 19 };
    enum { __eFuncs_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eFunc_1_2 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrFunc, "CmdArrFunc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 10},
      {refalrts::iceRepeatRight, (void*)__eFunc_1_2, (void*)__eFunc_1_1, 0, 8},
      {refalrts::icContextSet, 0, 0, __eFuncs_E_1_1, 10},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdArrFunc e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdArrFunc, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eFuncs_E_1_1] = context[10];
      context[__eFuncs_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdArrFunc, "CmdArrFunc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __eLabels_1_1 = 8 };
    enum { __eCommands_1_1 = 10 };
    enum { __eFunc_1_1 = 12 };
    enum { __sNextFunc_1_1 = 14 };
    enum { __eFuncs_1_1 = 15 };
    enum { __sNextFunc_1_2 = 17 };
    enum { __sNextFunc_1_3 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrFunc, "CmdArrFunc" },
      { & Inc, "Inc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdArrFunc e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdArrFunc, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CmdArrFunc, "CmdArrFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
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
    // issue here memory for vars with 30 elems
    refalrts::Iter context[30];
    refalrts::zeros( context, 30 );
    enum { __eLabels_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextFunc_1_1 = 16 };
    enum { __sDirection_1_1 = 17 };
    enum { __sBracketNum_1_1 = 18 };
    enum { __sInnerBrackets_1_1 = 19 };
    enum { __eFunc_1_1 = 20 };
    enum { __eFuncs_B_1_1 = 22 };
    enum { __eFuncs_E_1_1 = 24 };
    enum { __sNum_1_1 = 26 };
    enum { __eFunc_1_2 = 27 };
    enum { __sNum_1_2 = 29 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiADT, "CmdiADT" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sInnerBrackets_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEStart, 0, 0, __eFuncs_B_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 10},
      {refalrts::iceRepeatRight, (void*)__eFunc_1_2, (void*)__eFunc_1_1, 0, 8},
      {refalrts::icContextSet, 0, 0, __eFuncs_E_1_1, 10},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs_B#1 ( s.Num#1 e.Func#1 ) e.Funcs_E#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiADT, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[6], context[7] ) )
      break;
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];
    context[__eFuncs_B_1_1] = 0;
    context[__eFuncs_B_1_1 + 1] = 0;
    do {
      context[10] = context[2];
      context[11] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eFunc_1_2], context[__eFunc_1_2 + 1], context[__eFunc_1_1], context[__eFunc_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eFuncs_E_1_1] = context[10];
      context[__eFuncs_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdiADT, "CmdiADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFuncs_E_1_1], context[__eFuncs_E_1_1 + 1] );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFuncs_B_1_1], context[__eFuncs_B_1_1 + 1], context[2], context[3] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 22 elems
    refalrts::Iter context[22];
    refalrts::zeros( context, 22 );
    enum { __eLabels_1_1 = 8 };
    enum { __eCommands_1_1 = 10 };
    enum { __sNextFunc_1_1 = 12 };
    enum { __eFuncs_1_1 = 13 };
    enum { __sDirection_1_1 = 15 };
    enum { __sBracketNum_1_1 = 16 };
    enum { __sInnerBrackets_1_1 = 17 };
    enum { __eFunc_1_1 = 18 };
    enum { __sNextFunc_1_2 = 20 };
    enum { __sNextFunc_1_3 = 21 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiADT, "CmdiADT" },
      { & Inc, "Inc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[2], & context[3], __sNextFunc_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sInnerBrackets_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFunc_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sInnerBrackets_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextFunc_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( s.NextFunc#1 e.Funcs#1 ) ( e.Labels#1 ) e.Commands#1 ( & CmdiADT s.Direction#1 s.BracketNum#1 s.InnerBrackets#1 e.Func#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiADT, context[6], context[7] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextFunc_1_1], context[2], context[3] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sInnerBrackets_1_1], context[6], context[7] ) )
      break;
    context[__eFunc_1_1] = context[6];
    context[__eFunc_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_2], context[__sNextFunc_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextFunc_1_3], context[__sNextFunc_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
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
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CmdiADT, "CmdiADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_3] );
    res = refalrts::splice_stvar( res, context[__sInnerBrackets_1_1] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n2, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFunc_1_1], context[__eFunc_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_2] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sNextFunc_1_1] );
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
    // issue here memory for vars with 29 elems
    refalrts::Iter context[29];
    refalrts::zeros( context, 29 );
    enum { __eFuncs_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __sNextLabel_1_1 = 16 };
    enum { __sDirection_1_1 = 17 };
    enum { __sBracketNum_1_1 = 18 };
    enum { __eLabel_1_1 = 19 };
    enum { __eLabels_B_1_1 = 21 };
    enum { __eLabels_E_1_1 = 23 };
    enum { __sNum_1_1 = 25 };
    enum { __eLabel_1_2 = 26 };
    enum { __sNum_1_2 = 28 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiIdent, "CmdiIdent" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextLabel_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabel_1_1, 6},
      {refalrts::icEPrepare, 0, 0, __eLabels_B_1_1, 4},
      {refalrts::icEStart, 0, 0, __eLabels_B_1_1, 4},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 10},
      {refalrts::iceRepeatRight, (void*)__eLabel_1_2, (void*)__eLabel_1_1, 0, 8},
      {refalrts::icContextSet, 0, 0, __eLabels_E_1_1, 10},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) e.Commands#1 ( & CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiIdent, context[6], context[7] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    context[__eLabel_1_1] = context[6];
    context[__eLabel_1_1 + 1] = context[7];
    context[__eLabels_B_1_1] = 0;
    context[__eLabels_B_1_1 + 1] = 0;
    do {
      context[10] = context[4];
      context[11] = context[5];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eLabel_1_2], context[__eLabel_1_2 + 1], context[__eLabel_1_1], context[__eLabel_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eLabels_E_1_1] = context[10];
      context[__eLabels_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdiIdent, "CmdiIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n4, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_E_1_1], context[__eLabels_E_1_1 + 1] );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1], context[4], context[5] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 21 elems
    refalrts::Iter context[21];
    refalrts::zeros( context, 21 );
    enum { __eFuncs_1_1 = 8 };
    enum { __eCommands_1_1 = 10 };
    enum { __sNextLabel_1_1 = 12 };
    enum { __eLabels_1_1 = 13 };
    enum { __sDirection_1_1 = 15 };
    enum { __sBracketNum_1_1 = 16 };
    enum { __eLabel_1_1 = 17 };
    enum { __sNextLabel_1_2 = 19 };
    enum { __sNextLabel_1_3 = 20 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiIdent, "CmdiIdent" },
      { & Inc, "Inc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextLabel_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icsVarLeft, & context[6], & context[7], __sDirection_1_1, 0},
      {refalrts::icsVarLeft, & context[6], & context[7], __sBracketNum_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabel_1_1, 6},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDirection_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) e.Commands#1 ( & CmdiIdent s.Direction#1 s.BracketNum#1 e.Label#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdiIdent, context[6], context[7] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sDirection_1_1], context[6], context[7] ) )
      break;
    if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[6], context[7] ) )
      break;
    context[__eLabel_1_1] = context[6];
    context[__eLabel_1_1 + 1] = context[7];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_2], context[__sNextLabel_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_3], context[__sNextLabel_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
    if( ! refalrts::alloc_name( n6, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CmdiIdent, "CmdiIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_3] );
    res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
    res = refalrts::splice_stvar( res, context[__sDirection_1_1] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_2] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFuncs_1_1 = 12 };
    enum { __eCommands_1_1 = 14 };
    enum { __eLabel_1_1 = 16 };
    enum { __sNextLabel_1_1 = 18 };
    enum { __eLabels_B_1_1 = 19 };
    enum { __eLabels_E_1_1 = 21 };
    enum { __sNum_1_1 = 23 };
    enum { __eLabel_1_2 = 24 };
    enum { __sNum_1_2 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrIdent, "CmdArrIdent" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabel_1_1, 6},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextLabel_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eLabels_B_1_1, 4},
      {refalrts::icEStart, 0, 0, __eLabels_B_1_1, 4},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icSave, & context[10], & context[11], 0},
      {refalrts::icBracketLeft, 0, 0, 8, 10},
      {refalrts::iceRepeatRight, (void*)__eLabel_1_2, (void*)__eLabel_1_1, 0, 8},
      {refalrts::icContextSet, 0, 0, __eLabels_E_1_1, 10},
      {refalrts::icsVarLeft, & context[8], & context[9], __sNum_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 8},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels_B#1 ( s.Num#1 e.Label#1 ) e.Labels_E#1 ) e.Commands#1 ( & CmdArrIdent e.Label#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdArrIdent, context[6], context[7] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eLabel_1_1] = context[6];
    context[__eLabel_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_B_1_1] = 0;
    context[__eLabels_B_1_1 + 1] = 0;
    do {
      context[10] = context[4];
      context[11] = context[5];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[10], context[11] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[__eLabel_1_2], context[__eLabel_1_2 + 1], context[__eLabel_1_1], context[__eLabel_1_1 + 1], context[8], context[9] ) )
        continue;
      context[__eLabels_E_1_1] = context[10];
      context[__eLabels_E_1_1 + 1] = context[11];
      if( ! refalrts::svar_left( context[__sNum_1_1], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sNum_1_2], context[__sNum_1_1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CmdArrIdent, "CmdArrIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n9, n11 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sNum_1_2] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
      refalrts::link_brackets( n4, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eLabels_E_1_1], context[__eLabels_E_1_1 + 1] );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNum_1_1] );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1] );
      res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eLabels_B_1_1], context[__eLabels_B_1_1 + 1], context[4], context[5] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __eFuncs_1_1 = 8 };
    enum { __eCommands_1_1 = 10 };
    enum { __eLabel_1_1 = 12 };
    enum { __sNextLabel_1_1 = 14 };
    enum { __eLabels_1_1 = 15 };
    enum { __sNextLabel_1_2 = 17 };
    enum { __sNextLabel_1_3 = 18 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdArrIdent, "CmdArrIdent" },
      { & Inc, "Inc" },
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabel_1_1, 6},
      {refalrts::icsVarLeft, & context[4], & context[5], __sNextLabel_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextLabel_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( s.NextLabel#1 e.Labels#1 ) e.Commands#1 ( & CmdArrIdent e.Label#1 )
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
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdArrIdent, context[6], context[7] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];
    context[__eLabel_1_1] = context[6];
    context[__eLabel_1_1 + 1] = context[7];
    if( ! refalrts::svar_left( context[__sNextLabel_1_1], context[4], context[5] ) )
      break;
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_2], context[__sNextLabel_1_1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( context[__sNextLabel_1_3], context[__sNextLabel_1_2] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
    if( ! refalrts::alloc_name( n6, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CmdArrIdent, "CmdArrIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_3] );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n4, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eLabel_1_1], context[__eLabel_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_2] );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, context[__sNextLabel_1_1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eFuncs_1_1 = 6 };
    enum { __eLabels_1_1 = 8 };
    enum { __tOtherCommand_1_1 = 10 };
    enum { __eCommands_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & OutlineConstants, "OutlineConstants" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eFuncs_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eLabels_1_1, 4},
      {refalrts::ictVarRight, & context[0], & context[1], __tOtherCommand_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFuncs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eLabels_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tOtherCommand_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // ( e.Funcs#1 ) ( e.Labels#1 ) e.Commands#1 t.OtherCommand#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eFuncs_1_1] = context[2];
    context[__eFuncs_1_1 + 1] = context[3];
    context[__eLabels_1_1] = context[4];
    context[__eLabels_1_1 + 1] = context[5];
    if( ! refalrts::tvar_right( context[__tOtherCommand_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & OutlineConstants, "OutlineConstants" ) )
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
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, context[__tOtherCommand_1_1] );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eLabels_1_1], context[__eLabels_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFuncs_1_1], context[__eFuncs_1_1 + 1] );
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

static refalrts::FnResult PrepareOpenEStack(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __sDepth_1_1 = 6 };
    enum { __eCommands_B_1_1 = 7 };
    enum { __eVarInfo_1_1 = 9 };
    enum { __eCommands_E_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Inc, "Inc" },
      { & PrepareOpenEStack, "PrepareOpenEStack" },
      { & CmdiEStart, "CmdiEStart" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, & context[0], & context[1], __sDepth_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[4], & context[5], 0},
      {refalrts::icBracketLeft, 0, 0, 2, 4},
      {refalrts::icFuncLeft, 0, 0, 2, 2},
      {refalrts::icContextSet, 0, 0, __eVarInfo_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_E_1_1, 4},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eVarInfo_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands_B#1 ( & CmdiEStart e.VarInfo#1 ) e.Commands_E#1 s.Depth#1
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
    do {
      context[4] = context[0];
      context[5] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( & CmdiEStart, context[2], context[3] ) )
        continue;
      context[__eVarInfo_1_1] = context[2];
      context[__eVarInfo_1_1 + 1] = context[3];
      context[__eCommands_E_1_1] = context[4];
      context[__eCommands_E_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & CmdiEStart, "CmdiEStart" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_close_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_call( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & PrepareOpenEStack, "PrepareOpenEStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n8 );
      refalrts::push_stack( n3 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      refalrts::link_brackets( n0, n2 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, context[__eVarInfo_1_1], context[__eVarInfo_1_1 + 1] );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sDepth_1_1 = 2 };
    enum { __eCommands_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdiReserveStack, "CmdiReserveStack" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, & context[0], & context[1], __sDepth_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sDepth_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1 s.Depth#1
    if( ! refalrts::svar_right( context[__sDepth_1_1], context[0], context[1] ) )
      break;
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdiReserveStack, "CmdiReserveStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sDepth_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eCommands_B_1_1 = 6 };
    enum { __eCommands_E_1_1 = 8 };
    enum { __sBracketNum_1_1 = 10 };
    enum { __eIndex_1_1 = 11 };
    enum { __sBracketNum_1_2 = 13 };
    enum { __eIndex_1_2 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & AlgLeft, "AlgLeft" },
      { & CmdOpenedE_End, "CmdOpenedE_End" },
      { & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" },
      { & CmdOpenedE_Start, "CmdOpenedE_Start" },
      { & CmdOpenedE, "CmdOpenedE" },
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEPrepare, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icSave, & context[4], & context[5], 0},
      {refalrts::icBracketLeft, 0, 0, 2, 4},
      {refalrts::icFuncLeft, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eCommands_E_1_1, 4},
      {refalrts::icsVarLeft, & context[2], & context[3], __sBracketNum_1_1, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'e', 0},
      {refalrts::icContextSet, 0, 0, __eIndex_1_1, 2},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icSpliceEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopySTVar, 0, 0, __sBracketNum_1_1, 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icCopyEVar, 0, 0, __eIndex_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands_B#1 ( & CmdOpenedE & AlgLeft s.BracketNum#1 'e e.Index#1 ) e.Commands_E#1
    context[__eCommands_B_1_1] = 0;
    context[__eCommands_B_1_1 + 1] = 0;
    do {
      context[4] = context[0];
      context[5] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, context[2], context[3] ) )
        continue;
      if( ! refalrts::function_left( & AlgLeft, context[2], context[3] ) )
        continue;
      context[__eCommands_E_1_1] = context[4];
      context[__eCommands_E_1_1 + 1] = context[5];
      if( ! refalrts::svar_left( context[__sBracketNum_1_1], context[2], context[3] ) )
        continue;
      if( ! refalrts::char_left( 'e', context[2], context[3] ) )
        continue;
      context[__eIndex_1_1] = context[2];
      context[__eIndex_1_1 + 1] = context[3];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( context[__sBracketNum_1_2], context[__sBracketNum_1_1] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( context[__eIndex_1_2], context[__eIndex_1_2 + 1], context[__eIndex_1_1], context[__eIndex_1_1 + 1] ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_bracket( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & CmdOpenedE_Start, "CmdOpenedE_Start" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_name( n2, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_char( n3, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_close_call( n7 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_open_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_name( n9, & CmdOpenedE_End, "CmdOpenedE_End" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_char( n11, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n8, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, context[__eIndex_1_2], context[__eIndex_1_2 + 1] );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_2] );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, context[__eCommands_E_1_1], context[__eCommands_E_1_1 + 1] );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, context[__eIndex_1_1], context[__eIndex_1_1 + 1] );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, context[__sBracketNum_1_1] );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eCommands_B_1_1], context[__eCommands_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eCommands_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { 0, 0 }
    };
    static const refalrts::RefalIdentifier labels[] = {
      0
    };
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eCommands_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommands_1_1, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[1];
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    //refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, context, arg_begin, arg_end, functions, labels, open_e_stack );
    if ( res == refalrts::cRecognitionImpossible )
      break;
    else
      return res;
#else
    // e.Commands#1
    context[__eCommands_1_1] = context[0];
    context[__eCommands_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eCommands_1_1], context[__eCommands_1_1 + 1] );
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
