// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_1_b_1;
    static refalrts::Iter ePattern_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    // ( e.Pattern#1 ) ( e.Result#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    ePattern_1_b_1 = bb_1;
    ePattern_1_e_1 = be_1;
    eResult_1_b_1 = bb_2;
    eResult_1_e_1 = be_2;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult, (void*) "GeneralizeResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
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

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_1_b_1;
    static refalrts::Iter ePattern_1_e_1;
    static refalrts::Iter sNumRanges_2_1;
    static refalrts::Iter eVars_2_b_1;
    static refalrts::Iter eVars_2_e_1;
    static refalrts::Iter eCommands_2_b_1;
    static refalrts::Iter eCommands_2_e_1;
    // ( e.Pattern#1 ) s.NumRanges#2 ( e.Vars#2 ) e.Commands#2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    ePattern_1_b_1 = bb_1;
    ePattern_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_2_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_2_b_1 = bb_2;
    eVars_2_e_1 = be_2;
    eCommands_2_b_1 = bb_0;
    eCommands_2_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_2_b_1, & eVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdComment, (void*) "CmdComment"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SaveBrackets, (void*) "SaveBrackets"},
      {refalrts::icSpliceSTVar, & sNumRanges_2_1},
      {refalrts::icSpliceEVar, & eCommands_2_b_1, & eCommands_2_e_1},
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
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n2, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eCommands_2_b_1, eCommands_2_e_1 );
    res = refalrts::splice_stvar( res, sNumRanges_2_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n3, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_2_b_1, eVars_2_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_1_b_1;
    static refalrts::Iter ePattern_1_e_1;
    static refalrts::Iter ePattern_1_b_2;
    static refalrts::Iter ePattern_1_e_2;
    // e.Pattern#1
    ePattern_1_b_1 = bb_0;
    ePattern_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GenPattern_0, (void*) "lambda_GenPattern_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePattern_1_b_1, & ePattern_1_e_1},
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
    if( ! refalrts::copy_evar( ePattern_1_b_2, ePattern_1_e_2, ePattern_1_b_1, ePattern_1_e_1 ) )
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
    if( ! refalrts::alloc_number( n4, 1UL ) )
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
    if( ! refalrts::alloc_name( n14, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & lambda_GenPattern_0, "lambda_GenPattern_0" ) )
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
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, ePattern_1_b_2, ePattern_1_e_2 );
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
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
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

