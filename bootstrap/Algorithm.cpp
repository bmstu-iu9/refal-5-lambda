// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult LeftPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult RightPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult MakeAlgorithm(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    // (~1 s.LastBracket1  e.Pattern1  )~1 (~2 e.Result1  )~2
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
    eResult_1_b_1 = bb_2;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_2;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_1, be_1 ) )
      break;
    ePattern_1_b_1 = bb_1;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_1;
    refalrts::use( ePattern_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult, (void*) "GeneralizeResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icInt, 0, 0, 0 },
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
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & LeftPtr, "LeftPtr" ) )
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
    if( ! refalrts::alloc_name( n9, & RightPtr, "RightPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_number( n10, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
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
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_number( n23, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_call( n25 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n25 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n17 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
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

static refalrts::FnResult LeftPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult RightPtr(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

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

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    static refalrts::Iter sChar_1_2;
    refalrts::use( sChar_1_2 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkChar s.Char1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkChar, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sChar_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sChar_1_1},
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
      if( ! refalrts::copy_stvar( sChar_1_2, sChar_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sChar_1_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sChar_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter sNumber_1_2;
    refalrts::use( sNumber_1_2 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkNumber s.Number1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNumber_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumber_1_1},
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
      if( ! refalrts::copy_stvar( sNumber_1_2, sNumber_1_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNumber_1_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNumber_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkName e.Name1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) )
        continue;
      eName_1_b_1 = bb_2;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_2;
      refalrts::use( eName_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
      if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkName, "TkName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkIdentifier e.Name1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_2, be_2 ) )
        continue;
      eName_1_b_1 = bb_2;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_2;
      refalrts::use( eName_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
      if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkIdentifier, "TkIdentifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sChar_1_2;
    refalrts::use( sChar_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkChar s.Char1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sChar_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sChar_1_1},
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
      if( ! refalrts::copy_stvar( sChar_1_2, sChar_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkChar, "TkChar" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sChar_1_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sChar_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sNumber_1_2;
    refalrts::use( sNumber_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkNumber s.Number1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopySTVar, & sNumber_1_1},
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
      if( ! refalrts::copy_stvar( sNumber_1_2, sNumber_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkNumber, "TkNumber" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sNumber_1_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_stvar( res, sNumber_1_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkName e.Name1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      eName_1_b_1 = bb_1;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_1;
      refalrts::use( eName_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
      if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkName, "TkName" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkIdentifier e.Name1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      eName_1_b_1 = bb_1;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_1;
      refalrts::use( eName_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1_1},
        {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
      if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkIdentifier, "TkIdentifier" ) )
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
      if( ! refalrts::alloc_open_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_name( n12, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n11, n14 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::link_brackets( n8, n9 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sInner_1_1;
    refalrts::use( sInner_1_1 );
    static refalrts::Iter sInner_1_2;
    refalrts::use( sInner_1_2 );
    static refalrts::Iter ePattern_M_1_b_1;
    refalrts::use( ePattern_M_1_b_1 );
    static refalrts::Iter ePattern_M_1_e_1;
    refalrts::use( ePattern_M_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sInner_1_3;
    refalrts::use( sInner_1_3 );
    static refalrts::Iter sInner_1_4;
    refalrts::use( sInner_1_4 );
    static refalrts::Iter sInner_1_5;
    refalrts::use( sInner_1_5 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkOpenBracket s.Inner1  )~2 e.Pattern_M1  (~3 & TkCloseBracket s.Inner1  )~3 e.Pattern_E1  (~4 e.Vars1  )~4 (~5 e.Commands1  )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_4;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_4;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_5;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_5;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_2, be_2 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      ePattern_M_1_b_1 = 0;
      ePattern_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_7 = bb_6;
        refalrts::Iter be_7 = be_6;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_7, be_7 ) )
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_3, be_3 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_1_2, sInner_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_1_b_1 = bb_7;
        refalrts::use( ePattern_E_1_b_1 );
        ePattern_E_1_e_1 = be_7;
        refalrts::use( ePattern_E_1_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
          {refalrts::icSpliceSTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_1_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_1_b_1, & ePattern_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icCopySTVar, & sInner_1_1},
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
        if( ! refalrts::copy_stvar( sInner_1_3, sInner_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_4, sInner_1_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_5, sInner_1_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n25 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n25 );
        refalrts::link_brackets( n19, n24 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n20, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sInner_1_5 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n17, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_1_4 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sInner_1_3 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_M_1_b_1, ePattern_M_1_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sInner_1_2 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sInner_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( ePattern_M_1_b_1, ePattern_M_1_e_1, bb_6, be_6 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter sInner_1_1;
    refalrts::use( sInner_1_1 );
    static refalrts::Iter sInner_1_2;
    refalrts::use( sInner_1_2 );
    static refalrts::Iter ePattern_M_1_b_1;
    refalrts::use( ePattern_M_1_b_1 );
    static refalrts::Iter ePattern_M_1_e_1;
    refalrts::use( ePattern_M_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sInner_1_3;
    refalrts::use( sInner_1_3 );
    static refalrts::Iter sInner_1_4;
    refalrts::use( sInner_1_4 );
    static refalrts::Iter sInner_1_5;
    refalrts::use( sInner_1_5 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkOpenBracket s.Inner1  )~1 e.Pattern_M1  (~2 & TkCloseBracket s.Inner1  )~2 (~3 & RightPtr s.Num1  )~3 e.Pattern_E1  (~4 e.Vars1  )~4 (~5 e.Commands1  )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_4;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_4;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_5;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_5;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      ePattern_M_1_b_1 = 0;
      ePattern_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_7 = bb_6;
        refalrts::Iter be_7 = be_6;
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_7, be_7 ) )
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_2, be_2 ) )
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_7, be_7 ) )
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_1_2, sInner_1_1, bb_2, be_2 ) )
          continue;
        if( ! refalrts::empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_1_b_1 = bb_7;
        refalrts::use( ePattern_E_1_b_1 );
        ePattern_E_1_e_1 = be_7;
        refalrts::use( ePattern_E_1_e_1 );
        if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::empty_seq( bb_3, be_3 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
          {refalrts::icSpliceSTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_1_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_1_b_1, & ePattern_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icCopySTVar, & sInner_1_1},
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
        if( ! refalrts::copy_stvar( sInner_1_3, sInner_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_4, sInner_1_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_5, sInner_1_4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_close_bracket( n18 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_bracket( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_open_bracket( n20 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_name( n21, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_close_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_close_bracket( n24 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n25 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n25 );
        refalrts::link_brackets( n19, n24 );
        res = refalrts::splice_elem( res, n24 );
        refalrts::link_brackets( n20, n23 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_stvar( res, sInner_1_5 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n19 );
        refalrts::link_brackets( n17, n18 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sInner_1_4 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_1_3 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, ePattern_M_1_b_1, ePattern_M_1_e_1 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sInner_1_2 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sInner_1_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( ePattern_M_1_b_1, ePattern_M_1_e_1, bb_6, be_6 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sInner_1_1;
    refalrts::use( sInner_1_1 );
    static refalrts::Iter sInner_1_2;
    refalrts::use( sInner_1_2 );
    static refalrts::Iter ePattern_M_1_b_1;
    refalrts::use( ePattern_M_1_b_1 );
    static refalrts::Iter ePattern_M_1_e_1;
    refalrts::use( ePattern_M_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sInner_1_3;
    refalrts::use( sInner_1_3 );
    static refalrts::Iter sInner_1_4;
    refalrts::use( sInner_1_4 );
    static refalrts::Iter sInner_1_5;
    refalrts::use( sInner_1_5 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkOpenADT s.Inner1  )~2 (~3 & TkName e.Name1  )~3 e.Pattern_M1  (~4 & TkCloseADT s.Inner1  )~4 e.Pattern_E1  (~5 e.Vars1  )~5 (~6 e.Commands1  )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_5;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_5;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_6;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_6;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_7 = bb_0;
      refalrts::Iter be_7 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_7, be_7 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_7, be_7 ) )
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_7, be_7 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_3, be_3 ) )
        continue;
      eName_1_b_1 = bb_3;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_3;
      refalrts::use( eName_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      ePattern_M_1_b_1 = 0;
      ePattern_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_8, be_8 ) )
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_1_2, sInner_1_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::empty_seq( bb_4, be_4 ) )
          continue;
        ePattern_E_1_b_1 = bb_8;
        refalrts::use( ePattern_E_1_b_1 );
        ePattern_E_1_e_1 = be_8;
        refalrts::use( ePattern_E_1_e_1 );
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
          {refalrts::icSpliceSTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_1_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_1_b_1, & ePattern_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
        if( ! refalrts::copy_stvar( sInner_1_3, sInner_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_4, sInner_1_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_5, sInner_1_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & TkOpenADT, "TkOpenADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & TkCloseADT, "TkCloseADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
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
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n28 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n22, n27 );
        res = refalrts::splice_elem( res, n27 );
        refalrts::link_brackets( n23, n26 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
        res = refalrts::splice_stvar( res, sInner_1_5 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n22 );
        refalrts::link_brackets( n20, n21 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n17, n19 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sInner_1_4 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_1_3 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, ePattern_M_1_b_1, ePattern_M_1_e_1 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sInner_1_2 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sInner_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( ePattern_M_1_b_1, ePattern_M_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter sInner_1_1;
    refalrts::use( sInner_1_1 );
    static refalrts::Iter sInner_1_2;
    refalrts::use( sInner_1_2 );
    static refalrts::Iter ePattern_M_1_b_1;
    refalrts::use( ePattern_M_1_b_1 );
    static refalrts::Iter ePattern_M_1_e_1;
    refalrts::use( ePattern_M_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sInner_1_3;
    refalrts::use( sInner_1_3 );
    static refalrts::Iter sInner_1_4;
    refalrts::use( sInner_1_4 );
    static refalrts::Iter sInner_1_5;
    refalrts::use( sInner_1_5 );
    static refalrts::Iter eName_1_b_2;
    refalrts::use( eName_1_b_2 );
    static refalrts::Iter eName_1_e_2;
    refalrts::use( eName_1_e_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkOpenADT s.Inner1  )~1 (~2 & TkName e.Name1  )~2 e.Pattern_M1  (~3 & TkCloseADT s.Inner1  )~3 (~4 & RightPtr s.Num1  )~4 e.Pattern_E1  (~5 e.Vars1  )~5 (~6 e.Commands1  )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_5;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_5;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_6;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_6;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_7 = bb_0;
      refalrts::Iter be_7 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_7, be_7 ) )
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_7, be_7 ) )
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) )
        continue;
      eName_1_b_1 = bb_2;
      refalrts::use( eName_1_b_1 );
      eName_1_e_1 = be_2;
      refalrts::use( eName_1_e_1 );
      if( ! refalrts::svar_left( sInner_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      ePattern_M_1_b_1 = 0;
      ePattern_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_8, be_8 ) )
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_3, be_3 ) )
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_8, be_8 ) )
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_4, be_4 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_1_2, sInner_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_1_b_1 = bb_8;
        refalrts::use( ePattern_E_1_b_1 );
        ePattern_E_1_e_1 = be_8;
        refalrts::use( ePattern_E_1_e_1 );
        if( ! refalrts::svar_left( sNum_1_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
          {refalrts::icSpliceSTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_1_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_1_b_1, & ePattern_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1_1},
          {refalrts::icCopySTVar, & sInner_1_1},
          {refalrts::icCopyEVar, & eName_1_b_1, & eName_1_e_1},
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
        if( ! refalrts::copy_stvar( sInner_1_3, sInner_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_4, sInner_1_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_1_5, sInner_1_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_1_b_2, eName_1_e_2, eName_1_b_1, eName_1_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkOpenADT, "TkOpenADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_bracket( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_bracket( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_open_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_name( n15, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_open_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & TkCloseADT, "TkCloseADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_bracket( n19 ) )
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
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_name( n25, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_call( n28 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n28 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n22, n27 );
        res = refalrts::splice_elem( res, n27 );
        refalrts::link_brackets( n23, n26 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_evar( res, eName_1_b_2, eName_1_e_2 );
        res = refalrts::splice_stvar( res, sInner_1_5 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n22 );
        refalrts::link_brackets( n20, n21 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n17, n19 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sInner_1_4 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        refalrts::link_brackets( n14, n16 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_stvar( res, sInner_1_3 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, ePattern_M_1_b_1, ePattern_M_1_e_1 );
        refalrts::link_brackets( n11, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_1_2 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sInner_1_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( ePattern_M_1_b_1, ePattern_M_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_1_2, sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
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
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
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
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
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
    static refalrts::Iter eVars_B_1_b_1;
    refalrts::use( eVars_B_1_b_1 );
    static refalrts::Iter eVars_B_1_e_1;
    refalrts::use( eVars_B_1_e_1 );
    static refalrts::Iter eVars_E_1_b_1;
    refalrts::use( eVars_E_1_b_1 );
    static refalrts::Iter eVars_E_1_e_1;
    refalrts::use( eVars_E_1_e_1 );
    static refalrts::Iter sCount_1_1;
    refalrts::use( sCount_1_1 );
    static refalrts::Iter sMode_1_3;
    refalrts::use( sMode_1_3 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sCount_1_2;
    refalrts::use( sCount_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkVariable s.Mode1  e.Index1  )~2 e.Pattern_E1  (~3 e.Vars_B1  (~4 s.Count1  s.Mode1  e.Index1  )~4 e.Vars_E1  )~3 (~5 e.Commands1  )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_5;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_5;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_7 = bb_3;
      refalrts::Iter be_7 = be_3;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_6;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_6;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sMode_1_1, bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
      eVars_B_1_b_1 = 0;
      eVars_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_4, be_4 ) )
          continue;
        eVars_E_1_b_1 = bb_8;
        refalrts::use( eVars_E_1_b_1 );
        eVars_E_1_e_1 = be_8;
        refalrts::use( eVars_E_1_e_1 );
        if( ! refalrts::svar_left( sCount_1_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1_1},
          {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_1_b_1, & eVars_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_2},
          {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
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
          {refalrts::icCopySTVar, & sMode_1_1},
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
        if( ! refalrts::copy_stvar( sMode_1_3, sMode_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_1_2, sCount_1_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & LeftPtr, "LeftPtr" ) )
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
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_bracket( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_close_bracket( n22 ) )
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
        refalrts::link_brackets( n15, n23 );
        res = refalrts::splice_elem( res, n23 );
        refalrts::link_brackets( n16, n22 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
        res = refalrts::splice_stvar( res, sMode_1_3 );
        refalrts::push_stack( n21 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, sCount_1_2 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n8, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eVars_E_1_b_1, eVars_E_1_e_1 );
        refalrts::link_brackets( n9, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
        res = refalrts::splice_stvar( res, sMode_1_2 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, sCount_1_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eVars_B_1_b_1, eVars_B_1_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
        res = refalrts::splice_stvar( res, sMode_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eVars_B_1_b_1, eVars_B_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eVars_B_1_b_1;
    refalrts::use( eVars_B_1_b_1 );
    static refalrts::Iter eVars_B_1_e_1;
    refalrts::use( eVars_B_1_e_1 );
    static refalrts::Iter eVars_E_1_b_1;
    refalrts::use( eVars_E_1_b_1 );
    static refalrts::Iter eVars_E_1_e_1;
    refalrts::use( eVars_E_1_e_1 );
    static refalrts::Iter sCount_1_1;
    refalrts::use( sCount_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter sMode_1_3;
    refalrts::use( sMode_1_3 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sCount_1_2;
    refalrts::use( sCount_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkVariable s.Mode1  e.Index1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars_B1  (~4 s.Count1  s.Mode1  e.Index1  )~4 e.Vars_E1  )~3 (~5 e.Commands1  )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_5;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_5;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_7 = bb_3;
      refalrts::Iter be_7 = be_3;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      ePattern_E_1_b_1 = bb_6;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_6;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
        continue;
      eIndex_1_b_1 = bb_1;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_1;
      refalrts::use( eIndex_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
      eVars_B_1_b_1 = 0;
      eVars_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_8 = bb_7;
        refalrts::Iter be_8 = be_7;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_8, be_8 ) )
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_4, be_4 ) )
          continue;
        eVars_E_1_b_1 = bb_8;
        refalrts::use( eVars_E_1_b_1 );
        eVars_E_1_e_1 = be_8;
        refalrts::use( eVars_E_1_e_1 );
        if( ! refalrts::svar_left( sCount_1_1, bb_4, be_4 ) )
          continue;
        if( ! refalrts::empty_seq( bb_4, be_4 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceSTVar, & sLastBracket_1_1},
          {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1_1},
          {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_1_b_1, & eVars_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_1_2},
          {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
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
          {refalrts::icCopySTVar, & sMode_1_1},
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
        if( ! refalrts::copy_stvar( sMode_1_3, sMode_1_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_1_2, sCount_1_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
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
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_close_bracket( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_bracket( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_open_bracket( n16 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_name( n17, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_open_call( n19 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_name( n20, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_close_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_close_bracket( n22 ) )
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
        refalrts::link_brackets( n15, n23 );
        res = refalrts::splice_elem( res, n23 );
        refalrts::link_brackets( n16, n22 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
        res = refalrts::splice_stvar( res, sMode_1_3 );
        refalrts::push_stack( n21 );
        refalrts::push_stack( n19 );
        res = refalrts::splice_elem( res, n21 );
        res = refalrts::splice_stvar( res, sCount_1_2 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_stvar( res, sNum_1_2 );
        res = refalrts::splice_elem( res, n18 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n8, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eVars_E_1_b_1, eVars_E_1_e_1 );
        refalrts::link_brackets( n9, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
        res = refalrts::splice_stvar( res, sMode_1_2 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, sCount_1_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eVars_B_1_b_1, eVars_B_1_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
        res = refalrts::splice_stvar( res, sMode_1_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
        res = refalrts::splice_stvar( res, sLastBracket_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eVars_B_1_b_1, eVars_B_1_e_1, bb_7, be_7 ) );
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkVariable 'e e.Index1  )~2 (~3 & RightPtr s.Num1  )~3 e.Pattern_E1  (~4 e.Vars1  )~4 (~5 e.Commands1  )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_4;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_4;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_5;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_5;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_6 = bb_0;
      refalrts::Iter be_6 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_6;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_6;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
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
      if( ! refalrts::alloc_number( n8, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_char( n9, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_close_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_close_bracket( n11 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_name( n15, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_char( n16, 'e' ) )
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
      refalrts::link_brackets( n12, n18 );
      res = refalrts::splice_elem( res, n18 );
      refalrts::link_brackets( n13, n17 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n12 );
      refalrts::link_brackets( n6, n11 );
      res = refalrts::splice_elem( res, n11 );
      refalrts::link_brackets( n7, n10 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkVariable 's e.Index1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkVariable 't e.Index1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkVariable 's e.Index1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) )
        continue;
      if( ! refalrts::char_left( 's', bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_1;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_1;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 's' ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    // s.LastBracket1  e.Pattern_B1  (~1 & TkVariable 't e.Index1  )~1 (~2 & RightPtr s.Num1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) )
        continue;
      if( ! refalrts::char_left( 't', bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_1;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_1;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_name( n6, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_char( n7, 't' ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_char( n12, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_close_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n2, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_B_1_b_1;
    refalrts::use( ePattern_B_1_b_1 );
    static refalrts::Iter ePattern_B_1_e_1;
    refalrts::use( ePattern_B_1_e_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter ePattern_E_1_b_1;
    refalrts::use( ePattern_E_1_b_1 );
    static refalrts::Iter ePattern_E_1_e_1;
    refalrts::use( ePattern_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eIndex_1_b_3;
    refalrts::use( eIndex_1_b_3 );
    static refalrts::Iter eIndex_1_e_3;
    refalrts::use( eIndex_1_e_3 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.LastBracket1  e.Pattern_B1  (~1 & LeftPtr s.Num1  )~1 (~2 & TkVariable 'e e.Index1  )~2 e.Pattern_E1  (~3 e.Vars1  )~3 (~4 e.Commands1  )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_3;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_3;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_4;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_4;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_B_1_b_1 = 0;
    ePattern_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
      ePattern_E_1_b_1 = bb_5;
      refalrts::use( ePattern_E_1_b_1 );
      ePattern_E_1_e_1 = be_5;
      refalrts::use( ePattern_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceSTVar, & sLastBracket_1_1},
        {refalrts::icSpliceEVar, & ePattern_B_1_b_1, & ePattern_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_1_b_1, & ePattern_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
      if( ! refalrts::copy_evar( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_1_b_3, eIndex_1_e_3, eIndex_1_b_2, eIndex_1_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_1_2, sNum_1_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_name( n3, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_char( n4, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & LeftPtr, "LeftPtr" ) )
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
      if( ! refalrts::alloc_number( n11, 1UL ) )
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
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_char( n19, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n22 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n15, n21 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n16, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eIndex_1_b_3, eIndex_1_e_3 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::link_brackets( n9, n14 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::link_brackets( n10, n13 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_1_b_1, eVars_1_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, ePattern_E_1_b_1, ePattern_E_1_e_1 );
      refalrts::link_brackets( n6, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, ePattern_B_1_b_1, ePattern_B_1_e_1 );
      res = refalrts::splice_stvar( res, sLastBracket_1_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( ePattern_B_1_b_1, ePattern_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    // s.LastBracket1  e.Pattern1  (~1 e.Vars1  )~1 (~2 e.Commands1  )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    ePattern_1_b_1 = bb_0;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_0;
    refalrts::use( ePattern_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
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
      {refalrts::icSpliceSTVar, & sLastBracket_1_1},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
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
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    res = refalrts::splice_stvar( res, sLastBracket_1_1 );
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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    // s.LastBracket1  e.Commands1 
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
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

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter eCommandsBeforeEMatch_2_b_1;
    refalrts::use( eCommandsBeforeEMatch_2_b_1 );
    static refalrts::Iter eCommandsBeforeEMatch_2_e_1;
    refalrts::use( eCommandsBeforeEMatch_2_e_1 );
    static refalrts::Iter eCommandsBeforeEMatch_2_b_2;
    refalrts::use( eCommandsBeforeEMatch_2_b_2 );
    static refalrts::Iter eCommandsBeforeEMatch_2_e_2;
    refalrts::use( eCommandsBeforeEMatch_2_e_2 );
    // s.LastBracket1  (~1 e.Commands_E1  )~1 e.CommandsBeforeEMatch2 
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eCommands_E_1_b_1 = bb_1;
    refalrts::use( eCommands_E_1_b_1 );
    eCommands_E_1_e_1 = be_1;
    refalrts::use( eCommands_E_1_e_1 );
    eCommandsBeforeEMatch_2_b_1 = bb_0;
    refalrts::use( eCommandsBeforeEMatch_2_b_1 );
    eCommandsBeforeEMatch_2_e_1 = be_0;
    refalrts::use( eCommandsBeforeEMatch_2_e_1 );
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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eCommands_B_1_b_1;
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // s.LastBracket1  (~1 e.Scanned1  )~1 e.Commands_B1  (~2 & CmdOpenedE & AlgLeft s.Num1  'e e.Index1  )~2 e.Commands_E1 
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_1;
    refalrts::use( eScanned_1_e_1 );
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
      refalrts::use( eCommands_E_1_b_1 );
      eCommands_E_1_e_1 = be_3;
      refalrts::use( eCommands_E_1_e_1 );
      if( ! refalrts::svar_left( sNum_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) )
        continue;
      eIndex_1_b_1 = bb_2;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_2;
      refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    // s.LastBracket1  (~1 e.Scanned1  )~1 e.Commands1 
    if( ! refalrts::svar_left( sLastBracket_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eScanned_1_b_1 = bb_1;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_1;
    refalrts::use( eScanned_1_e_1 );
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter sCommand_2_1;
    refalrts::use( sCommand_2_1 );
    static refalrts::Iter sDirection_2_1;
    refalrts::use( sDirection_2_1 );
    static refalrts::Iter eInfo_2_b_1;
    refalrts::use( eInfo_2_b_1 );
    static refalrts::Iter eInfo_2_e_1;
    refalrts::use( eInfo_2_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    // s.Num1  s.LastBracket1  (~1 s.Command2  s.Direction2  s.Num1  e.Info2  )~1
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
    refalrts::use( eInfo_2_b_1 );
    eInfo_2_e_1 = be_1;
    refalrts::use( eInfo_2_e_1 );
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
    refalrts::use( sCommand_2_1 );
    static refalrts::Iter sDirection_2_1;
    refalrts::use( sDirection_2_1 );
    static refalrts::Iter sOtherNum_2_1;
    refalrts::use( sOtherNum_2_1 );
    static refalrts::Iter eInfo_2_b_1;
    refalrts::use( eInfo_2_b_1 );
    static refalrts::Iter eInfo_2_e_1;
    refalrts::use( eInfo_2_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sLastBracket_1_1;
    refalrts::use( sLastBracket_1_1 );
    // s.Num1  s.LastBracket1  (~1 s.Command2  s.Direction2  s.OtherNum2  e.Info2  )~1
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
    refalrts::use( eInfo_2_b_1 );
    eInfo_2_e_1 = be_1;
    refalrts::use( eInfo_2_e_1 );
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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eBoundedBrackets_B_1_b_1;
    refalrts::use( eBoundedBrackets_B_1_b_1 );
    static refalrts::Iter eBoundedBrackets_B_1_e_1;
    refalrts::use( eBoundedBrackets_B_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eBoundedBrackets_E_1_b_1;
    refalrts::use( eBoundedBrackets_E_1_b_1 );
    static refalrts::Iter eBoundedBrackets_E_1_e_1;
    refalrts::use( eBoundedBrackets_E_1_e_1 );
    static refalrts::Iter eCommands_B_1_b_1;
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sCommand_1_1;
    refalrts::use( sCommand_1_1 );
    static refalrts::Iter sDirection_1_1;
    refalrts::use( sDirection_1_1 );
    static refalrts::Iter eArgs_1_b_1;
    refalrts::use( eArgs_1_b_1 );
    static refalrts::Iter eArgs_1_e_1;
    refalrts::use( eArgs_1_e_1 );
    static refalrts::Iter sLastBracket_1_2;
    refalrts::use( sLastBracket_1_2 );
    static refalrts::Iter sLastBracket_1_3;
    refalrts::use( sLastBracket_1_3 );
    static refalrts::Iter sNum_1_3;
    refalrts::use( sNum_1_3 );
    // s.LastBracket1  (~1 e.BoundedBrackets_B1  s.Num1  e.BoundedBrackets_E1  )~1 (~2 e.Scanned1  )~2 e.Commands_B1  (~3 s.Command1  s.Direction1  s.Num1  e.Args1  )~3 e.Commands_E1 
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
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_2;
    refalrts::use( eScanned_1_e_1 );
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
      refalrts::use( eBoundedBrackets_E_1_b_1 );
      eBoundedBrackets_E_1_e_1 = be_5;
      refalrts::use( eBoundedBrackets_E_1_e_1 );
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
        refalrts::use( eCommands_E_1_b_1 );
        eCommands_E_1_e_1 = be_6;
        refalrts::use( eCommands_E_1_e_1 );
        if( ! refalrts::svar_left( sCommand_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::svar_left( sDirection_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::repeated_stvar_left( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
          continue;
        eArgs_1_b_1 = bb_3;
        refalrts::use( eArgs_1_b_1 );
        eArgs_1_e_1 = be_3;
        refalrts::use( eArgs_1_e_1 );
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
    refalrts::use( sLastBracket_1_1 );
    static refalrts::Iter eScanned_1_b_1;
    refalrts::use( eScanned_1_b_1 );
    static refalrts::Iter eScanned_1_e_1;
    refalrts::use( eScanned_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter eUnusedBoundedBrackets_1_b_1;
    refalrts::use( eUnusedBoundedBrackets_1_b_1 );
    static refalrts::Iter eUnusedBoundedBrackets_1_e_1;
    refalrts::use( eUnusedBoundedBrackets_1_e_1 );
    // s.LastBracket1  (~1 e.UnusedBoundedBrackets1  )~1 (~2 e.Scanned1  )~2 e.Commands1 
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
    eUnusedBoundedBrackets_1_b_1 = bb_1;
    refalrts::use( eUnusedBoundedBrackets_1_b_1 );
    eUnusedBoundedBrackets_1_e_1 = be_1;
    refalrts::use( eUnusedBoundedBrackets_1_e_1 );
    eScanned_1_b_1 = bb_2;
    refalrts::use( eScanned_1_b_1 );
    eScanned_1_e_1 = be_2;
    refalrts::use( eScanned_1_e_1 );
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
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
    refalrts::use( sBracketNum_2_1 );
    static refalrts::Iter sInnerNum_2_1;
    refalrts::use( sInnerNum_2_1 );
    static refalrts::Iter sDirection_2_1;
    refalrts::use( sDirection_2_1 );
    // (~1 & CmdBrackets s.Direction2  s.BracketNum2  s.InnerNum2  )~1
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
    refalrts::use( sBracketNum_2_1 );
    static refalrts::Iter sCommand_2_1;
    refalrts::use( sCommand_2_1 );
    static refalrts::Iter sDirection_2_1;
    refalrts::use( sDirection_2_1 );
    static refalrts::Iter eInfo_2_b_1;
    refalrts::use( eInfo_2_b_1 );
    static refalrts::Iter eInfo_2_e_1;
    refalrts::use( eInfo_2_e_1 );
    // (~1 s.Command2  s.Direction2  s.BracketNum2  e.Info2  )~1
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
    eInfo_2_b_1 = bb_1;
    refalrts::use( eInfo_2_b_1 );
    eInfo_2_e_1 = be_1;
    refalrts::use( eInfo_2_e_1 );
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
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    // e.Commands1 
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
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
    refalrts::use( eUnique_1_b_1 );
    static refalrts::Iter eUnique_1_e_1;
    refalrts::use( eUnique_1_e_1 );
    static refalrts::Iter sRepeated_1_1;
    refalrts::use( sRepeated_1_1 );
    static refalrts::Iter eMiddle_1_b_1;
    refalrts::use( eMiddle_1_b_1 );
    static refalrts::Iter eMiddle_1_e_1;
    refalrts::use( eMiddle_1_e_1 );
    static refalrts::Iter eRest_1_b_1;
    refalrts::use( eRest_1_b_1 );
    static refalrts::Iter eRest_1_e_1;
    refalrts::use( eRest_1_e_1 );
    static refalrts::Iter sRepeated_1_2;
    refalrts::use( sRepeated_1_2 );
    // e.Unique1  s.Repeated1  e.Middle1  s.Repeated1  e.Rest1 
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
        refalrts::use( eRest_1_b_1 );
        eRest_1_e_1 = be_2;
        refalrts::use( eRest_1_e_1 );
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
    refalrts::use( eUnique_1_b_1 );
    static refalrts::Iter eUnique_1_e_1;
    refalrts::use( eUnique_1_e_1 );
    // e.Unique1 
    eUnique_1_b_1 = bb_0;
    refalrts::use( eUnique_1_b_1 );
    eUnique_1_e_1 = be_0;
    refalrts::use( eUnique_1_e_1 );
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
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & TkOpenBracket s.Number1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, '~'},
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
    if( ! refalrts::alloc_char( n1, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & TkCloseBracket s.Number1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, '~'},
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
    if( ! refalrts::alloc_char( n1, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & TkOpenADT s.Number1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icChar, 0, 0, '~'},
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
    if( ! refalrts::alloc_char( n1, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & TkCloseADT s.Number1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ']'},
      {refalrts::icChar, 0, 0, '~'},
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
    if( ! refalrts::alloc_char( n1, ']' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '~' ) )
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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    // (~1 & TkChar s.Char1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & TkNumber s.Number1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // (~1 & TkName e.Name1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 & TkVariable s.Mode1  e.Index1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
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
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eTail_1_b_1;
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    // (~1 & TkIdentifier e.Name1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
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
    refalrts::use( sOther_1_1 );
    // s.Other1 
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
    refalrts::use( eTail_1_b_1 );
    static refalrts::Iter eTail_1_e_1;
    refalrts::use( eTail_1_e_1 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    // (~1 & TkChar s.Char1  )~1 e.Tail1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) )
      break;
    eTail_1_b_1 = bb_0;
    refalrts::use( eTail_1_b_1 );
    eTail_1_e_1 = be_0;
    refalrts::use( eTail_1_e_1 );
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
    refalrts::use( eOther_1_b_1 );
    static refalrts::Iter eOther_1_e_1;
    refalrts::use( eOther_1_e_1 );
    // e.Other1 
    eOther_1_b_1 = bb_0;
    refalrts::use( eOther_1_b_1 );
    eOther_1_e_1 = be_0;
    refalrts::use( eOther_1_e_1 );
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

static refalrts::FnResult CtAlloc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult CtInsert(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult CtBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult CtInsertVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StLink(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult StStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sValue_1_1;
    refalrts::use( sValue_1_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkChar s.Value1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkChar, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sValue_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StChar, (void*) "StChar"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceSTVar, & sValue_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StChar, "StChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sValue_1_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkName e.Name1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkName, bb_3, be_3 ) )
      break;
    eName_1_b_1 = bb_3;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_3;
    refalrts::use( eName_1_e_1 );
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StName, (void*) "StName"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StName, "StName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkNumber s.Number1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkNumber, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNumber_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StNumber, (void*) "StNumber"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StNumber, "StNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eName_1_b_1;
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkIdentifier e.Name1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_3, be_3 ) )
      break;
    eName_1_b_1 = bb_3;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_3;
    refalrts::use( eName_1_e_1 );
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StIdent, (void*) "StIdent"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StIdent, "StIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkOpenBracket s.Num1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenBracket, (void*) "StOpenBracket"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StOpenBracket, "StOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkOpenCall s.Num1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenCall, (void*) "StOpenCall"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StOpenCall, "StOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkOpenADT s.Num1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_3, be_3 ) )
      break;
    if( ! refalrts::empty_seq( bb_3, be_3 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenADT, (void*) "StOpenADT"},
      {refalrts::icSpliceSTVar, & sCounter_1_1},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StOpenADT, "StOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_stvar( res, sCounter_1_3 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n4, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCounter_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eCommands_B_1_b_1;
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sOpenCounter_1_1;
    refalrts::use( sOpenCounter_1_1 );
    static refalrts::Iter sOpenCounter_1_2;
    refalrts::use( sOpenCounter_1_2 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    static refalrts::Iter sCounter_1_4;
    refalrts::use( sCounter_1_4 );
    // (~1 e.Vars1  )~1 (~2 e.Commands_B1  (~3 & CtAlloc & StOpenBracket s.OpenCounter1  s.Num1  )~3 e.Commands_E1  )~2 s.Counter1  (~4 & TkCloseBracket s.Num1  )~4 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    eCommands_B_1_b_1 = 0;
    eCommands_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_2;
      refalrts::Iter be_5 = be_2;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & StOpenBracket, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
        continue;
      eCommands_E_1_b_1 = bb_5;
      refalrts::use( eCommands_E_1_b_1 );
      eCommands_E_1_e_1 = be_5;
      refalrts::use( eCommands_E_1_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenBracket, (void*) "StOpenBracket"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseBracket, (void*) "StCloseBracket"},
        {refalrts::icSpliceSTVar, & sCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StLink, (void*) "StLink"},
        {refalrts::icCopySTVar, & sOpenCounter_1_1},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sOpenCounter_1_2, sOpenCounter_1_1 ) )
        return refalrts::cNoMemory;
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
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & StOpenBracket, "StOpenBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & StCloseBracket, "StCloseBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & StLink, "StLink" ) )
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
      refalrts::link_brackets( n4, n20 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n16, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sCounter_1_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sCounter_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_stvar( res, sCounter_1_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
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
    } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_2, be_2 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eCommands_B_1_b_1;
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sOpenCounter_1_1;
    refalrts::use( sOpenCounter_1_1 );
    static refalrts::Iter sOpenCounter_1_2;
    refalrts::use( sOpenCounter_1_2 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    static refalrts::Iter sCounter_1_4;
    refalrts::use( sCounter_1_4 );
    // (~1 e.Vars1  )~1 (~2 e.Commands_B1  (~3 & CtAlloc & StOpenADT s.OpenCounter1  s.Num1  )~3 e.Commands_E1  )~2 s.Counter1  (~4 & TkCloseADT s.Num1  )~4 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    eCommands_B_1_b_1 = 0;
    eCommands_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_2;
      refalrts::Iter be_5 = be_2;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & StOpenADT, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
        continue;
      eCommands_E_1_b_1 = bb_5;
      refalrts::use( eCommands_E_1_b_1 );
      eCommands_E_1_e_1 = be_5;
      refalrts::use( eCommands_E_1_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenADT, (void*) "StOpenADT"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseADT, (void*) "StCloseADT"},
        {refalrts::icSpliceSTVar, & sCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StLink, (void*) "StLink"},
        {refalrts::icCopySTVar, & sOpenCounter_1_1},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sOpenCounter_1_2, sOpenCounter_1_1 ) )
        return refalrts::cNoMemory;
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
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & StOpenADT, "StOpenADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & StCloseADT, "StCloseADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & StLink, "StLink" ) )
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
      refalrts::link_brackets( n4, n20 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n16, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sCounter_1_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sCounter_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_stvar( res, sCounter_1_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
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
    } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_2, be_2 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eVars_1_b_1;
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    static refalrts::Iter sNum_1_2;
    refalrts::use( sNum_1_2 );
    static refalrts::Iter eCommands_B_1_b_1;
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sOpenCounter_1_1;
    refalrts::use( sOpenCounter_1_1 );
    static refalrts::Iter sOpenCounter_1_2;
    refalrts::use( sOpenCounter_1_2 );
    static refalrts::Iter sCounter_1_2;
    refalrts::use( sCounter_1_2 );
    static refalrts::Iter sCounter_1_3;
    refalrts::use( sCounter_1_3 );
    static refalrts::Iter sCounter_1_4;
    refalrts::use( sCounter_1_4 );
    // (~1 e.Vars1  )~1 (~2 e.Commands_B1  (~3 & CtAlloc & StOpenCall s.OpenCounter1  s.Num1  )~3 e.Commands_E1  )~2 s.Counter1  (~4 & TkCloseCall s.Num1  )~4 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkCloseCall, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sNum_1_1, bb_4, be_4 ) )
      break;
    if( ! refalrts::empty_seq( bb_4, be_4 ) )
      break;
    eCommands_B_1_b_1 = 0;
    eCommands_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_2;
      refalrts::Iter be_5 = be_2;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) )
        continue;
      if( ! refalrts::function_left( & StOpenCall, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_1_2, sNum_1_1, bb_3, be_3 ) )
        continue;
      eCommands_E_1_b_1 = bb_5;
      refalrts::use( eCommands_E_1_b_1 );
      eCommands_E_1_e_1 = be_5;
      refalrts::use( eCommands_E_1_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::empty_seq( bb_3, be_3 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_1_b_1, & eCommands_B_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenCall, (void*) "StOpenCall"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_1_b_1, & eCommands_E_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseCall, (void*) "StCloseCall"},
        {refalrts::icSpliceSTVar, & sCounter_1_1},
        {refalrts::icSpliceSTVar, & sNum_1_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StStack, (void*) "StStack"},
        {refalrts::icCopySTVar, & sOpenCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StStack, (void*) "StStack"},
        {refalrts::icCopySTVar, & sCounter_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sOpenCounter_1_2, sOpenCounter_1_1 ) )
        return refalrts::cNoMemory;
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
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_name( n6, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n7 = 0;
      if( ! refalrts::alloc_name( n7, & StOpenCall, "StOpenCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n9 = 0;
      if( ! refalrts::alloc_open_bracket( n9 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n10 = 0;
      if( ! refalrts::alloc_name( n10, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & StCloseCall, "StCloseCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_close_bracket( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_bracket( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_close_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_open_call( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_call( n28 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n28 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n25 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sCounter_1_4 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      refalrts::link_brackets( n4, n24 );
      res = refalrts::splice_elem( res, n24 );
      refalrts::link_brackets( n20, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sCounter_1_3 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n16, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_2 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sCounter_1_2 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      refalrts::link_brackets( n9, n12 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_1_2 );
      res = refalrts::splice_stvar( res, sCounter_1_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eCommands_E_1_b_1, eCommands_E_1_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eCommands_B_1_b_1, eCommands_B_1_e_1 );
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
    } while ( refalrts::open_evar_advance( eCommands_B_1_b_1, eCommands_B_1_e_1, bb_2, be_2 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
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
    static refalrts::Iter eVars_B_1_b_1;
    refalrts::use( eVars_B_1_b_1 );
    static refalrts::Iter eVars_B_1_e_1;
    refalrts::use( eVars_B_1_e_1 );
    static refalrts::Iter eVars_E_1_b_1;
    refalrts::use( eVars_E_1_b_1 );
    static refalrts::Iter eVars_E_1_e_1;
    refalrts::use( eVars_E_1_e_1 );
    static refalrts::Iter sUsings_1_1;
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sUsings_1_2;
    refalrts::use( sUsings_1_2 );
    // (~1 e.Vars_B1  (~2 s.Usings1  s.Mode1  e.Index1  )~2 e.Vars_E1  )~1 (~3 e.Commands1  )~3 s.Counter1  (~4 & TkVariable s.Mode1  e.Index1  )~4 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    eCommands_1_b_1 = bb_3;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_3;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_4, be_4 ) )
      break;
    eIndex_1_b_1 = bb_4;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_4;
    refalrts::use( eIndex_1_e_1 );
    eVars_B_1_b_1 = 0;
    eVars_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_1;
      refalrts::Iter be_5 = be_1;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_1_2, sMode_1_1, bb_2, be_2 ) )
        continue;
      eVars_E_1_b_1 = bb_5;
      refalrts::use( eVars_E_1_b_1 );
      eVars_E_1_e_1 = be_5;
      refalrts::use( eVars_E_1_e_1 );
      if( ! refalrts::svar_left( sUsings_1_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::empty_seq( bb_2, be_2 ) )
        continue;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
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
        {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsertVar, (void*) "CtInsertVar"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sUsings_1_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceSTVar, & sMode_1_2},
        {refalrts::icSpliceEVar, & eIndex_1_b_2, & eIndex_1_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
      if( ! refalrts::alloc_open_bracket( n10 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n11 = 0;
      if( ! refalrts::alloc_name( n11, & CtInsertVar, "CtInsertVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
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
      res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1_1 );
      refalrts::link_brackets( n9, n16 );
      res = refalrts::splice_elem( res, n16 );
      refalrts::link_brackets( n10, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
      res = refalrts::splice_stvar( res, sMode_1_2 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sUsings_1_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1  (~3 & TkVariable s.Mode1  e.Index1  )~3 e.Result1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & TkVariable, bb_3, be_3 ) )
      break;
    eResult_1_b_1 = bb_0;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_0;
    refalrts::use( eResult_1_e_1 );
    if( ! refalrts::svar_left( sMode_1_1, bb_3, be_3 ) )
      break;
    eIndex_1_b_1 = bb_3;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_3;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_1_b_1, & eVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1_1},
      {refalrts::icSpliceEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_1_b_1, & eCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsertVar, (void*) "CtInsertVar"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icCopySTVar, & sMode_1_1},
      {refalrts::icCopyEVar, & eIndex_1_b_1, & eIndex_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & GenResult, "GenResult" ) )
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CtInsertVar, "CtInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_number( n10, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1_1 );
    refalrts::link_brackets( n7, n12 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n8, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_1_b_2, eIndex_1_e_2 );
    res = refalrts::splice_stvar( res, sMode_1_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    // (~1 e.Vars1  )~1 (~2 e.Commands1  )~2 s.Counter1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    eVars_1_b_1 = bb_1;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_1;
    refalrts::use( eVars_1_e_1 );
    eCommands_1_b_1 = bb_2;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_2;
    refalrts::use( eCommands_1_e_1 );
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
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
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

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SeparateAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAllocates_1_b_1;
    refalrts::use( eAllocates_1_b_1 );
    static refalrts::Iter eAllocates_1_e_1;
    refalrts::use( eAllocates_1_e_1 );
    static refalrts::Iter eInfo_1_b_1;
    refalrts::use( eInfo_1_b_1 );
    static refalrts::Iter eInfo_1_e_1;
    refalrts::use( eInfo_1_e_1 );
    // (~1 e.Allocates1  )~1 (~2 & CtAlloc e.Info1  )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_1_b_1 = bb_1;
    refalrts::use( eAllocates_1_b_1 );
    eAllocates_1_e_1 = be_1;
    refalrts::use( eAllocates_1_e_1 );
    eInfo_1_b_1 = bb_2;
    refalrts::use( eInfo_1_b_1 );
    eInfo_1_e_1 = be_2;
    refalrts::use( eInfo_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_1_b_1, & eAllocates_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icSpliceEVar, & eInfo_1_b_1, & eInfo_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eInfo_1_b_1, eInfo_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_1_b_1, eAllocates_1_e_1 );
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
    static refalrts::Iter eAllocates_1_b_1;
    refalrts::use( eAllocates_1_b_1 );
    static refalrts::Iter eAllocates_1_e_1;
    refalrts::use( eAllocates_1_e_1 );
    static refalrts::Iter tOther_1_1;
    refalrts::use( tOther_1_1 );
    // (~1 e.Allocates1  )~1 t.Other1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eAllocates_1_b_1 = bb_1;
    refalrts::use( eAllocates_1_b_1 );
    eAllocates_1_e_1 = be_1;
    refalrts::use( eAllocates_1_e_1 );
    if( ! refalrts::tvar_left( tOther_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_1_b_1, & eAllocates_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tOther_1_1},
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
    res = refalrts::splice_stvar( res, tOther_1_1 );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, eAllocates_1_b_1, eAllocates_1_e_1 );
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

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommands_1_b_1;
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    // e.Commands1 
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ConvertCommands_Separated, (void*) "ConvertCommands_Separated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & SeparateAllocates, (void*) "SeparateAllocates"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_name( n1, & ConvertCommands_Separated, "ConvertCommands_Separated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & SeparateAllocates, "SeparateAllocates" ) )
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
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_1_b_1, eCommands_1_e_1 );
    refalrts::link_brackets( n5, n6 );
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

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ConvertCommands_Separated(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAllocates_1_b_1;
    refalrts::use( eAllocates_1_b_1 );
    static refalrts::Iter eAllocates_1_e_1;
    refalrts::use( eAllocates_1_e_1 );
    static refalrts::Iter eOtherCommands_1_b_1;
    refalrts::use( eOtherCommands_1_b_1 );
    static refalrts::Iter eOtherCommands_1_e_1;
    refalrts::use( eOtherCommands_1_e_1 );
    // (~1 e.Allocates1  )~1 e.OtherCommands1 
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eAllocates_1_b_1 = bb_1;
    refalrts::use( eAllocates_1_b_1 );
    eAllocates_1_e_1 = be_1;
    refalrts::use( eAllocates_1_e_1 );
    eOtherCommands_1_b_1 = bb_0;
    refalrts::use( eOtherCommands_1_b_1 );
    eOtherCommands_1_e_1 = be_0;
    refalrts::use( eOtherCommands_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertAllocates, (void*) "ConvertAllocates"},
      {refalrts::icSpliceEVar, & eAllocates_1_b_1, & eAllocates_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertCommand, (void*) "ConvertCommand"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eOtherCommands_1_b_1, & eOtherCommands_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ConvertAllocates, "ConvertAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ConvertCommand, "ConvertCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eOtherCommands_1_b_1, eOtherCommands_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eAllocates_1_b_1, eAllocates_1_e_1 );
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

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tFirst_1_1;
    refalrts::use( tFirst_1_1 );
    static refalrts::Iter tLast_1_1;
    refalrts::use( tLast_1_1 );
    static refalrts::Iter eMedium_1_b_1;
    refalrts::use( eMedium_1_b_1 );
    static refalrts::Iter eMedium_1_e_1;
    refalrts::use( eMedium_1_e_1 );
    // t.First1  e.Medium1  t.Last1 
    if( ! refalrts::tvar_left( tFirst_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::tvar_right( tLast_1_1, bb_0, be_0 ) )
      break;
    eMedium_1_b_1 = bb_0;
    refalrts::use( eMedium_1_b_1 );
    eMedium_1_e_1 = be_0;
    refalrts::use( eMedium_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tLast_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eMedium_1_b_1, & eMedium_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tFirst_1_1},
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
    if( ! refalrts::alloc_name( n1, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tFirst_1_1 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMedium_1_b_1, eMedium_1_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tLast_1_1 );
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
    static refalrts::Iter tOne_1_1;
    refalrts::use( tOne_1_1 );
    // t.One1 
    if( ! refalrts::tvar_left( tOne_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOne_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOne_1_1 );
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

refalrts::FnResult CmdInsertEVar(refalrts::Iter, refalrts::Iter) {
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

refalrts::FnResult ElElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult ElSTVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult ElemType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sChar_1_1;
    refalrts::use( sChar_1_1 );
    // & StChar s.Char1 
    if( ! refalrts::function_left( & StChar, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sChar_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElChar, (void*) "ElChar"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElChar, "ElChar" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sChar_1_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    // & StName e.Name1 
    if( ! refalrts::function_left( & StName, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_0;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_0;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElName, (void*) "ElName"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElName, "ElName" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    refalrts::use( sNumber_1_1 );
    // & StNumber s.Number1 
    if( ! refalrts::function_left( & StNumber, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElNumber, (void*) "ElNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElNumber, "ElNumber" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    // & StIdent e.Name1 
    if( ! refalrts::function_left( & StIdent, bb_0, be_0 ) )
      break;
    eName_1_b_1 = bb_0;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_0;
    refalrts::use( eName_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElIdent, (void*) "ElIdent"},
      {refalrts::icSpliceEVar, & eName_1_b_1, & eName_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElIdent, "ElIdent" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_1_b_1, eName_1_e_1 );
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StOpenADT s.Num1 
    if( ! refalrts::function_left( & StOpenADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenADT, (void*) "ElOpenADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenADT, "ElOpenADT" ) )
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StCloseADT s.Num1 
    if( ! refalrts::function_left( & StCloseADT, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseADT, (void*) "ElCloseADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseADT, "ElCloseADT" ) )
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StOpenBracket s.Num1 
    if( ! refalrts::function_left( & StOpenBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenBracket, (void*) "ElOpenBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenBracket, "ElOpenBracket" ) )
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StCloseBracket s.Num1 
    if( ! refalrts::function_left( & StCloseBracket, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseBracket, (void*) "ElCloseBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseBracket, "ElCloseBracket" ) )
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StOpenCall s.Num1 
    if( ! refalrts::function_left( & StOpenCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenCall, (void*) "ElOpenCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElOpenCall, "ElOpenCall" ) )
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
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // & StCloseCall s.Num1 
    if( ! refalrts::function_left( & StCloseCall, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseCall, (void*) "ElCloseCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & ElCloseCall, "ElCloseCall" ) )
      return refalrts::cNoMemory;
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

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sType_1_1;
    refalrts::use( sType_1_1 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eValue_1_b_1;
    refalrts::use( eValue_1_b_1 );
    static refalrts::Iter eValue_1_e_1;
    refalrts::use( eValue_1_e_1 );
    // (~1 & CtAlloc s.Type1  s.Number1  e.Value1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    eValue_1_b_1 = bb_1;
    refalrts::use( eValue_1_b_1 );
    eValue_1_e_1 = be_1;
    refalrts::use( eValue_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ElemType, (void*) "ElemType"},
      {refalrts::icSpliceSTVar, & sType_1_1},
      {refalrts::icSpliceEVar, & eValue_1_b_1, & eValue_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ElemType, "ElemType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eValue_1_b_1, eValue_1_e_1 );
    res = refalrts::splice_stvar( res, sType_1_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNumber_1_1 );
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

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & CtInsert s.Number1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElElem, (void*) "ElElem"},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElElem, "ElElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
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
    static refalrts::Iter sUsings_1_1;
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 & CtInsertVar s.Usings1  'e e.Index1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertEVar, (void*) "CmdInsertEVar"},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertEVar, "CmdInsertEVar" ) )
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sSTMode_1_1;
    refalrts::use( sSTMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 & CtInsertVar s.Usings1  s.STMode1  e.Index1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sSTMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElSTVar, (void*) "ElSTVar"},
      {refalrts::icSpliceSTVar, & sUsings_1_1},
      {refalrts::icSpliceSTVar, & sSTMode_1_1},
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
    if( ! refalrts::alloc_name( n1, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElSTVar, "ElSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eIndex_1_b_1, eIndex_1_e_1 );
    res = refalrts::splice_stvar( res, sSTMode_1_1 );
    res = refalrts::splice_stvar( res, sUsings_1_1 );
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
    static refalrts::Iter sNumber_1_1;
    refalrts::use( sNumber_1_1 );
    // (~1 & CtBrackets & StStack s.Number1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StStack, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdPushStack, (void*) "CmdPushStack"},
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
    if( ! refalrts::alloc_name( n1, & CmdPushStack, "CmdPushStack" ) )
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
    static refalrts::Iter sLeftNumber_1_1;
    refalrts::use( sLeftNumber_1_1 );
    static refalrts::Iter sRightNumber_1_1;
    refalrts::use( sRightNumber_1_1 );
    // (~1 & CtBrackets & StLink s.LeftNumber1  s.RightNumber1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StLink, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sRightNumber_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLinkBrackets, (void*) "CmdLinkBrackets"},
      {refalrts::icSpliceSTVar, & sLeftNumber_1_1},
      {refalrts::icSpliceSTVar, & sRightNumber_1_1},
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
    if( ! refalrts::alloc_name( n1, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRightNumber_1_1 );
    res = refalrts::splice_stvar( res, sLeftNumber_1_1 );
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

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_1_b_1;
    refalrts::use( ePatternVars_1_b_1 );
    static refalrts::Iter ePatternVars_1_e_1;
    refalrts::use( ePatternVars_1_e_1 );
    static refalrts::Iter ePatternCommands_1_b_1;
    refalrts::use( ePatternCommands_1_b_1 );
    static refalrts::Iter ePatternCommands_1_e_1;
    refalrts::use( ePatternCommands_1_e_1 );
    static refalrts::Iter eResultVars_1_b_1;
    refalrts::use( eResultVars_1_b_1 );
    static refalrts::Iter eResultVars_1_e_1;
    refalrts::use( eResultVars_1_e_1 );
    static refalrts::Iter eResultCommands_1_b_1;
    refalrts::use( eResultCommands_1_b_1 );
    static refalrts::Iter eResultCommands_1_e_1;
    refalrts::use( eResultCommands_1_e_1 );
    // (~1 e.PatternVars1  )~1 (~2 e.PatternCommands1  )~2 (~3 e.ResultVars1  )~3 (~4 e.ResultCommands1  )~4
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_1_b_1 = bb_1;
    refalrts::use( ePatternVars_1_b_1 );
    ePatternVars_1_e_1 = be_1;
    refalrts::use( ePatternVars_1_e_1 );
    ePatternCommands_1_b_1 = bb_2;
    refalrts::use( ePatternCommands_1_b_1 );
    ePatternCommands_1_e_1 = be_2;
    refalrts::use( ePatternCommands_1_e_1 );
    eResultVars_1_b_1 = bb_3;
    refalrts::use( eResultVars_1_b_1 );
    eResultVars_1_e_1 = be_3;
    refalrts::use( eResultVars_1_e_1 );
    eResultCommands_1_b_1 = bb_4;
    refalrts::use( eResultCommands_1_b_1 );
    eResultCommands_1_e_1 = be_4;
    refalrts::use( eResultCommands_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_Vars, (void*) "GeneralizeResult_Vars"},
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
      {refalrts::icSpliceEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_1_b_1, & eResultCommands_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_Vars, "GeneralizeResult_Vars" ) )
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
    refalrts::push_stack( n16 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eResultCommands_1_b_1, eResultCommands_1_e_1 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePatternCommands_1_b_1, ePatternCommands_1_e_1 );
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
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 1 s.Mode1  e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( sUsing_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sUsing_1_2;
    refalrts::use( sUsing_1_2 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // (~1 s.Using1  s.Mode1  e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( eVars_1_b_1 );
    static refalrts::Iter eVars_1_e_1;
    refalrts::use( eVars_1_e_1 );
    // e.Vars1 
    eVars_1_b_1 = bb_0;
    refalrts::use( eVars_1_b_1 );
    eVars_1_e_1 = be_0;
    refalrts::use( eVars_1_e_1 );
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

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePatternVars_1_b_1;
    refalrts::use( ePatternVars_1_b_1 );
    static refalrts::Iter ePatternVars_1_e_1;
    refalrts::use( ePatternVars_1_e_1 );
    static refalrts::Iter eResultVars_1_b_1;
    refalrts::use( eResultVars_1_b_1 );
    static refalrts::Iter eResultVars_1_e_1;
    refalrts::use( eResultVars_1_e_1 );
    static refalrts::Iter ePatternCommands_1_b_1;
    refalrts::use( ePatternCommands_1_b_1 );
    static refalrts::Iter ePatternCommands_1_e_1;
    refalrts::use( ePatternCommands_1_e_1 );
    static refalrts::Iter eResultCommands_1_b_1;
    refalrts::use( eResultCommands_1_b_1 );
    static refalrts::Iter eResultCommands_1_e_1;
    refalrts::use( eResultCommands_1_e_1 );
    static refalrts::Iter ePatternVars_1_b_2;
    refalrts::use( ePatternVars_1_b_2 );
    static refalrts::Iter ePatternVars_1_e_2;
    refalrts::use( ePatternVars_1_e_2 );
    static refalrts::Iter eResultVars_1_b_2;
    refalrts::use( eResultVars_1_b_2 );
    static refalrts::Iter eResultVars_1_e_2;
    refalrts::use( eResultVars_1_e_2 );
    // (~1 e.PatternVars1  )~1 (~2 e.ResultVars1  )~2 (~3 e.PatternCommands1  )~3 (~4 e.ResultCommands1  )~4
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_1_b_1 = bb_1;
    refalrts::use( ePatternVars_1_b_1 );
    ePatternVars_1_e_1 = be_1;
    refalrts::use( ePatternVars_1_e_1 );
    eResultVars_1_b_1 = bb_2;
    refalrts::use( eResultVars_1_b_1 );
    eResultVars_1_e_1 = be_2;
    refalrts::use( eResultVars_1_e_1 );
    ePatternCommands_1_b_1 = bb_3;
    refalrts::use( ePatternCommands_1_b_1 );
    ePatternCommands_1_e_1 = be_3;
    refalrts::use( ePatternCommands_1_e_1 );
    eResultCommands_1_b_1 = bb_4;
    refalrts::use( eResultCommands_1_b_1 );
    eResultCommands_1_e_1 = be_4;
    refalrts::use( eResultCommands_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_CopyVars, (void*) "GeneralizeResult_CopyVars"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternVars_1_b_1, & ePatternVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultVars_1_b_1, & eResultVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_1_b_1, & ePatternCommands_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eResultVars_1_b_1, & eResultVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePatternVars_1_b_1, & ePatternVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_1_b_1, & eResultCommands_1_e_1},
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
    if( ! refalrts::copy_evar( ePatternVars_1_b_2, ePatternVars_1_e_2, ePatternVars_1_b_1, ePatternVars_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_1_b_2, eResultVars_1_e_2, eResultVars_1_b_1, eResultVars_1_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GeneralizeResult_CopyVars, "GeneralizeResult_CopyVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & VarSetUnion, "VarSetUnion" ) )
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
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_bracket( n17 ) )
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
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eResultCommands_1_b_1, eResultCommands_1_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n13, n21 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ePatternVars_1_b_2, ePatternVars_1_e_2 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eResultVars_1_b_2, eResultVars_1_e_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, ePatternCommands_1_b_1, ePatternCommands_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n2, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eResultVars_1_b_1, eResultVars_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatternVars_1_b_1, ePatternVars_1_e_1 );
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

static refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSet1_B_1_b_1;
    refalrts::use( eSet1_B_1_b_1 );
    static refalrts::Iter eSet1_B_1_e_1;
    refalrts::use( eSet1_B_1_e_1 );
    static refalrts::Iter tCommon_1_1;
    refalrts::use( tCommon_1_1 );
    static refalrts::Iter eSet1_E_1_b_1;
    refalrts::use( eSet1_E_1_b_1 );
    static refalrts::Iter eSet1_E_1_e_1;
    refalrts::use( eSet1_E_1_e_1 );
    static refalrts::Iter eSet2_B_1_b_1;
    refalrts::use( eSet2_B_1_b_1 );
    static refalrts::Iter eSet2_B_1_e_1;
    refalrts::use( eSet2_B_1_e_1 );
    static refalrts::Iter eSet2_E_1_b_1;
    refalrts::use( eSet2_E_1_b_1 );
    static refalrts::Iter eSet2_E_1_e_1;
    refalrts::use( eSet2_E_1_e_1 );
    static refalrts::Iter tCommon_1_2;
    refalrts::use( tCommon_1_2 );
    // (~1 e.Set1_B1  t.Common1  e.Set1_E1  )~1 (~2 e.Set2_B1  t.Common1  e.Set2_E1  )~2
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
      refalrts::use( eSet1_E_1_b_1 );
      eSet1_E_1_e_1 = be_3;
      refalrts::use( eSet1_E_1_e_1 );
      eSet2_B_1_b_1 = 0;
      eSet2_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_1_2, tCommon_1_1, bb_5, be_5 ) )
          continue;
        eSet2_E_1_b_1 = bb_5;
        refalrts::use( eSet2_E_1_b_1 );
        eSet2_E_1_e_1 = be_5;
        refalrts::use( eSet2_E_1_e_1 );
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
    refalrts::use( eSet1_1_b_1 );
    static refalrts::Iter eSet1_1_e_1;
    refalrts::use( eSet1_1_e_1 );
    static refalrts::Iter eSet2_1_b_1;
    refalrts::use( eSet2_1_b_1 );
    static refalrts::Iter eSet2_1_e_1;
    refalrts::use( eSet2_1_e_1 );
    // (~1 e.Set11  )~1 (~2 e.Set21  )~2
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
    refalrts::use( eSet1_1_b_1 );
    eSet1_1_e_1 = be_1;
    refalrts::use( eSet1_1_e_1 );
    eSet2_1_b_1 = bb_2;
    refalrts::use( eSet2_1_b_1 );
    eSet2_1_e_1 = be_2;
    refalrts::use( eSet2_1_e_1 );
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
    refalrts::use( eSet1_B_1_b_1 );
    static refalrts::Iter eSet1_B_1_e_1;
    refalrts::use( eSet1_B_1_e_1 );
    static refalrts::Iter eSet1_E_1_b_1;
    refalrts::use( eSet1_E_1_b_1 );
    static refalrts::Iter eSet1_E_1_e_1;
    refalrts::use( eSet1_E_1_e_1 );
    static refalrts::Iter eSet2_B_1_b_1;
    refalrts::use( eSet2_B_1_b_1 );
    static refalrts::Iter eSet2_B_1_e_1;
    refalrts::use( eSet2_B_1_e_1 );
    static refalrts::Iter eSet2_E_1_b_1;
    refalrts::use( eSet2_E_1_b_1 );
    static refalrts::Iter eSet2_E_1_e_1;
    refalrts::use( eSet2_E_1_e_1 );
    static refalrts::Iter tCommon_1_1;
    refalrts::use( tCommon_1_1 );
    static refalrts::Iter tCommon_1_2;
    refalrts::use( tCommon_1_2 );
    // (~1 e.Set1_B1  t.Common1  e.Set1_E1  )~1 (~2 e.Set2_B1  t.Common1  e.Set2_E1  )~2
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
      refalrts::use( eSet1_E_1_b_1 );
      eSet1_E_1_e_1 = be_3;
      refalrts::use( eSet1_E_1_e_1 );
      eSet2_B_1_b_1 = 0;
      eSet2_B_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        if( ! refalrts::repeated_stvar_left( tCommon_1_2, tCommon_1_1, bb_5, be_5 ) )
          continue;
        eSet2_E_1_b_1 = bb_5;
        refalrts::use( eSet2_E_1_b_1 );
        eSet2_E_1_e_1 = be_5;
        refalrts::use( eSet2_E_1_e_1 );
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
    refalrts::use( eSet1_1_b_1 );
    static refalrts::Iter eSet1_1_e_1;
    refalrts::use( eSet1_1_e_1 );
    static refalrts::Iter eSet2_1_b_1;
    refalrts::use( eSet2_1_b_1 );
    static refalrts::Iter eSet2_1_e_1;
    refalrts::use( eSet2_1_e_1 );
    // (~1 e.Set11  )~1 (~2 e.Set21  )~2
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
    refalrts::use( eSet1_1_b_1 );
    eSet1_1_e_1 = be_1;
    refalrts::use( eSet1_1_e_1 );
    eSet2_1_b_1 = bb_2;
    refalrts::use( eSet2_1_b_1 );
    eSet2_1_e_1 = be_2;
    refalrts::use( eSet2_1_e_1 );
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

static refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommonVars_1_b_1;
    refalrts::use( eCommonVars_1_b_1 );
    static refalrts::Iter eCommonVars_1_e_1;
    refalrts::use( eCommonVars_1_e_1 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    // (~1 e.CommonVars1  )~1 (~2 e.Pattern1  )~2 (~3 e.CopiedVars1  )~3 (~4 e.Result1  )~4
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_1_b_1 = bb_1;
    refalrts::use( eCommonVars_1_b_1 );
    eCommonVars_1_e_1 = be_1;
    refalrts::use( eCommonVars_1_e_1 );
    ePattern_1_b_1 = bb_2;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_2;
    refalrts::use( ePattern_1_e_1 );
    eCopiedVars_1_b_1 = bb_3;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_3;
    refalrts::use( eCopiedVars_1_e_1 );
    eResult_1_b_1 = bb_4;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_4;
    refalrts::use( eResult_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenerateResult_Interp, (void*) "GenerateResult_Interp"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeDeclaration, (void*) "MakeDeclaration"},
      {refalrts::icSpliceEVar, & eCommonVars_1_b_1, & eCommonVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCopiedVars_1_b_1, & eCopiedVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & GenerateResult_Interp, "GenerateResult_Interp" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
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
    refalrts::push_stack( n12 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eCopiedVars_1_b_1, eCopiedVars_1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n2, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eCommonVars_1_b_1, eCommonVars_1_e_1 );
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

static refalrts::FnResult GenerateResult_OpenELoops(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter ePattern_1_b_1;
    refalrts::use( ePattern_1_b_1 );
    static refalrts::Iter ePattern_1_e_1;
    refalrts::use( ePattern_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter eResult_1_b_1;
    refalrts::use( eResult_1_b_1 );
    static refalrts::Iter eResult_1_e_1;
    refalrts::use( eResult_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_2;
    refalrts::use( eCopiedVars_1_b_2 );
    static refalrts::Iter eCopiedVars_1_e_2;
    refalrts::use( eCopiedVars_1_e_2 );
    static refalrts::Iter eResult_1_b_2;
    refalrts::use( eResult_1_b_2 );
    static refalrts::Iter eResult_1_e_2;
    refalrts::use( eResult_1_e_2 );
    // (~1 e.Pattern1  )~1 (~2 e.CopiedVars1  )~2 (~3 e.Result1  )~3
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
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    ePattern_1_b_1 = bb_1;
    refalrts::use( ePattern_1_b_1 );
    ePattern_1_e_1 = be_1;
    refalrts::use( ePattern_1_e_1 );
    eCopiedVars_1_b_1 = bb_2;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_2;
    refalrts::use( eCopiedVars_1_e_1 );
    eResult_1_b_1 = bb_3;
    refalrts::use( eResult_1_b_1 );
    eResult_1_e_1 = be_3;
    refalrts::use( eResult_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenerateResult_OpenELoops, (void*) "GenerateResult_OpenELoops"},
      {refalrts::icSpliceEVar, & ePattern_1_b_1, & ePattern_1_e_1},
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
      {refalrts::icSpliceEVar, & eCopiedVars_1_b_1, & eCopiedVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_1_b_1, & eResult_1_e_1},
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
      {refalrts::icCopyEVar, & eCopiedVars_1_b_1, & eCopiedVars_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult_Commands, (void*) "GenResult_Commands"},
      {refalrts::icCopyEVar, & eResult_1_b_1, & eResult_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::copy_evar( eCopiedVars_1_b_2, eCopiedVars_1_e_2, eCopiedVars_1_b_1, eCopiedVars_1_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResult_1_b_2, eResult_1_e_2, eResult_1_b_1, eResult_1_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & GenerateResult_OpenELoops, "GenerateResult_OpenELoops" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdInitRAA, "CmdInitRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CmdFinRAA, "CmdFinRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_call( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & GenResult_Commands, "GenResult_Commands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n33, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n30, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::push_stack( n29 );
    refalrts::push_stack( n27 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eResult_1_b_2, eResult_1_e_2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n23 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eCopiedVars_1_b_2, eCopiedVars_1_e_2 );
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
    refalrts::link_brackets( n14, n16 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eResult_1_b_1, eResult_1_e_1 );
    refalrts::link_brackets( n10, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eCopiedVars_1_b_1, eCopiedVars_1_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, ePattern_1_b_1, ePattern_1_e_1 );
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Usings1  'e e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Usings1  s.Mode1  e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Usings1  'e e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    // (~1 s.Usings1  s.Mode1  e.Index1  )~1
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
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sUsings_1_1;
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sUsings_1_2;
    refalrts::use( sUsings_1_2 );
    static refalrts::Iter sMode_1_2;
    refalrts::use( sMode_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    static refalrts::Iter eCopiedVars_B_1_b_1;
    refalrts::use( eCopiedVars_B_1_b_1 );
    static refalrts::Iter eCopiedVars_B_1_e_1;
    refalrts::use( eCopiedVars_B_1_e_1 );
    static refalrts::Iter eCopiedVars_E_1_b_1;
    refalrts::use( eCopiedVars_E_1_b_1 );
    static refalrts::Iter eCopiedVars_E_1_e_1;
    refalrts::use( eCopiedVars_E_1_e_1 );
    // e.CopiedVars_B1  (~1 s.Usings1  s.Mode1  e.Index1  )~1 e.CopiedVars_E1  (~2 & CtInsertVar s.Usings1  s.Mode1  e.Index1  )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1_1, bb_2, be_2 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_2, be_2 ) )
      break;
    eIndex_1_b_1 = bb_2;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_2;
    refalrts::use( eIndex_1_e_1 );
    eCopiedVars_B_1_b_1 = 0;
    eCopiedVars_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sUsings_1_2, sUsings_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_1_2, sMode_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_1_b_2, eIndex_1_e_2, eIndex_1_b_1, eIndex_1_e_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::empty_seq( bb_1, be_1 ) )
        continue;
      eCopiedVars_E_1_b_1 = bb_3;
      refalrts::use( eCopiedVars_E_1_b_1 );
      eCopiedVars_E_1_e_1 = be_3;
      refalrts::use( eCopiedVars_E_1_e_1 );
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
    refalrts::use( sUsings_1_1 );
    static refalrts::Iter sMode_1_1;
    refalrts::use( sMode_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    // e.CopiedVars1  (~1 & CtInsertVar s.Usings1  s.Mode1  e.Index1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sUsings_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sMode_1_1, bb_1, be_1 ) )
      break;
    eIndex_1_b_1 = bb_1;
    refalrts::use( eIndex_1_b_1 );
    eIndex_1_e_1 = be_1;
    refalrts::use( eIndex_1_e_1 );
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter eCmdInfo_1_b_1;
    refalrts::use( eCmdInfo_1_b_1 );
    static refalrts::Iter eCmdInfo_1_e_1;
    refalrts::use( eCmdInfo_1_e_1 );
    // e.CopiedVars1  (~1 & CtBrackets e.CmdInfo1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    eCmdInfo_1_b_1 = bb_1;
    refalrts::use( eCmdInfo_1_b_1 );
    eCmdInfo_1_e_1 = be_1;
    refalrts::use( eCmdInfo_1_e_1 );
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sElemNo_1_1;
    refalrts::use( sElemNo_1_1 );
    // e.CopiedVars1  (~1 & CtInsert s.ElemNo1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sElemNo_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sValue_1_1;
    refalrts::use( sValue_1_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StChar s.Counter1  s.Value1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StChar, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StName s.Counter1  e.Name1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StName, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
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
    refalrts::use( sNumber_1_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StNumber s.Counter1  s.Number1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StNumber, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
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
    refalrts::use( eName_1_b_1 );
    static refalrts::Iter eName_1_e_1;
    refalrts::use( eName_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StIdent s.Counter1  e.Name1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StIdent, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    eName_1_b_1 = bb_1;
    refalrts::use( eName_1_b_1 );
    eName_1_e_1 = be_1;
    refalrts::use( eName_1_e_1 );
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StOpenBracket s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StOpenBracket, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StOpenADT s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StOpenADT, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StOpenCall s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StOpenCall, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StCloseBracket s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StCloseBracket, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StCloseADT s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StCloseADT, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    static refalrts::Iter sCounter_1_1;
    refalrts::use( sCounter_1_1 );
    static refalrts::Iter sNum_1_1;
    refalrts::use( sNum_1_1 );
    // e.CopiedVars1  (~1 & CtAlloc & StCloseCall s.Counter1  s.Num1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & StCloseCall, bb_1, be_1 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    if( ! refalrts::svar_left( sCounter_1_1, bb_1, be_1 ) )
      break;
    if( ! refalrts::svar_left( sNum_1_1, bb_1, be_1 ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eAnyCommand_1_b_1;
    refalrts::use( eAnyCommand_1_b_1 );
    static refalrts::Iter eAnyCommand_1_e_1;
    refalrts::use( eAnyCommand_1_e_1 );
    static refalrts::Iter eCopiedVars_1_b_1;
    refalrts::use( eCopiedVars_1_b_1 );
    static refalrts::Iter eCopiedVars_1_e_1;
    refalrts::use( eCopiedVars_1_e_1 );
    // e.CopiedVars1  (~1 e.AnyCommand1  )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    eCopiedVars_1_b_1 = bb_0;
    refalrts::use( eCopiedVars_1_b_1 );
    eCopiedVars_1_e_1 = be_0;
    refalrts::use( eCopiedVars_1_e_1 );
    eAnyCommand_1_b_1 = bb_1;
    refalrts::use( eAnyCommand_1_b_1 );
    eAnyCommand_1_e_1 = be_1;
    refalrts::use( eAnyCommand_1_e_1 );
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdComment, (void*) "CmdComment"},
      {refalrts::icSpliceEVar, & eAnyCommand_1_b_1, & eAnyCommand_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
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
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eAnyCommand_1_b_1, eAnyCommand_1_e_1 );
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
    refalrts::use( eCommands_B_1_b_1 );
    static refalrts::Iter eCommands_B_1_e_1;
    refalrts::use( eCommands_B_1_e_1 );
    static refalrts::Iter eCommands_E_1_b_1;
    refalrts::use( eCommands_E_1_b_1 );
    static refalrts::Iter eCommands_E_1_e_1;
    refalrts::use( eCommands_E_1_e_1 );
    static refalrts::Iter sBracketNum_1_1;
    refalrts::use( sBracketNum_1_1 );
    static refalrts::Iter eIndex_1_b_1;
    refalrts::use( eIndex_1_b_1 );
    static refalrts::Iter eIndex_1_e_1;
    refalrts::use( eIndex_1_e_1 );
    static refalrts::Iter sBracketNum_1_2;
    refalrts::use( sBracketNum_1_2 );
    static refalrts::Iter eIndex_1_b_2;
    refalrts::use( eIndex_1_b_2 );
    static refalrts::Iter eIndex_1_e_2;
    refalrts::use( eIndex_1_e_2 );
    // e.Commands_B1  (~1 & CmdOpenedE & AlgLeft s.BracketNum1  'e e.Index1  )~1 e.Commands_E1 
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
      refalrts::use( eCommands_E_1_b_1 );
      eCommands_E_1_e_1 = be_2;
      refalrts::use( eCommands_E_1_e_1 );
      if( ! refalrts::svar_left( sBracketNum_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::char_left( 'e', bb_1, be_1 ) )
        continue;
      eIndex_1_b_1 = bb_1;
      refalrts::use( eIndex_1_b_1 );
      eIndex_1_e_1 = be_1;
      refalrts::use( eIndex_1_e_1 );
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
    refalrts::use( eCommands_1_b_1 );
    static refalrts::Iter eCommands_1_e_1;
    refalrts::use( eCommands_1_e_1 );
    // e.Commands1 
    eCommands_1_b_1 = bb_0;
    refalrts::use( eCommands_1_b_1 );
    eCommands_1_e_1 = be_0;
    refalrts::use( eCommands_1_e_1 );
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