static refalrts::FnResult DoGenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sChar_1_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkChar s.Char#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkChar, bb_4, be_4 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sChar_1_1, bb_4, be_4 ) )
        continue;
      if( ! refalrts::empty_seq( bb_4, be_4 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceSTVar, & sChar_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_stvar( res, sChar_1_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumber_1_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkNumber s.Number#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_4, be_4 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sNumber_1_1, bb_4, be_4 ) )
        continue;
      if( ! refalrts::empty_seq( bb_4, be_4 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceSTVar, & sNumber_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_stvar( res, sNumber_1_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkName e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_4;
      eName_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkIdentifier e.Name#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_4;
      eName_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sChar_1_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkChar s.Char#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkChar, bb_4, be_4 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sChar_1_1, bb_4, be_4 ) )
        continue;
      if( ! refalrts::empty_seq( bb_4, be_4 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceSTVar, & sChar_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_stvar( res, sChar_1_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumber_1_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkNumber s.Number#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_4, be_4 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sNumber_1_1, bb_4, be_4 ) )
        continue;
      if( ! refalrts::empty_seq( bb_4, be_4 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceSTVar, & sNumber_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_stvar( res, sNumber_1_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkName e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_4;
      eName_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkIdentifier e.Name#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_4;
      eName_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n4, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eSubRange_1_b_1;
    static refalrts::Iter eSubRange_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumRanges_1_2;
    static refalrts::Iter sNumRanges_1_3;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # Brackets e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::ident_left(  & Brackets<int>::name, bb_4, be_4 ) )
        continue;
      eSubRange_1_b_1 = bb_4;
      eSubRange_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eSubRange_1_b_1, & eSubRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_1_2, sNumRanges_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumRanges_1_3, sNumRanges_1_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
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
      res = refalrts::splice_stvar( res, sNumRanges_1_3 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eSubRange_1_b_1, eSubRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_2 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eSubRange_1_b_1;
    static refalrts::Iter eSubRange_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumRanges_1_2;
    static refalrts::Iter sNumRanges_1_3;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # Brackets e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::ident_left(  & Brackets<int>::name, bb_4, be_4 ) )
        continue;
      eSubRange_1_b_1 = bb_4;
      eSubRange_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eSubRange_1_b_1, & eSubRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_1_2, sNumRanges_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumRanges_1_3, sNumRanges_1_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
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
      res = refalrts::splice_stvar( res, sNumRanges_1_3 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eSubRange_1_b_1, eSubRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_2 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eSubRange_1_b_1;
    static refalrts::Iter eSubRange_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumRanges_1_2;
    static refalrts::Iter sNumRanges_1_3;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
        continue;
      eRanges_E_1_b_1 = bb_6;
      eRanges_E_1_e_1 = be_6;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, bb_4, be_4 ) )
        continue;
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_5;
      eName_1_e_1 = be_5;
      eSubRange_1_b_1 = bb_4;
      eSubRange_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eSubRange_1_b_1, & eSubRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_1_2, sNumRanges_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumRanges_1_3, sNumRanges_1_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_3 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eSubRange_1_b_1, eSubRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_2 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eSubRange_1_b_1;
    static refalrts::Iter eSubRange_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNumRanges_1_2;
    static refalrts::Iter sNumRanges_1_3;
    static refalrts::Iter sNum_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( # ADT_Brackets ( e.Name#1 ) e.SubRange#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, bb_4, be_4 ) )
        continue;
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
        continue;
      eName_1_b_1 = bb_5;
      eName_1_e_1 = be_5;
      eSubRange_1_b_1 = bb_4;
      eSubRange_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_6;
      eRanges_E_1_e_1 = be_6;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eSubRange_1_b_1, & eSubRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNumRanges_1_2, sNumRanges_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumRanges_1_3, sNumRanges_1_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
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
      if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
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
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_3 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n7, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eSubRange_1_b_1, eSubRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_2 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n5, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_0;
      refalrts::Iter be_4 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_4, be_4 ) )
        continue;
      eRanges_E_1_b_1 = bb_4;
      eRanges_E_1_e_1 = be_4;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdEmpty, (void*) "CmdEmpty"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    static refalrts::Iter eVars_B_1_b_1;
    static refalrts::Iter eVars_B_1_e_1;
    static refalrts::Iter eVars_E_1_b_1;
    static refalrts::Iter eVars_E_1_e_1;
    static refalrts::Iter sCount_1_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter sCount_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_7 = bb_2;
      refalrts::Iter be_7 = be_2;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
        continue;
      eRanges_E_1_b_1 = bb_6;
      eRanges_E_1_e_1 = be_6;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sMode_1_1, bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eVars_B_1_b_1 = 0;
      eVars_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_5 = 0;
        refalrts::Iter be_5 = 0;
        if( ! refalrts::brackets_left( bb_5, be_5, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_5, be_5 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_5, be_5 ) )
          continue;
        eVars_E_1_b_1 = bb_8;
        eVars_E_1_e_1 = be_8;
        if( ! refalrts::svar_left( sCount_1_1, bb_5, be_5 ) )
          continue;
        if( ! refalrts::empty_seq( bb_5, be_5 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
          {refalrts::icSpliceSTVar, & sNumRanges_1_1},
          {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_1_b_1, & eVars_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_1},
          {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_1_b_1, & eVars_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_2},
          {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_1_2, sCount_1_1 ) )
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
        res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
        res = refalrts::splice_stvar( res, sMode_1_2 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sCount_1_2 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eVars_E_1_b_1, eVars_E_1_e_1 );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
        res = refalrts::splice_stvar( res, sMode_1_1 );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sCount_1_1 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eVars_B_1_b_1, eVars_B_1_e_1 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
        res = refalrts::splice_stvar( res, sNumRanges_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eVars_B_1_b_1, eVars_B_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    static refalrts::Iter eVars_B_1_b_1;
    static refalrts::Iter eVars_B_1_e_1;
    static refalrts::Iter eVars_E_1_b_1;
    static refalrts::Iter eVars_E_1_e_1;
    static refalrts::Iter sCount_1_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter sCount_1_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable s.Mode#1 e.Index#1 ) ) e.Ranges_E#1 ( e.Vars_B#1 ( s.Count#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_7 = bb_2;
      refalrts::Iter be_7 = be_2;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      eRanges_E_1_b_1 = bb_6;
      eRanges_E_1_e_1 = be_6;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
      if( ! refalrts::svar_left( sMode_1_1, bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eVars_B_1_b_1 = 0;
      eVars_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_5 = 0;
        refalrts::Iter be_5 = 0;
        if( ! refalrts::brackets_left( bb_5, be_5, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_5, be_5 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_5, be_5 ) )
          continue;
        eVars_E_1_b_1 = bb_8;
        eVars_E_1_e_1 = be_8;
        if( ! refalrts::svar_left( sCount_1_1, bb_5, be_5 ) )
          continue;
        if( ! refalrts::empty_seq( bb_5, be_5 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
          {refalrts::icSpliceSTVar, & sNumRanges_1_1},
          {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_1_b_1, & eVars_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_1},
          {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_1_b_1, & eVars_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_2},
          {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icEnd}
        };
        refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
        refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
        return res;
#else

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_1_2, sCount_1_1 ) )
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
        res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
        res = refalrts::splice_stvar( res, sMode_1_2 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n15 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sCount_1_2 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n4, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eVars_E_1_b_1, eVars_E_1_e_1 );
        refalrts::link_brackets( n5, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
        res = refalrts::splice_stvar( res, sMode_1_1 );
        refalrts::push_stack( n8 );
        refalrts::push_stack( n6 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sCount_1_1 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eVars_B_1_b_1, eVars_B_1_e_1 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
        res = refalrts::splice_stvar( res, sNumRanges_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eVars_B_1_b_1, eVars_B_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 'e e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdClosedE, (void*) "CmdClosedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n2, n7 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n3, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 's e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 't e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable 's e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 e.Range#1 ( & TkVariable 't e.Index#1 ) ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    static refalrts::Iter eRanges_B_1_b_1;
    static refalrts::Iter eRanges_B_1_e_1;
    static refalrts::Iter eRanges_E_1_b_1;
    static refalrts::Iter eRanges_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eRange_1_b_1;
    static refalrts::Iter eRange_1_e_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // s.NumRanges#1 e.Ranges_B#1 ( s.Num#1 ( & TkVariable 'e e.Index#1 ) e.Range#1 ) e.Ranges_E#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    eRanges_B_1_b_1 = 0;
    eRanges_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      eRanges_E_1_b_1 = bb_5;
      eRanges_E_1_e_1 = be_5;
      if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
        continue;
      refalrts::Iter bb_4 = 0;
      refalrts::Iter be_4 = 0;
      if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_4, be_4 ) )
        continue;
      eIndex_1_b_1 = bb_4;
      eIndex_1_e_1 = be_4;
      eRange_1_b_1 = bb_3;
      eRange_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenPattern, (void*) "DoGenPattern"},
        {refalrts::icSpliceSTVar, & sNumRanges_1_1},
        {refalrts::icSpliceEVar, & eRanges_B_1_b_1, & eRanges_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icSpliceEVar, & eRange_1_b_1, & eRange_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eRanges_E_1_b_1, & eRanges_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n4, n9 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eRanges_E_1_b_1, eRanges_E_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eRange_1_b_1, eRange_1_e_1 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eRanges_B_1_b_1, eRanges_B_1_e_1 );
      res = refalrts::splice_stvar( res, sNumRanges_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eRanges_B_1_b_1, eRanges_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sNumRanges_1_1;
    // s.NumRanges#1 ( e.Vars#1 ) ( e.Commands#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_2;
    eVars_1_e_1 = be_2;
    eCommands_1_b_1 = bb_1;
    eCommands_1_e_1 = be_1;
    if( ! refalrts::svar_left( sNumRanges_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sNumRanges_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, sNumRanges_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // s.LastBracket#1 e.Commands#1
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter eCommands_E_1_b_1;
    static refalrts::Iter eCommands_E_1_e_1;
    static refalrts::Iter eCommandsBeforeEMatch_2_b_1;
    static refalrts::Iter eCommandsBeforeEMatch_2_e_1;
    static refalrts::Iter eCommandsBeforeEMatch_2_b_2;
    static refalrts::Iter eCommandsBeforeEMatch_2_e_2;
    // s.LastBracket#1 ( e.Commands_E#1 ) e.CommandsBeforeEMatch#2
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eCommands_E_1_b_1 = bb_1;
    eCommands_E_1_e_1 = be_1;
    eCommandsBeforeEMatch_2_b_1 = bb_0;
    eCommandsBeforeEMatch_2_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets_MakeSavers, (void*) "DoSaveBrackets_MakeSavers"},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ExtractBrackets, (void*) "ExtractBrackets"},
      {refalrts::icSpliceEVar, & eCommandsBeforeEMatch_2_b_1, & eCommandsBeforeEMatch_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eCommandsBeforeEMatch_2_b_1, & eCommandsBeforeEMatch_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eCommandsBeforeEMatch_2_b_2, eCommandsBeforeEMatch_2_e_2, eCommandsBeforeEMatch_2_b_1, eCommandsBeforeEMatch_2_e_1 ) )
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
    res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eCommandsBeforeEMatch_2_b_2, eCommandsBeforeEMatch_2_e_2 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommandsBeforeEMatch_2_b_1, eCommandsBeforeEMatch_2_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter eScanned_1_b_1;
    static refalrts::Iter eScanned_1_e_1;
    static refalrts::Iter eCommands_B_1_b_1;
    static refalrts::Iter eCommands_B_1_e_1;
    static refalrts::Iter eCommands_E_1_b_1;
    static refalrts::Iter eCommands_E_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands_B#1 ( & CmdOpenedE & AlgLeft s.Num#1 'e e.Index#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    eScanned_1_e_1 = be_1;
    eCommands_B_1_b_1 = 0;
    eCommands_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) )
        continue;
      if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) )
        continue;
      eCommands_E_1_b_1 = bb_3;
      eCommands_E_1_e_1 = be_3;
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      eIndex_1_e_1 = be_2;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
        {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
        {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
        {refalrts::icFunc, (void*) & lambda_DoSaveBrackets_0, (void*) "lambda_DoSaveBrackets_0"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
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
      res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      refalrts::link_brackets( n2, n6 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
      res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eScanned_1_b_1;
    static refalrts::Iter eScanned_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sLastBracket_1_1;
    // s.LastBracket#1 ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    eScanned_1_e_1 = be_1;
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoSaveBrackets_MakeSavers(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_DoSaveBrackets_MakeSavers_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter sCommand_2_1;
    static refalrts::Iter sDirection_2_1;
    static refalrts::Iter eInfo_2_b_1;
    static refalrts::Iter eInfo_2_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter sNum_1_2;
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.Num#1 e.Info#2 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sDirection_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::repeated_stvar_left( sNum_1_2, sNum_1_1, bb_1, be_1 ) )
      break;
    eInfo_2_b_1 = bb_1;
    eInfo_2_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sCommand_2_1},
      {refalrts::icSpliceSTVar, & sDirection_2_1},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icSpliceEVar, & eInfo_2_b_1, & eInfo_2_e_1},
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
    res = refalrts::splice_evar( res, eInfo_2_b_1, eInfo_2_e_1 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
    res = refalrts::splice_stvar( res, sDirection_2_1 );
    res = refalrts::splice_stvar( res, sCommand_2_1 );
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
    static refalrts::Iter sCommand_2_1;
    static refalrts::Iter sDirection_2_1;
    static refalrts::Iter sOtherNum_2_1;
    static refalrts::Iter eInfo_2_b_1;
    static refalrts::Iter eInfo_2_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter sLastBracket_1_1;
    // s.Num#1 s.LastBracket#1 ( s.Command#2 s.Direction#2 s.OtherNum#2 e.Info#2 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sDirection_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sOtherNum_2_1, bb_1, be_1 ) )
      break;
    eInfo_2_b_1 = bb_1;
    eInfo_2_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceSTVar, & sCommand_2_1},
      {refalrts::icSpliceSTVar, & sDirection_2_1},
      {refalrts::icSpliceSTVar, & sOtherNum_2_1},
      {refalrts::icSpliceEVar, & eInfo_2_b_1, & eInfo_2_e_1},
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
    res = refalrts::splice_evar( res, eInfo_2_b_1, eInfo_2_e_1 );
    res = refalrts::splice_stvar( res, sOtherNum_2_1 );
    res = refalrts::splice_stvar( res, sDirection_2_1 );
    res = refalrts::splice_stvar( res, sCommand_2_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter eScanned_1_b_1;
    static refalrts::Iter eScanned_1_e_1;
    static refalrts::Iter eBoundedBrackets_B_1_b_1;
    static refalrts::Iter eBoundedBrackets_B_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter sNum_1_2;
    static refalrts::Iter eBoundedBrackets_E_1_b_1;
    static refalrts::Iter eBoundedBrackets_E_1_e_1;
    static refalrts::Iter eCommands_B_1_b_1;
    static refalrts::Iter eCommands_B_1_e_1;
    static refalrts::Iter eCommands_E_1_b_1;
    static refalrts::Iter eCommands_E_1_e_1;
    static refalrts::Iter sCommand_1_1;
    static refalrts::Iter sDirection_1_1;
    static refalrts::Iter eArgs_1_b_1;
    static refalrts::Iter eArgs_1_e_1;
    static refalrts::Iter sLastBracket_1_2;
    static refalrts::Iter sLastBracket_1_3;
    static refalrts::Iter sNum_1_3;
    // s.LastBracket#1 ( e.BoundedBrackets_B#1 s.Num#1 e.BoundedBrackets_E#1 ) ( e.Scanned#1 ) e.Commands_B#1 ( s.Command#1 s.Direction#1 s.Num#1 e.Args#1 ) e.Commands_E#1
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_2;
    eScanned_1_e_1 = be_2;
    eBoundedBrackets_B_1_b_1 = 0;
    eBoundedBrackets_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_0;
      refalrts::Iter be_4 = be_0;
      refalrts::Iter bb_5 = bb_1;
      refalrts::Iter be_5 = be_1;
      if( ! refalrts::svar_left( sNum_1_1, bb_5, be_5 ) )
        continue;
      eBoundedBrackets_E_1_b_1 = bb_5;
      eBoundedBrackets_E_1_e_1 = be_5;
      eCommands_B_1_b_1 = 0;
      eCommands_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_6 = bb_4;
        refalrts::Iter be_6 = be_4;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
          continue;
        eCommands_E_1_b_1 = bb_6;
        eCommands_E_1_e_1 = be_6;
        if( ! refalrts::svar_left( sCommand_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::svar_left( sDirection_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
          continue;
        eArgs_1_b_1 = bb_3;
        eArgs_1_e_1 = be_3;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DoSaveBrackets_MakeSavers, (void*) "DoSaveBrackets_MakeSavers"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eBoundedBrackets_B_1_b_1, & eBoundedBrackets_B_1_e_1},
          {refalrts::icSpliceEVar, & eBoundedBrackets_E_1_b_1, & eBoundedBrackets_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdSave, (void*) "CmdSave"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icCopySTVar, & sLastBracket_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Map, (void*) "Map"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
          {refalrts::icFunc, (void*) & lambda_DoSaveBrackets_MakeSavers_0, (void*) "lambda_DoSaveBrackets_MakeSavers_0"},
          {refalrts::icSpliceSTVar, & sNum_1_2},
          {refalrts::icCopySTVar, & sLastBracket_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceSTVar, & sCommand_1_1},
          {refalrts::icSpliceSTVar, & sDirection_1_1},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icSpliceEVar, & eArgs_1_b_1, & eArgs_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
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
        if( ! refalrts::copy_stvar( sLastBracket_1_2, sLastBracket_1_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sLastBracket_1_3, sLastBracket_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_1_3, sNum_1_2 ) )
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
        if( ! refalrts::alloc_name( n3, & Inc, "Inc" ) )
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
        res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
        refalrts::link_brackets( n18, n19 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, eArgs_1_b_1, eArgs_1_e_1 );
        res = refalrts::splice_stvar( res, sNum_1_3 );
        res = refalrts::splice_stvar( res, sDirection_1_1 );
        res = refalrts::splice_stvar( res, sCommand_1_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
        refalrts::push_stack( n17 );
        refalrts::push_stack( n14 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sLastBracket_1_3 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        refalrts::link_brackets( n7, n11 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sLastBracket_1_2 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n5, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eBoundedBrackets_E_1_b_1, eBoundedBrackets_E_1_e_1 );
        res = refalrts::splice_evar( res, eBoundedBrackets_B_1_b_1, eBoundedBrackets_B_1_e_1 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::push_stack( n4 );
        refalrts::push_stack( n2 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eBoundedBrackets_B_1_b_1, eBoundedBrackets_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLastBracket_1_1;
    static refalrts::Iter eScanned_1_b_1;
    static refalrts::Iter eScanned_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // s.LastBracket#1 ( e.UnusedBoundedBrackets#1 ) ( e.Scanned#1 ) e.Commands#1
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    // Unused closed variable e.UnusedBoundedBrackets#1
    eScanned_1_b_1 = bb_2;
    eScanned_1_e_1 = be_2;
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_1_b_1, & eScanned_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScanned_1_b_1, eScanned_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sBracketNum_2_1;
    static refalrts::Iter sInnerNum_2_1;
    static refalrts::Iter sDirection_2_1;
    // ( & CmdBrackets s.Direction#2 s.BracketNum#2 s.InnerNum#2 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sInnerNum_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_2_1},
      {refalrts::icSpliceSTVar, & sInnerNum_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sInnerNum_2_1 );
    res = refalrts::splice_stvar( res, sBracketNum_2_1 );
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
    static refalrts::Iter sBracketNum_2_1;
    static refalrts::Iter sInnerNum_2_1;
    static refalrts::Iter sDirection_2_1;
    // ( & CmdADT s.Direction#2 s.BracketNum#2 s.InnerNum#2 e.Name#2 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdADT, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sInnerNum_2_1, bb_1, be_1 ) )
      break;
    // Unused closed variable e.Name#2
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_2_1},
      {refalrts::icSpliceSTVar, & sInnerNum_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sInnerNum_2_1 );
    res = refalrts::splice_stvar( res, sBracketNum_2_1 );
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
    static refalrts::Iter sBracketNum_2_1;
    static refalrts::Iter sCommand_2_1;
    static refalrts::Iter sDirection_2_1;
    // ( s.Command#2 s.Direction#2 s.BracketNum#2 e.Info#2 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sDirection_2_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_2_1, bb_1, be_1 ) )
      break;
    // Unused closed variable e.Info#2
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_2_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_2_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // e.Commands#1
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & lambda_ExtractBrackets_0, (void*) "lambda_ExtractBrackets_0"},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eUnique_1_b_1;
    static refalrts::Iter eUnique_1_e_1;
    static refalrts::Iter sRepeated_1_1;
    static refalrts::Iter eMiddle_1_b_1;
    static refalrts::Iter eMiddle_1_e_1;
    static refalrts::Iter eRest_1_b_1;
    static refalrts::Iter eRest_1_e_1;
    static refalrts::Iter sRepeated_1_2;
    // e.Unique#1 s.Repeated#1 e.Middle#1 s.Repeated#1 e.Rest#1
    eUnique_1_b_1 = 0;
    eUnique_1_e_1 = 0;
    do {
      refalrts::Iter bb_1 = bb_0;
      refalrts::Iter be_1 = be_0;
      if( ! refalrts::svar_left( sRepeated_1_1, bb_1, be_1 ) )
        continue;
      eMiddle_1_b_1 = 0;
      eMiddle_1_e_1 = 0;
      do {
        refalrts::Iter bb_2 = bb_1;
        refalrts::Iter be_2 = be_1;
        if( ! refalrts::repeated_stvar_left( sRepeated_1_2, sRepeated_1_1, bb_2, be_2 ) )
          continue;
        eRest_1_b_1 = bb_2;
        eRest_1_e_1 = be_2;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eUnique_1_b_1, & eUnique_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
          {refalrts::icSpliceSTVar, & sRepeated_1_1},
          {refalrts::icSpliceEVar, & eMiddle_1_b_1, & eMiddle_1_e_1},
          {refalrts::icSpliceEVar, & eRest_1_b_1, & eRest_1_e_1},
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
        if( ! refalrts::alloc_name( n1, & Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_close_call( n2 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n2 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eRest_1_b_1, eRest_1_e_1 );
        res = refalrts::splice_evar( res, eMiddle_1_b_1, eMiddle_1_e_1 );
        res = refalrts::splice_stvar( res, sRepeated_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eUnique_1_b_1, eUnique_1_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eMiddle_1_b_1, eMiddle_1_e_1, bb_1, be_1 ) );
    } while ( refalrts::open_evar_advance( eUnique_1_b_1, eUnique_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eUnique_1_b_1;
    static refalrts::Iter eUnique_1_e_1;
    // e.Unique#1
    eUnique_1_b_1 = bb_0;
    eUnique_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eUnique_1_b_1, & eUnique_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUnique_1_b_1, eUnique_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eInner_1_b_1;
    static refalrts::Iter eInner_1_e_1;
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    // ( # Brackets e.Inner#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & Brackets<int>::name, bb_1, be_1 ) )
      break;
    eInner_1_b_1 = bb_1;
    eInner_1_e_1 = be_1;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eInner_1_b_1, & eInner_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eInner_1_b_1, eInner_1_e_1 );
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
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eInner_1_b_1;
    static refalrts::Iter eInner_1_e_1;
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    // ( # ADT_Brackets ( e.Name#1 ) e.Inner#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_2;
    eName_1_e_1 = be_2;
    eInner_1_b_1 = bb_1;
    eInner_1_e_1 = be_1;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eInner_1_b_1, & eInner_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ']'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eInner_1_b_1, eInner_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    static refalrts::Iter sChar_1_1;
    // ( & TkChar s.Char#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
    if( ! refalrts::svar_left( sChar_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern_Char, (void*) "TextFromPattern_Char"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    refalrts::link_brackets( n4, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sChar_1_1 );
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
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    static refalrts::Iter sNumber_1_1;
    // ( & TkNumber s.Number#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    // ( & TkName e.Name#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    eName_1_e_1 = be_1;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter sDepth_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( & TkVariable s.Mode#1 e.Index#1 s.Depth#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sDepth_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sDepth_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
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
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    // ( & TkIdentifier e.Name#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    eName_1_e_1 = be_1;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    //
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
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
    // '\r'
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
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
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
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
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
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
    // '\"'
    if( ! refalrts::char_left( '"', bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '"'},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sOther_1_1;
    // s.Other#1
    if( ! refalrts::svar_left( sOther_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sOther_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    static refalrts::Iter sChar_1_1;
    // ( & TkChar s.Char#1 ) e.Tail#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
    if( ! refalrts::svar_left( sChar_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern_Char, (void*) "TextFromPattern_Char"},
      {refalrts::icSpliceEVar, & eTail_1_b_1, & eTail_1_e_1},
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
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sChar_1_1 );
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
    //
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
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
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
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
    static refalrts::Iter eOther_1_b_1;
    static refalrts::Iter eOther_1_e_1;
    // e.Other#1
    eOther_1_b_1 = bb_0;
    eOther_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eOther_1_b_1, & eOther_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eOther_1_b_1, eOther_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    // e.Result#1
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sValue_1_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkChar s.Value#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sValue_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElChar, (void*) "ElChar"},
      {refalrts::icSpliceSTVar, & sValue_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sValue_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkName e.Name#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_4, be_4 ) )
      break;
    eName_1_b_1 = bb_4;
    eName_1_e_1 = be_4;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElName, (void*) "ElName"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sNumber_1_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkNumber s.Number#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sNumber_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElNumber, (void*) "ElNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkIdentifier e.Name#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_4, be_4 ) )
      break;
    eName_1_b_1 = bb_4;
    eName_1_e_1 = be_4;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElIdent, (void*) "ElIdent"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eInBrackets_1_b_1;
    static refalrts::Iter eInBrackets_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # Brackets e.InBrackets#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & Brackets<int>::name, bb_4, be_4 ) )
      break;
    eInBrackets_1_b_1 = bb_4;
    eInBrackets_1_e_1 = be_4;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElOpenBracket, (void*) "ElOpenBracket"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eInBrackets_1_b_1, & eInBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eInBrackets_1_b_1, eInBrackets_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eInBrackets_1_b_1;
    static refalrts::Iter eInBrackets_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CallBrackets e.InBrackets#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CallBrackets<int>::name, bb_4, be_4 ) )
      break;
    eInBrackets_1_b_1 = bb_4;
    eInBrackets_1_e_1 = be_4;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElOpenCall, (void*) "ElOpenCall"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eInBrackets_1_b_1, & eInBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icIdent, (void*) & CloseCall<int>::name},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eInBrackets_1_b_1, eInBrackets_1_e_1 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter eInBrackets_1_b_1;
    static refalrts::Iter eInBrackets_1_e_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # ADT_Brackets ( e.Name#1 ) e.InBrackets#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & ADT_Brackets<int>::name, bb_4, be_4 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_4, be_4 ) )
      break;
    eName_1_b_1 = bb_5;
    eName_1_e_1 = be_5;
    eInBrackets_1_b_1 = bb_4;
    eInBrackets_1_e_1 = be_4;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElOpenADT, (void*) "ElOpenADT"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eInBrackets_1_b_1, & eInBrackets_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eInBrackets_1_b_1, eInBrackets_1_e_1 );
    refalrts::link_brackets( n18, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n10, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sOpenCounter_1_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkCloseBracket s.OpenCounter#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sOpenCounter_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElCloseBracket, (void*) "ElCloseBracket"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLinkBrackets, (void*) "CmdLinkBrackets"},
      {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sOpenCounter_1_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkCloseADT s.OpenCounter#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sOpenCounter_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElCloseADT, (void*) "ElCloseADT"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLinkBrackets, (void*) "CmdLinkBrackets"},
      {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n10, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sOpenCounter_1_1;
    static refalrts::Iter sCounter_1_2;
    static refalrts::Iter sCounter_1_3;
    static refalrts::Iter sCounter_1_4;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( # CloseCall s.OpenCounter#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::ident_left(  & CloseCall<int>::name, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sOpenCounter_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icFunc, (void*) & ElCloseCall, (void*) "ElCloseCall"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdPushStack, (void*) "CmdPushStack"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdPushStack, (void*) "CmdPushStack"},
      {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sCounter_1_2, sCounter_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_3, sCounter_1_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_1_4, sCounter_1_3 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_1_4 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n10, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n17, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n11, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n4, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    static refalrts::Iter eVars_B_1_b_1;
    static refalrts::Iter eVars_B_1_e_1;
    static refalrts::Iter eVars_E_1_b_1;
    static refalrts::Iter eVars_E_1_e_1;
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sUsings_1_2;
    // ( e.Vars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.Vars_E#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sMode_1_1, bb_4, be_4 ) )
      break;
    eIndex_1_b_1 = bb_4;
    eIndex_1_e_1 = be_4;
    eVars_B_1_b_1 = 0;
    eVars_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_1;
      refalrts::Iter be_6 = be_1;
      refalrts::Iter bb_5 = 0;
      refalrts::Iter be_5 = 0;
      if( ! refalrts::brackets_left( bb_5, be_5, bb_6, be_6 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_5, be_5 ) )
        continue;
      eVars_E_1_b_1 = bb_6;
      eVars_E_1_e_1 = be_6;
      if( ! refalrts::svar_left( sUsings_1_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::empty_seq( bb_5, be_5 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_B_1_b_1, & eVars_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sUsings_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVars_E_1_b_1, & eVars_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdInsertVar, (void*) "CmdInsertVar"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sUsings_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceSTVar, & sMode_1_2},
        {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceSTVar, & sCounter_1_1},
        {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sUsings_1_2, sUsings_1_1 ) )
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
      res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1_1 );
      refalrts::link_brackets( n11, n18 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      refalrts::link_brackets( n12, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_stvar( res, sMode_1_2 );
      refalrts::push_stack( n16 );
      refalrts::push_stack( n14 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sUsings_1_2 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n9, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::link_brackets( n2, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eVars_E_1_b_1, eVars_E_1_e_1 );
      refalrts::link_brackets( n3, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      refalrts::push_stack( n6 );
      refalrts::push_stack( n4 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_stvar( res, sUsings_1_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eVars_B_1_b_1, eVars_B_1_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eVars_B_1_b_1, eVars_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    static refalrts::Iter eResult_1_b_1;
    static refalrts::Iter eResult_1_e_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1 ( & TkVariable s.Mode#1 e.Index#1 ) e.Result#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    eResult_1_e_1 = be_0;
    if( ! refalrts::svar_left( sMode_1_1, bb_4, be_4 ) )
      break;
    eIndex_1_b_1 = bb_4;
    eIndex_1_e_1 = be_4;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGenResult, (void*) "DoGenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertVar, (void*) "CmdInsertVar"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
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
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    refalrts::link_brackets( n9, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n10, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    static refalrts::Iter eAllocCommands_1_b_1;
    static refalrts::Iter eAllocCommands_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sCounter_1_1;
    // ( e.Vars#1 ) ( e.AllocCommands#1 ) ( e.Commands#1 ) s.Counter#1
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
    eVars_1_b_1 = bb_1;
    eVars_1_e_1 = be_1;
    eAllocCommands_1_b_1 = bb_2;
    eAllocCommands_1_e_1 = be_2;
    eCommands_1_b_1 = bb_3;
    eCommands_1_e_1 = be_3;
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocCommands_1_b_1, & eAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocCommands_1_b_1, eAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Seq(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GeneralizeResult_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_2_b_1;
    static refalrts::Iter ePatternVars_2_e_1;
    static refalrts::Iter eResultVars_2_b_1;
    static refalrts::Iter eResultVars_2_e_1;
    static refalrts::Iter eRepeatedEs_2_b_1;
    static refalrts::Iter eRepeatedEs_2_e_1;
    static refalrts::Iter eClosedEs_2_b_1;
    static refalrts::Iter eClosedEs_2_e_1;
    static refalrts::Iter ePatternVars_2_b_2;
    static refalrts::Iter ePatternVars_2_e_2;
    static refalrts::Iter eResultVars_2_b_2;
    static refalrts::Iter eResultVars_2_e_2;
    static refalrts::Iter eResultVars_2_b_3;
    static refalrts::Iter eResultVars_2_e_3;
    // ( e.PatternVars#2 ) ( e.ResultVars#2 ) ( e.RepeatedEs#2 ) e.ClosedEs#2
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
    ePatternVars_2_b_1 = bb_1;
    ePatternVars_2_e_1 = be_1;
    eResultVars_2_b_1 = bb_2;
    eResultVars_2_e_1 = be_2;
    eRepeatedEs_2_b_1 = bb_3;
    eRepeatedEs_2_e_1 = be_3;
    eClosedEs_2_b_1 = bb_0;
    eClosedEs_2_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternVars_2_b_1, & ePatternVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultVars_2_b_1, & eResultVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eResultVars_2_b_1, & eResultVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePatternVars_2_b_1, & ePatternVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eClosedEs_2_b_1, & eClosedEs_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eRepeatedEs_2_b_1, & eRepeatedEs_2_e_1},
      {refalrts::icCopyEVar, & eResultVars_2_b_1, & eResultVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( ePatternVars_2_b_2, ePatternVars_2_e_2, ePatternVars_2_b_1, ePatternVars_2_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_2_b_2, eResultVars_2_e_2, eResultVars_2_b_1, eResultVars_2_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_2_b_3, eResultVars_2_e_3, eResultVars_2_b_2, eResultVars_2_e_2 ) )
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
    res = refalrts::splice_evar( res, eResultVars_2_b_3, eResultVars_2_e_3 );
    res = refalrts::splice_evar( res, eRepeatedEs_2_b_1, eRepeatedEs_2_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eClosedEs_2_b_1, eClosedEs_2_e_1 );
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
    res = refalrts::splice_evar( res, ePatternVars_2_b_2, ePatternVars_2_e_2 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResultVars_2_b_2, eResultVars_2_e_2 );
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
    res = refalrts::splice_evar( res, eResultVars_2_b_1, eResultVars_2_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, ePatternVars_2_b_1, ePatternVars_2_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternCommands_1_b_1;
    static refalrts::Iter ePatternCommands_1_e_1;
    static refalrts::Iter eCommonVars_2_b_1;
    static refalrts::Iter eCommonVars_2_e_1;
    static refalrts::Iter eCopiedVars_2_b_1;
    static refalrts::Iter eCopiedVars_2_e_1;
    static refalrts::Iter eUnusedClosedEs_2_b_1;
    static refalrts::Iter eUnusedClosedEs_2_e_1;
    static refalrts::Iter eUnusedClosedEs_2_b_2;
    static refalrts::Iter eUnusedClosedEs_2_e_2;
    // ( e.PatternCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.UnusedClosedEs#2
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
    ePatternCommands_1_b_1 = bb_1;
    ePatternCommands_1_e_1 = be_1;
    eCommonVars_2_b_1 = bb_2;
    eCommonVars_2_e_1 = be_2;
    eCopiedVars_2_b_1 = bb_3;
    eCopiedVars_2_e_1 = be_3;
    eUnusedClosedEs_2_b_1 = bb_0;
    eUnusedClosedEs_2_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommonVars_2_b_1, & eCommonVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eUnusedClosedEs_2_b_1, & eUnusedClosedEs_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCopiedVars_2_b_1, & eCopiedVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & FilterUnusedCmdClosedE, (void*) "FilterUnusedCmdClosedE"},
      {refalrts::icCopyEVar, & eUnusedClosedEs_2_b_1, & eUnusedClosedEs_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eUnusedClosedEs_2_b_2, eUnusedClosedEs_2_e_2, eUnusedClosedEs_2_b_1, eUnusedClosedEs_2_e_1 ) )
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
    res = refalrts::splice_evar( res, ePatternCommands_1_b_1, ePatternCommands_1_e_1 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eUnusedClosedEs_2_b_2, eUnusedClosedEs_2_e_2 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eCopiedVars_2_b_1, eCopiedVars_2_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eUnusedClosedEs_2_b_1, eUnusedClosedEs_2_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommonVars_2_b_1, eCommonVars_2_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eResultAllocCommands_1_b_1;
    static refalrts::Iter eResultAllocCommands_1_e_1;
    static refalrts::Iter eResultCommands_1_b_1;
    static refalrts::Iter eResultCommands_1_e_1;
    static refalrts::Iter eCommonVars_2_b_1;
    static refalrts::Iter eCommonVars_2_e_1;
    static refalrts::Iter eCopiedVars_2_b_1;
    static refalrts::Iter eCopiedVars_2_e_1;
    static refalrts::Iter ePatternCommands_2_b_1;
    static refalrts::Iter ePatternCommands_2_e_1;
    static refalrts::Iter eCopiedVars_2_b_2;
    static refalrts::Iter eCopiedVars_2_e_2;
    static refalrts::Iter eResultAllocCommands_1_b_2;
    static refalrts::Iter eResultAllocCommands_1_e_2;
    static refalrts::Iter eResultCommands_1_b_2;
    static refalrts::Iter eResultCommands_1_e_2;
    // ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 ) ( e.CommonVars#2 ) ( e.CopiedVars#2 ) e.PatternCommands#2
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
    eResultAllocCommands_1_b_1 = bb_1;
    eResultAllocCommands_1_e_1 = be_1;
    eResultCommands_1_b_1 = bb_2;
    eResultCommands_1_e_1 = be_2;
    eCommonVars_2_b_1 = bb_3;
    eCommonVars_2_e_1 = be_3;
    eCopiedVars_2_b_1 = bb_4;
    eCopiedVars_2_e_1 = be_4;
    ePatternCommands_2_b_1 = bb_0;
    ePatternCommands_2_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenerateResult_OpenELoops, (void*) "GenerateResult_OpenELoops"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeDeclaration, (void*) "MakeDeclaration"},
      {refalrts::icSpliceEVar, & eCommonVars_2_b_1, & eCommonVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & ePatternCommands_2_b_1, & ePatternCommands_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdIfDef, (void*) "CmdIfDef"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInitRAA, (void*) "CmdInitRAA"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & MakeInterpCommands, (void*) "MakeInterpCommands"},
      {refalrts::icSpliceEVar, & eCopiedVars_2_b_1, & eCopiedVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultAllocCommands_1_b_1, & eResultAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResultCommands_1_b_1, & eResultCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdFinRAA, (void*) "CmdFinRAA"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdElse, (void*) "CmdElse"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEmptyResult, (void*) "CmdEmptyResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeCopyVar, (void*) "MakeCopyVar"},
      {refalrts::icCopyEVar, & eCopiedVars_2_b_1, & eCopiedVars_2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icCopyEVar, & eResultAllocCommands_1_b_1, & eResultAllocCommands_1_e_1},
      {refalrts::icCopyEVar, & eResultCommands_1_b_1, & eResultCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdReturnResult, (void*) "CmdReturnResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEndIf, (void*) "CmdEndIf"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eCopiedVars_2_b_2, eCopiedVars_2_e_2, eCopiedVars_2_b_1, eCopiedVars_2_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultAllocCommands_1_b_2, eResultAllocCommands_1_e_2, eResultAllocCommands_1_b_1, eResultAllocCommands_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultCommands_1_b_2, eResultCommands_1_e_2, eResultCommands_1_b_1, eResultCommands_1_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CmdInitRAA, "CmdInitRAA" ) )
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
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & FoldAllocCommands, "FoldAllocCommands" ) )
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
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & CmdFinRAA, "CmdFinRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_open_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_call( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_bracket( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_close_bracket( n41 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n42 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n42 );
    refalrts::link_brackets( n39, n41 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n36, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_evar( res, eResultCommands_1_b_2, eResultCommands_1_e_2 );
    res = refalrts::splice_evar( res, eResultAllocCommands_1_b_2, eResultAllocCommands_1_e_2 );
    refalrts::push_stack( n35 );
    refalrts::push_stack( n32 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eCopiedVars_2_b_2, eCopiedVars_2_e_2 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n29, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    refalrts::link_brackets( n26, n28 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n23, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResultCommands_1_b_1, eResultCommands_1_e_1 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eResultAllocCommands_1_b_1, eResultAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eCopiedVars_2_b_1, eCopiedVars_2_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatternCommands_2_b_1, ePatternCommands_2_e_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommonVars_2_b_1, eCommonVars_2_e_1 );
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

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_1_b_1;
    static refalrts::Iter ePatternVars_1_e_1;
    static refalrts::Iter ePatternCommands_1_b_1;
    static refalrts::Iter ePatternCommands_1_e_1;
    static refalrts::Iter eResultVars_1_b_1;
    static refalrts::Iter eResultVars_1_e_1;
    static refalrts::Iter eResultAllocCommands_1_b_1;
    static refalrts::Iter eResultAllocCommands_1_e_1;
    static refalrts::Iter eResultCommands_1_b_1;
    static refalrts::Iter eResultCommands_1_e_1;
    static refalrts::Iter ePatternCommands_1_b_2;
    static refalrts::Iter ePatternCommands_1_e_2;
    static refalrts::Iter ePatternCommands_1_b_3;
    static refalrts::Iter ePatternCommands_1_e_3;
    // ( e.PatternVars#1 ) ( e.PatternCommands#1 ) ( e.ResultVars#1 ) ( e.ResultAllocCommands#1 ) ( e.ResultCommands#1 )
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
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_1_b_1 = bb_1;
    ePatternVars_1_e_1 = be_1;
    ePatternCommands_1_b_1 = bb_2;
    ePatternCommands_1_e_1 = be_2;
    eResultVars_1_b_1 = bb_3;
    eResultVars_1_e_1 = be_3;
    eResultAllocCommands_1_b_1 = bb_4;
    eResultAllocCommands_1_e_1 = be_4;
    eResultCommands_1_b_1 = bb_5;
    eResultCommands_1_e_1 = be_5;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & ePatternVars_1_b_1, & ePatternVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & eResultVars_1_b_1, & eResultVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & RepeatedEVariables, (void*) "RepeatedEVariables"},
      {refalrts::icSpliceEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ClosedEVariables, (void*) "ClosedEVariables"},
      {refalrts::icCopyEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Seq, (void*) "Seq"},
      {refalrts::icFunc, (void*) & lambda_GeneralizeResult_0, (void*) "lambda_GeneralizeResult_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GeneralizeResult_1, (void*) "lambda_GeneralizeResult_1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GeneralizeResult_2, (void*) "lambda_GeneralizeResult_2"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultAllocCommands_1_b_1, & eResultAllocCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_1_b_1, & eResultCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::copy_evar( ePatternCommands_1_b_2, ePatternCommands_1_e_2, ePatternCommands_1_b_1, ePatternCommands_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( ePatternCommands_1_b_3, ePatternCommands_1_e_3, ePatternCommands_1_b_2, ePatternCommands_1_e_2 ) )
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
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
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
    if( ! refalrts::alloc_close_call( n40 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n40 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n40 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n22 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::push_stack( n38 );
    refalrts::push_stack( n31 );
    res = refalrts::splice_elem( res, n38 );
    refalrts::link_brackets( n36, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eResultCommands_1_b_1, eResultCommands_1_e_1 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eResultAllocCommands_1_b_1, eResultAllocCommands_1_e_1 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, ePatternCommands_1_b_3, ePatternCommands_1_e_3 );
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
    res = refalrts::splice_evar( res, ePatternCommands_1_b_2, ePatternCommands_1_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n12, n17 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, ePatternCommands_1_b_1, ePatternCommands_1_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eResultVars_1_b_1, eResultVars_1_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePatternVars_1_b_1, ePatternVars_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( 1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::number_left( 1UL, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    if( ! refalrts::alloc_number( n1, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
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
    static refalrts::Iter sUsing_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sUsing_1_2;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // ( s.Using#1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsing_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Dec, (void*) "Dec"},
      {refalrts::icSpliceSTVar, & sUsing_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopySTVar, & sUsing_1_1},
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( sUsing_1_2, sUsing_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sMode_1_2, sMode_1_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_stvar( res, sUsing_1_2 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sUsing_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    static refalrts::Iter eVars_1_e_1;
    // e.Vars#1
    eVars_1_b_1 = bb_0;
    eVars_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ReplicateVar, (void*) "ReplicateVar"},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
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
    res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_B_1_b_1;
    static refalrts::Iter eSet1_B_1_e_1;
    static refalrts::Iter tCommon_1_1;
    static refalrts::Iter eSet1_E_1_b_1;
    static refalrts::Iter eSet1_E_1_e_1;
    static refalrts::Iter eSet2_B_1_b_1;
    static refalrts::Iter eSet2_B_1_e_1;
    static refalrts::Iter eSet2_E_1_b_1;
    static refalrts::Iter eSet2_E_1_e_1;
    static refalrts::Iter tCommon_1_2;
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSet1_B_1_b_1 = 0;
    eSet1_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_4 = bb_2;
      refalrts::Iter be_4 = be_2;
      if( ! refalrts::tvar_left( tCommon_1_1, bb_3, be_3 ) )
        continue;
      eSet1_E_1_b_1 = bb_3;
      eSet1_E_1_e_1 = be_3;
      eSet2_B_1_b_1 = 0;
      eSet2_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_1_2, tCommon_1_1, bb_5, be_5 ) )
          continue;
        eSet2_E_1_b_1 = bb_5;
        eSet2_E_1_e_1 = be_5;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceSTVar, & tCommon_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_B_1_b_1, & eSet1_B_1_e_1},
          {refalrts::icSpliceEVar, & eSet1_E_1_b_1, & eSet1_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_1_b_1, & eSet2_B_1_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_1_b_1, & eSet2_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        res = refalrts::splice_evar( res, eSet2_E_1_b_1, eSet2_E_1_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_1_b_1, eSet2_B_1_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_1_b_1, eSet1_E_1_e_1 );
        res = refalrts::splice_evar( res, eSet1_B_1_b_1, eSet1_B_1_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_stvar( res, tCommon_1_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eSet2_B_1_b_1, eSet2_B_1_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eSet1_B_1_b_1, eSet1_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_1_b_1;
    static refalrts::Iter eSet1_1_e_1;
    static refalrts::Iter eSet2_1_b_1;
    static refalrts::Iter eSet2_1_e_1;
    // ( e.Set1#1 ) ( e.Set2#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSet1_1_b_1 = bb_1;
    eSet1_1_e_1 = be_1;
    eSet2_1_b_1 = bb_2;
    eSet2_1_e_1 = be_2;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_1_b_1, & eSet1_1_e_1},
      {refalrts::icSpliceEVar, & eSet2_1_b_1, & eSet2_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet2_1_b_1, eSet2_1_e_1 );
    res = refalrts::splice_evar( res, eSet1_1_b_1, eSet1_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_B_1_b_1;
    static refalrts::Iter eSet1_B_1_e_1;
    static refalrts::Iter eSet1_E_1_b_1;
    static refalrts::Iter eSet1_E_1_e_1;
    static refalrts::Iter eSet2_B_1_b_1;
    static refalrts::Iter eSet2_B_1_e_1;
    static refalrts::Iter eSet2_E_1_b_1;
    static refalrts::Iter eSet2_E_1_e_1;
    static refalrts::Iter tCommon_1_1;
    static refalrts::Iter tCommon_1_2;
    // ( e.Set1_B#1 t.Common#1 e.Set1_E#1 ) ( e.Set2_B#1 t.Common#1 e.Set2_E#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSet1_B_1_b_1 = 0;
    eSet1_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_1;
      refalrts::Iter be_3 = be_1;
      refalrts::Iter bb_4 = bb_2;
      refalrts::Iter be_4 = be_2;
      if( ! refalrts::tvar_left( tCommon_1_1, bb_3, be_3 ) )
        continue;
      eSet1_E_1_b_1 = bb_3;
      eSet1_E_1_e_1 = be_3;
      eSet2_B_1_b_1 = 0;
      eSet2_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_1_2, tCommon_1_1, bb_5, be_5 ) )
          continue;
        eSet2_E_1_b_1 = bb_5;
        eSet2_E_1_e_1 = be_5;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eSet1_B_1_b_1, & eSet1_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_E_1_b_1, & eSet1_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_1_b_1, & eSet2_B_1_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_1_b_1, & eSet2_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        res = refalrts::splice_evar( res, eSet2_E_1_b_1, eSet2_E_1_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_1_b_1, eSet2_B_1_e_1 );
        res = refalrts::splice_elem( res, n4 );
        refalrts::link_brackets( n2, n3 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eSet1_E_1_b_1, eSet1_E_1_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_evar( res, eSet1_B_1_b_1, eSet1_B_1_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eSet2_B_1_b_1, eSet2_B_1_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eSet1_B_1_b_1, eSet1_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_1_b_1;
    static refalrts::Iter eSet1_1_e_1;
    // ( e.Set1#1 ) ( e.Set2#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSet1_1_b_1 = bb_1;
    eSet1_1_e_1 = be_1;
    // Unused closed variable e.Set2#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eSet1_1_b_1, & eSet1_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eSet1_1_b_1, eSet1_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sNum_1_1;
    // ( & CmdClosedE & AlgLeft s.Num#1 'e e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdClosedE, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
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
    static refalrts::Iter tOther_1_1;
    // t.Other#1
    if( ! refalrts::tvar_left( tOther_1_1, bb_0, be_0 ) )
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

static refalrts::FnResult RepeatedEVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sDirection_1_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter sCount_1_1;
    // ( & CmdRepeated s.Direction#1 s.Num#1 s.Count#1 'e e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdRepeated, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sCount_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
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
    static refalrts::Iter tOther_1_1;
    // t.Other#1
    if( ! refalrts::tvar_left( tOther_1_1, bb_0, be_0 ) )
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

static refalrts::FnResult FilterUnusedCmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sDepth_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter sDepth_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    static refalrts::Iter eUnuseds_B_1_b_1;
    static refalrts::Iter eUnuseds_B_1_e_1;
    // e.Unuseds_B#1 ( 1 'e e.Index#1 s.Depth#1 ) e.Unuseds_E#1 ( & CmdClosedE & AlgLeft s.Num#1 'e e.Index#1 s.Depth#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdClosedE, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_right( sDepth_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
    eUnuseds_B_1_b_1 = 0;
    eUnuseds_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::number_left( 1UL, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sDepth_1_2, sDepth_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      // Unused closed variable e.Unuseds_E#1
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdComment, (void*) "CmdComment"},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'U'},
        {refalrts::icChar, 0, 0, 'n'},
        {refalrts::icChar, 0, 0, 'u'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'c'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'o'},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, 'd'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'v'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'r'},
        {refalrts::icChar, 0, 0, 'i'},
        {refalrts::icChar, 0, 0, 'a'},
        {refalrts::icChar, 0, 0, 'b'},
        {refalrts::icChar, 0, 0, 'l'},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, ' '},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icChar, 0, 0, '.'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icChar, 0, 0, '#'},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
        {refalrts::icSpliceSTVar, & sDepth_1_1},
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
      res = refalrts::splice_stvar( res, sDepth_1_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
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
    } while ( refalrts::open_evar_advance( eUnuseds_B_1_b_1, eUnuseds_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tOtherCommand_1_1;
    // e.Unuseds#1 t.OtherCommand#1
    if( ! refalrts::tvar_right( tOtherCommand_1_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.Unuseds#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOtherCommand_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOtherCommand_1_1 );
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

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( s.Usings#1 'e e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareEVar, (void*) "CmdDeclareEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( s.Usings#1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDeclareVar, (void*) "CmdDeclareVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdDeclareVar, "CmdDeclareVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( s.Usings#1 'e e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyEVar, (void*) "CmdCopyEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( s.Usings#1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyVar, (void*) "CmdCopyVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sElemNo_1_1;
    static refalrts::Iter eAllocs_B_1_b_1;
    static refalrts::Iter eAllocs_B_1_e_1;
    static refalrts::Iter eAllocs_E_1_b_1;
    static refalrts::Iter eAllocs_E_1_e_1;
    static refalrts::Iter sType_1_1;
    static refalrts::Iter eValue_1_b_1;
    static refalrts::Iter eValue_1_e_1;
    static refalrts::Iter sElemNo_1_2;
    // ( e.Allocs_B#1 ( & CmdAllocateElem s.ElemNo#1 s.Type#1 e.Value#1 ) e.Allocs_E#1 ) ( & CmdInsertElem s.ElemNo#1 ) e.Commands#1
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
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
    if( ! refalrts::svar_left( sElemNo_1_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_2, be_2 ) )
      break;
    eAllocs_B_1_b_1 = 0;
    eAllocs_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_1;
      refalrts::Iter be_4 = be_1;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_4, be_4 ) )
        continue;
      if( ! refalrts::function_left( & CmdAllocateElem, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sElemNo_1_2, sElemNo_1_1, bb_3, be_3 ) )
        continue;
      eAllocs_E_1_b_1 = bb_4;
      eAllocs_E_1_e_1 = be_4;
      if( ! refalrts::svar_left( sType_1_1, bb_3, be_3 ) )
        continue;
      eValue_1_b_1 = bb_3;
      eValue_1_e_1 = be_3;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eAllocs_B_1_b_1, & eAllocs_B_1_e_1},
        {refalrts::icSpliceEVar, & eAllocs_E_1_b_1, & eAllocs_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
        {refalrts::icSpliceSTVar, & sType_1_1},
        {refalrts::icSpliceSTVar, & sElemNo_1_1},
        {refalrts::icSpliceEVar, & eValue_1_b_1, & eValue_1_e_1},
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
      res = refalrts::splice_evar( res, eValue_1_b_1, eValue_1_e_1 );
      res = refalrts::splice_stvar( res, sElemNo_1_1 );
      res = refalrts::splice_stvar( res, sType_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      refalrts::link_brackets( n2, n3 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_evar( res, eAllocs_E_1_b_1, eAllocs_E_1_e_1 );
      res = refalrts::splice_evar( res, eAllocs_B_1_b_1, eAllocs_B_1_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eAllocs_B_1_b_1, eAllocs_B_1_e_1, bb_1, be_1 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAllocs_1_b_1;
    static refalrts::Iter eAllocs_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( e.Allocs#1 ) ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, bb_2, be_2 ) )
      break;
    eAllocs_1_b_1 = bb_1;
    eAllocs_1_e_1 = be_1;
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
    if( ! refalrts::svar_left( sUsings_1_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_2, be_2 ) )
      break;
    eIndex_1_b_1 = bb_2;
    eIndex_1_e_1 = be_2;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocs_1_b_1, & eAllocs_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertVar, (void*) "CmdInsertVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocs_1_b_1, eAllocs_1_e_1 );
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
    static refalrts::Iter eAllocs_1_b_1;
    static refalrts::Iter eAllocs_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // ( e.Allocs#1 ) ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 ) e.Commands#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, bb_2, be_2 ) )
      break;
    eAllocs_1_b_1 = bb_1;
    eAllocs_1_e_1 = be_1;
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
    if( ! refalrts::svar_left( sUsings_1_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_2, be_2 ) )
      break;
    eIndex_1_b_1 = bb_2;
    eIndex_1_e_1 = be_2;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocs_1_b_1, & eAllocs_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertVar, (void*) "CmdInsertVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocs_1_b_1, eAllocs_1_e_1 );
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
    static refalrts::Iter eAllocs_1_b_1;
    static refalrts::Iter eAllocs_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // ( e.Allocs#1 ) ( & CmdLinkBrackets e.CmdInfo#1 ) e.Commands#1
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
    eAllocs_1_b_1 = bb_1;
    eAllocs_1_e_1 = be_1;
    // Unused closed variable e.CmdInfo#1
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocs_1_b_1, & eAllocs_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocs_1_b_1, eAllocs_1_e_1 );
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
    static refalrts::Iter eAllocs_1_b_1;
    static refalrts::Iter eAllocs_1_e_1;
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // ( e.Allocs#1 ) ( & CmdPushStack e.CmdInfo#1 ) e.Commands#1
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
    eAllocs_1_b_1 = bb_1;
    eAllocs_1_e_1 = be_1;
    // Unused closed variable e.CmdInfo#1
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FoldAllocCommands, (void*) "FoldAllocCommands"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocs_1_b_1, & eAllocs_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocs_1_b_1, eAllocs_1_e_1 );
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
    // ( )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
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

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sUsings_1_2;
    static refalrts::Iter sMode_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    static refalrts::Iter eCopiedVars_B_1_b_1;
    static refalrts::Iter eCopiedVars_B_1_e_1;
    // e.CopiedVars_B#1 ( s.Usings#1 s.Mode#1 e.Index#1 ) e.CopiedVars_E#1 ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
    eCopiedVars_B_1_b_1 = 0;
    eCopiedVars_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sUsings_1_2, sUsings_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      // Unused closed variable e.CopiedVars_E#1
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdArrCopy, (void*) "CmdArrCopy"},
        {refalrts::icSpliceSTVar, & sMode_1_1},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::alloc_name( n1, & CmdArrCopy, "CmdArrCopy" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_close_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n0, n2 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_stvar( res, sMode_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eCopiedVars_B_1_b_1, eCopiedVars_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sUsings_1_1;
    static refalrts::Iter sMode_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    // e.CopiedVars#1 ( & CmdInsertVar s.Usings#1 s.Mode#1 e.Index#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertVar, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    eIndex_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrSplice, (void*) "CmdArrSplice"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdArrSplice, "CmdArrSplice" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    static refalrts::Iter sValue_1_1;
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElChar s.Counter#1 s.Value#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElChar, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sValue_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrChar, (void*) "CmdArrChar"},
      {refalrts::icSpliceSTVar, & sValue_1_1},
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
    if( ! refalrts::alloc_name( n1, & CmdArrChar, "CmdArrChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sValue_1_1 );
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
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElName s.Counter#1 e.Name#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElName, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    eName_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrFunc, (void*) "CmdArrFunc"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdArrFunc, "CmdArrFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    static refalrts::Iter sNumber_1_1;
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElNumber s.Counter#1 s.Number#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElNumber, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrInt, (void*) "CmdArrInt"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
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
    if( ! refalrts::alloc_name( n1, & CmdArrInt, "CmdArrInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    static refalrts::Iter eName_1_b_1;
    static refalrts::Iter eName_1_e_1;
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElIdent s.Counter#1 e.Name#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElIdent, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    eName_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrIdent, (void*) "CmdArrIdent"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdArrIdent, "CmdArrIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenBracket s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElOpenBracket, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrOB, (void*) "CmdArrOB"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenADT s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElOpenADT, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrOADT, (void*) "CmdArrOADT"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElOpenCall s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElOpenCall, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrOC, (void*) "CmdArrOC"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseBracket s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElCloseBracket, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrCB, (void*) "CmdArrCB"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseADT s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElCloseADT, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrCADT, (void*) "CmdArrCADT"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sCounter_1_1;
    // e.CopiedVars#1 ( & CmdInsertElem & ElCloseCall s.Counter#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdInsertElem, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & ElCloseCall, bb_1, be_1 ) )
      break;
    // Unused closed variable e.CopiedVars#1
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrCC, (void*) "CmdArrCC"},
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

static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_B_1_b_1;
    static refalrts::Iter eCommands_B_1_e_1;
    static refalrts::Iter eCommands_E_1_b_1;
    static refalrts::Iter eCommands_E_1_e_1;
    static refalrts::Iter sBracketNum_1_1;
    static refalrts::Iter eIndex_1_b_1;
    static refalrts::Iter eIndex_1_e_1;
    static refalrts::Iter sBracketNum_1_2;
    static refalrts::Iter eIndex_1_b_2;
    static refalrts::Iter eIndex_1_e_2;
    // e.Commands_B#1 ( & CmdOpenedE & AlgLeft s.BracketNum#1 'e e.Index#1 ) e.Commands_E#1
    eCommands_B_1_b_1 = 0;
    eCommands_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_2 = bb_0;
      refalrts::Iter be_2 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, bb_1, be_1 ) )
        continue;
      if( ! refalrts::function_left( & AlgLeft, bb_1, be_1 ) )
        continue;
      eCommands_E_1_b_1 = bb_2;
      eCommands_E_1_e_1 = be_2;
      if( ! refalrts::svar_left( sBracketNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
        continue;
      eIndex_1_b_1 = bb_1;
      eIndex_1_e_1 = be_1;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE_Start, (void*) "CmdOpenedE_Start"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sBracketNum_1_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenerateResult_OpenELoops, (void*) "GenerateResult_OpenELoops"},
        {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE_End, (void*) "CmdOpenedE_End"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sBracketNum_1_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icEnd}
      };
      refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
      refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
      return res;
#else

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::copy_stvar( sBracketNum_1_2, sBracketNum_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
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
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_stvar( res, sBracketNum_1_2 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::push_stack( n7 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n0, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_stvar( res, sBracketNum_1_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    static refalrts::Iter eCommands_1_e_1;
    // e.Commands#1
    eCommands_1_b_1 = bb_0;
    eCommands_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
