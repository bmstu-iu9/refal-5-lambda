// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmpty(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdRepeated(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdOpenedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdClosedE(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdAllocateElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdLinkBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPushStack(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInsertEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElElem(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ElSTVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEmptyResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdReturnResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIfDef(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdElse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEndIf(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdInitRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdFinRAA(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdDeclareVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdCopyEVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgLeft(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult AlgRight(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdComment(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdPrint(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrFunc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCB(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrOC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCC(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrSplice(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdArrCopy(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseADT(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkChar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkOpenCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkCloseCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult TkIdentifier(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult LeftPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult RightPtr(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult GenPattern_v1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    // e.Pattern
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & RightPtr, "RightPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_number( n9, 0UL ) )
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
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n3, n6 );
    refalrts::link_brackets( n7, n10 );
    refalrts::link_brackets( n11, n12 );
    refalrts::link_brackets( n13, n14 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elems( res, n7, n15 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elems( res, n1, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
#ifdef OLD_PATTERN
    // e.Pattern
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
#else
    // e.Pattern
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & LeftPtr, "LeftPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_number( n5, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & RightPtr, "RightPtr" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_number( n9, 0UL ) )
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
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n15 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::link_brackets( n11, n12 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n7, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::link_brackets( n3, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkChar, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sChar_2;
      refalrts::use( sChar_2 );
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter sChar_2;
    refalrts::use( sChar_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkChar s.Char )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkChar, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sChar_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkNumber, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNumber_2;
      refalrts::use( sNumber_2 );
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sNumber_2;
    refalrts::use( sNumber_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkNumber s.Number )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkNumber, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNumber_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkName, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eName_b_2;
      refalrts::use( eName_b_2 );
      static refalrts::Iter eName_e_2;
      refalrts::use( eName_e_2 );
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkName e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkName, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
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
      if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkIdentifier e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkIdentifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eName_b_2;
      refalrts::use( eName_b_2 );
      static refalrts::Iter eName_e_2;
      refalrts::use( eName_e_2 );
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkIdentifier e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkIdentifier e.Name )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkIdentifier, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & TkIdentifier, "TkIdentifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkChar s.Char )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sChar_2;
      refalrts::use( sChar_2 );
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sChar_2;
    refalrts::use( sChar_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkChar s.Char )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkChar s.Char )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
        {refalrts::icSpliceSTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdChar, (void*) "CmdChar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sChar_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sChar_2, sChar_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & TkChar, "TkChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdChar, "CmdChar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_stvar( res, sChar_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sChar_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkNumber s.Number )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkNumber, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNumber_2;
      refalrts::use( sNumber_2 );
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNumber_2;
    refalrts::use( sNumber_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkNumber s.Number )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkNumber s.Number )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkNumber, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkNumber, (void*) "TkNumber"},
        {refalrts::icSpliceSTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdNumber, (void*) "CmdNumber"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopySTVar, & sNumber_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNumber_2, sNumber_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & TkNumber, "TkNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdNumber, "CmdNumber" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_stvar( res, sNumber_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNumber_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkName e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkName, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eName_b_2;
      refalrts::use( eName_b_2 );
      static refalrts::Iter eName_e_2;
      refalrts::use( eName_e_2 );
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkName e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkName e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkName, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdName, (void*) "CmdName"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & TkName, "TkName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdName, "CmdName" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkIdentifier e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkIdentifier, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eName_b_2;
      refalrts::use( eName_b_2 );
      static refalrts::Iter eName_e_2;
      refalrts::use( eName_e_2 );
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n8 );
      refalrts::link_brackets( n10, n12 );
      refalrts::link_brackets( n13, n21 );
      refalrts::link_brackets( n18, n15 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n18, n20 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n12, n13 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n16, n17 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkIdentifier e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkIdentifier e.Name )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkIdentifier, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_1;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_1;
      refalrts::use( eName_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkIdentifier, (void*) "TkIdentifier"},
        {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdIdent, (void*) "CmdIdent"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & TkIdentifier, "TkIdentifier" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_close_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_name( n28, & CmdIdent, "CmdIdent" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n32 );
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n26 );
      refalrts::link_brackets( n24, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      refalrts::link_brackets( n18, n20 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenBracket s.Inner )~2 e.Pattern_M (~3 & TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkOpenBracket, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & TkCloseBracket, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_name( n23, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_3;
        refalrts::use( sInner_3 );
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_4;
        refalrts::use( sInner_4 );
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_5;
        refalrts::use( sInner_5 );
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_call( n33 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n4 );
        refalrts::link_brackets( n5, n8 );
        refalrts::link_brackets( n10, n13 );
        refalrts::link_brackets( n15, n17 );
        refalrts::link_brackets( n18, n20 );
        refalrts::link_brackets( n25, n26 );
        refalrts::link_brackets( n27, n32 );
        refalrts::link_brackets( n28, n31 );
        refalrts::push_stack( n33 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elems( res, n31, n33 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n28, n30 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n26, n27 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elems( res, n17, n18 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n21, n22 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter sInner_5;
    refalrts::use( sInner_5 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenBracket s.Inner )~2 e.Pattern_M (~3 & TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenBracket s.Inner )~2 e.Pattern_M (~3 & TkCloseBracket s.Inner )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkOpenBracket, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & TkCloseBracket, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_open_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_open_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_name( n36, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_close_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_open_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_name( n42, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_call( n46 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n46 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n40, n45 );
        res = refalrts::splice_elem( res, n45 );
        refalrts::link_brackets( n41, n44 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n40 );
        refalrts::link_brackets( n38, n39 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n35, n37 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n32, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        refalrts::link_brackets( n29, n31 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n26, n28 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        refalrts::link_brackets( n23, n25 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkOpenBracket s.Inner )~1 e.Pattern_M (~2 & TkCloseBracket s.Inner )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkOpenBracket, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n6;
        if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n6 );
        refalrts::Iter n9 = 0; // Right
        if( ! refalrts::brackets_match( n9, n6 ) ) 
          continue;
        refalrts::Iter n7;
        if( (n7 = refalrts::function_left( & TkCloseBracket, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n7 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & RightPtr, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_name( n23, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_3;
        refalrts::use( sInner_3 );
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_4;
        refalrts::use( sInner_4 );
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_close_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_5;
        refalrts::use( sInner_5 );
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_call( n33 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n4 );
        refalrts::link_brackets( n6, n9 );
        refalrts::link_brackets( n10, n13 );
        refalrts::link_brackets( n15, n17 );
        refalrts::link_brackets( n18, n20 );
        refalrts::link_brackets( n25, n26 );
        refalrts::link_brackets( n27, n32 );
        refalrts::link_brackets( n28, n31 );
        refalrts::push_stack( n33 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elems( res, n31, n33 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n28, n30 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n26, n27 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n20 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elems( res, n17, n18 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_elems( res, n9, n10 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n21, n22 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter sInner_5;
    refalrts::use( sInner_5 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkOpenBracket s.Inner )~1 e.Pattern_M (~2 & TkCloseBracket s.Inner )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseBracket, bb_2, be_2 ) ) 
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
#else
    // e.Pattern_B (~1 & TkOpenBracket s.Inner )~1 e.Pattern_M (~2 & TkCloseBracket s.Inner )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkOpenBracket, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        refalrts::Iter n6;
        if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n6 );
        refalrts::Iter n9 = 0; // Right
        if( ! refalrts::brackets_match( n9, n6 ) ) 
          continue;
        refalrts::Iter n7;
        if( (n7 = refalrts::function_left( & TkCloseBracket, bb_2, be_2 )) == 0 ) 
          continue;
        refalrts::use( n7 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & RightPtr, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_2, be_2 ) ) 
          continue;
        if( ! empty_seq( bb_2, be_2 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenBracket, (void*) "TkOpenBracket"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseBracket, (void*) "TkCloseBracket"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdBrackets, (void*) "CmdBrackets"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_open_call( n21 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_bracket( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_close_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_open_bracket( n26 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & TkOpenBracket, "TkOpenBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_close_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_open_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_close_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_open_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_name( n36, & TkCloseBracket, "TkCloseBracket" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_close_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_open_bracket( n40 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_open_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_name( n42, & CmdBrackets, "CmdBrackets" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_call( n46 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n46 );
        refalrts::push_stack( n21 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n40, n45 );
        res = refalrts::splice_elem( res, n45 );
        refalrts::link_brackets( n41, n44 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n40 );
        refalrts::link_brackets( n38, n39 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n35, n37 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        refalrts::link_brackets( n32, n34 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n29, n31 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_elem( res, n29 );
        refalrts::link_brackets( n26, n28 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n26 );
        refalrts::link_brackets( n23, n25 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_elem( res, n21 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenADT s.Inner )~2 (~3 & TkName e.Name )~3 e.Pattern_M (~4 & TkCloseADT s.Inner )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    refalrts::Iter n22;
    if( (n22 = refalrts::brackets_right( bb_6, be_6, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n22 );
    refalrts::Iter n24 = 0; // Right
    if( ! refalrts::brackets_match( n24, n22 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n19;
    if( (n19 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n19 );
    refalrts::Iter n21 = 0; // Right
    if( ! refalrts::brackets_match( n21, n19 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkOpenADT, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n9;
      if( (n9 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n9 );
      refalrts::Iter n12 = 0; // Right
      if( ! refalrts::brackets_match( n12, n9 ) ) 
        continue;
      refalrts::Iter n10;
      if( (n10 = refalrts::function_left( & TkName, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n10 );
      eName_b_1 = bb_3;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_3;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & TkCloseADT, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_3;
        refalrts::use( sInner_3 );
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_4;
        refalrts::use( sInner_4 );
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_open_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_5;
        refalrts::use( sInner_5 );
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter eName_b_2;
        refalrts::use( eName_b_2 );
        static refalrts::Iter eName_e_2;
        refalrts::use( eName_e_2 );
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n4 );
        refalrts::link_brackets( n5, n8 );
        refalrts::link_brackets( n9, n12 );
        refalrts::link_brackets( n14, n17 );
        refalrts::link_brackets( n19, n21 );
        refalrts::link_brackets( n22, n24 );
        refalrts::link_brackets( n29, n30 );
        refalrts::link_brackets( n31, n36 );
        refalrts::link_brackets( n32, n35 );
        refalrts::push_stack( n37 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elems( res, n35, n37 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n32, n34 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n30, n31 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elems( res, n21, n22 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elems( res, n8, n9 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter sInner_5;
    refalrts::use( sInner_5 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenADT s.Inner )~2 (~3 & TkName e.Name )~3 e.Pattern_M (~4 & TkCloseADT s.Inner )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_3, be_3 ) ) 
        continue;
      eName_b_1 = bb_3;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_3;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkOpenADT s.Inner )~2 (~3 & TkName e.Name )~3 e.Pattern_M (~4 & TkCloseADT s.Inner )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    refalrts::Iter n22;
    if( (n22 = refalrts::brackets_right( bb_6, be_6, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n22 );
    refalrts::Iter n24 = 0; // Right
    if( ! refalrts::brackets_match( n24, n22 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n19;
    if( (n19 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n19 );
    refalrts::Iter n21 = 0; // Right
    if( ! refalrts::brackets_match( n21, n19 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkOpenADT, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n9;
      if( (n9 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n9 );
      refalrts::Iter n12 = 0; // Right
      if( ! refalrts::brackets_match( n12, n9 ) ) 
        continue;
      refalrts::Iter n10;
      if( (n10 = refalrts::function_left( & TkName, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n10 );
      eName_b_1 = bb_3;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_3;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sInner_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & TkCloseADT, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & TkOpenADT, "TkOpenADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_open_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_name( n37, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & TkCloseADT, "TkCloseADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_close_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_open_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_open_bracket( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_open_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_name( n49, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_name( n50, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_close_bracket( n51 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_close_bracket( n52 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_close_call( n53 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n53 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elem( res, n53 );
        refalrts::link_brackets( n47, n52 );
        res = refalrts::splice_elem( res, n52 );
        refalrts::link_brackets( n48, n51 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_elem( res, n49 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n45, n46 );
        res = refalrts::splice_elem( res, n46 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n42, n44 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        refalrts::link_brackets( n39, n41 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        refalrts::link_brackets( n36, n38 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n33, n35 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        refalrts::link_brackets( n30, n32 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        refalrts::link_brackets( n27, n29 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkOpenADT s.Inner )~1 (~2 & TkName e.Name )~2 e.Pattern_M (~3 & TkCloseADT s.Inner )~3 (~4 & RightPtr s.Num )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    refalrts::Iter n22;
    if( (n22 = refalrts::brackets_right( bb_6, be_6, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n22 );
    refalrts::Iter n24 = 0; // Right
    if( ! refalrts::brackets_match( n24, n22 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n19;
    if( (n19 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n19 );
    refalrts::Iter n21 = 0; // Right
    if( ! refalrts::brackets_match( n21, n19 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkOpenADT, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkName, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & TkCloseADT, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & RightPtr, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_name( n27, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_3;
        refalrts::use( sInner_3 );
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_4;
        refalrts::use( sInner_4 );
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_open_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_name( n33, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sInner_5;
        refalrts::use( sInner_5 );
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        static refalrts::Iter eName_b_2;
        refalrts::use( eName_b_2 );
        static refalrts::Iter eName_e_2;
        refalrts::use( eName_e_2 );
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_call( n37 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n4 );
        refalrts::link_brackets( n5, n8 );
        refalrts::link_brackets( n10, n13 );
        refalrts::link_brackets( n14, n17 );
        refalrts::link_brackets( n19, n21 );
        refalrts::link_brackets( n22, n24 );
        refalrts::link_brackets( n29, n30 );
        refalrts::link_brackets( n31, n36 );
        refalrts::link_brackets( n32, n35 );
        refalrts::push_stack( n37 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elems( res, n35, n37 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n32, n34 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n30, n31 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elems( res, n21, n22 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_elems( res, n13, n14 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter sInner_1;
    refalrts::use( sInner_1 );
    static refalrts::Iter sInner_2;
    refalrts::use( sInner_2 );
    static refalrts::Iter ePattern_M_b_1;
    refalrts::use( ePattern_M_b_1 );
    static refalrts::Iter ePattern_M_e_1;
    refalrts::use( ePattern_M_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sInner_3;
    refalrts::use( sInner_3 );
    static refalrts::Iter sInner_4;
    refalrts::use( sInner_4 );
    static refalrts::Iter sInner_5;
    refalrts::use( sInner_5 );
    static refalrts::Iter eName_b_2;
    refalrts::use( eName_b_2 );
    static refalrts::Iter eName_e_2;
    refalrts::use( eName_e_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkOpenADT s.Inner )~1 (~2 & TkName e.Name )~2 e.Pattern_M (~3 & TkCloseADT s.Inner )~3 (~4 & RightPtr s.Num )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    if( ! refalrts::brackets_right( bb_6, be_6, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkName, bb_2, be_2 ) ) 
        continue;
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & TkCloseADT, bb_3, be_3 ) ) 
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
          continue;
        if( ! refalrts::function_left( & RightPtr, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#else
    // e.Pattern_B (~1 & TkOpenADT s.Inner )~1 (~2 & TkName e.Name )~2 e.Pattern_M (~3 & TkCloseADT s.Inner )~3 (~4 & RightPtr s.Num )~4 e.Pattern_E (~5 e.Vars )~5 (~6 e.Commands )~6
    refalrts::Iter bb_6 = 0;
    refalrts::Iter be_6 = 0;
    refalrts::Iter n22;
    if( (n22 = refalrts::brackets_right( bb_6, be_6, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n22 );
    refalrts::Iter n24 = 0; // Right
    if( ! refalrts::brackets_match( n24, n22 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n19;
    if( (n19 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n19 );
    refalrts::Iter n21 = 0; // Right
    if( ! refalrts::brackets_match( n21, n19 ) ) 
      break;
    eVars_b_1 = bb_5;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_5;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_6;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_6;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkOpenADT, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & TkName, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eName_b_1 = bb_2;
      refalrts::use( eName_b_1 );
      eName_e_1 = be_2;
      refalrts::use( eName_e_1 );
      if( ! refalrts::svar_left( sInner_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      refalrts::Iter bb_0_stk = bb_0;
      refalrts::Iter be_0_stk = be_0;
      for( 
        refalrts::Iter
          ePattern_M_b_1 = bb_0_stk,
          ePattern_M_oe_1 = bb_0_stk,
          bb_0 = bb_0_stk,
          be_0 = be_0_stk;
        ! empty_seq( ePattern_M_oe_1, be_0 );
        bb_0 = bb_0_stk,
        be_0 = be_0_stk,
        refalrts::next_term( ePattern_M_oe_1, be_0 )
      ) {
        bb_0 = ePattern_M_oe_1;
        ePattern_M_b_1 = bb_0_stk;
        ePattern_M_e_1 = ePattern_M_oe_1;
        refalrts::move_right( ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        refalrts::Iter n10;
        if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n10 );
        refalrts::Iter n13 = 0; // Right
        if( ! refalrts::brackets_match( n13, n10 ) ) 
          continue;
        refalrts::Iter n11;
        if( (n11 = refalrts::function_left( & TkCloseADT, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n11 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n14;
        if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
          continue;
        refalrts::use( n14 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n14 ) ) 
          continue;
        refalrts::Iter n15;
        if( (n15 = refalrts::function_left( & RightPtr, bb_4, be_4 )) == 0 ) 
          continue;
        refalrts::use( n15 );
        if( ! refalrts::repeated_stvar_left( sInner_2, sInner_1, bb_3, be_3 ) ) 
          continue;
        if( ! empty_seq( bb_3, be_3 ) )
          continue;
        ePattern_E_b_1 = bb_0;
        refalrts::use( ePattern_E_b_1 );
        ePattern_E_e_1 = be_0;
        refalrts::use( ePattern_E_e_1 );
        if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkOpenADT, (void*) "TkOpenADT"},
          {refalrts::icSpliceSTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkName, (void*) "TkName"},
          {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sInner_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_M_b_1, & ePattern_M_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkCloseADT, (void*) "TkCloseADT"},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdADT, (void*) "CmdADT"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icCopySTVar, & sInner_1},
          {refalrts::icCopyEVar, & eName_b_1, & eName_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_3, sInner_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_4, sInner_3 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sInner_5, sInner_4 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eName_b_2, eName_e_2, eName_b_1, eName_e_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_call( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_open_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_name( n28, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_close_bracket( n29 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_open_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_name( n31, & TkOpenADT, "TkOpenADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_close_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_bracket( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & TkName, "TkName" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_bracket( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_open_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_name( n37, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_close_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_close_bracket( n41 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_bracket( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & TkCloseADT, "TkCloseADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_bracket( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_open_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_open_bracket( n47 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_open_bracket( n48 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_name( n49, & CmdADT, "CmdADT" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_name( n50, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_close_bracket( n51 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_close_bracket( n52 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_close_call( n53 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n53 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elem( res, n53 );
        refalrts::link_brackets( n47, n52 );
        res = refalrts::splice_elem( res, n52 );
        refalrts::link_brackets( n48, n51 );
        res = refalrts::splice_elem( res, n51 );
        res = refalrts::splice_evar( res, eName_b_2, eName_e_2 );
        res = refalrts::splice_stvar( res, sInner_5 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n50 );
        res = refalrts::splice_elem( res, n49 );
        res = refalrts::splice_elem( res, n48 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n45, n46 );
        res = refalrts::splice_elem( res, n46 );
        res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n42, n44 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sInner_4 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        refalrts::link_brackets( n39, n41 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_stvar( res, sInner_3 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, ePattern_M_b_1, ePattern_M_e_1 );
        refalrts::link_brackets( n36, n38 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_stvar( res, sInner_2 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        refalrts::link_brackets( n33, n35 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        refalrts::link_brackets( n30, n32 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_stvar( res, sInner_1 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_elem( res, n30 );
        refalrts::link_brackets( n27, n29 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n28 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n2 );
      refalrts::reinit_name( n6, & GenPattern, "GenPattern" );
      refalrts::reinit_name( n13, & CmdEmpty, "CmdEmpty" );
      refalrts::reinit_close_call( n15 );
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n12 );
      refalrts::link_brackets( n10, n8 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n2 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
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
      if( (n6 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdEmpty, (void*) "CmdEmpty"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_open_call( n16 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_open_bracket( n18 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & CmdEmpty, "CmdEmpty" ) )
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
      refalrts::push_stack( n16 );
      res = refalrts::splice_elem( res, n25 );
      refalrts::link_brackets( n20, n24 );
      res = refalrts::splice_elem( res, n24 );
      refalrts::link_brackets( n21, n23 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n18, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
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
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
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
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n20;
    if( (n20 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n20 );
    refalrts::Iter n22 = 0; // Right
    if( ! refalrts::brackets_match( n22, n20 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n19 = 0; // Right
    if( ! refalrts::brackets_match( n19, n11 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n13;
        if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n13 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_call( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & GenPattern, "GenPattern" ) )
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
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_name( n32, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sCount_2;
        refalrts::use( sCount_2 );
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_call( n33 ) )
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
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_call( n35 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n4 );
        refalrts::link_brackets( n5, n9 );
        refalrts::link_brackets( n11, n19 );
        refalrts::link_brackets( n13, n17 );
        refalrts::link_brackets( n20, n34 );
        refalrts::link_brackets( n28, n22 );
        refalrts::push_stack( n35 );
        refalrts::push_stack( n23 );
        refalrts::push_stack( n33 );
        refalrts::push_stack( n31 );
        refalrts::push_stack( n27 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elems( res, n34, n35 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elems( res, n31, n32 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n28, n30 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n19, n20 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n23, n24 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
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
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable s.Mode e.Index )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n20;
    if( (n20 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n20 );
    refalrts::Iter n22 = 0; // Right
    if( ! refalrts::brackets_match( n22, n20 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n19 = 0; // Right
    if( ! refalrts::brackets_match( n19, n11 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n13;
        if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n13 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_2},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icCopySTVar, & sMode_1},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_call( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & LeftPtr, "LeftPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_call( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_call( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_name( n41, & AlgLeft, "AlgLeft" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_call( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_call( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_call( n47 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n47 );
        refalrts::push_stack( n23 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n38, n46 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n39, n45 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n44 );
        refalrts::push_stack( n42 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::link_brackets( n31, n37 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n32, n36 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n35 );
        refalrts::push_stack( n33 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n28, n30 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n25, n27 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
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
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    // e.Pattern_B (~1 & TkVariable s.Mode e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n20;
    if( (n20 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n20 );
    refalrts::Iter n22 = 0; // Right
    if( ! refalrts::brackets_match( n22, n20 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n19 = 0; // Right
    if( ! refalrts::brackets_match( n19, n11 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n13;
        if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n13 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_call( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & GenPattern, "GenPattern" ) )
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
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_name( n30, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sNum_2;
        refalrts::use( sNum_2 );
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_call( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_name( n32, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        static refalrts::Iter sCount_2;
        refalrts::use( sCount_2 );
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_close_call( n33 ) )
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
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_close_bracket( n34 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_call( n35 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n1, n5 );
        refalrts::link_brackets( n6, n9 );
        refalrts::link_brackets( n11, n19 );
        refalrts::link_brackets( n13, n17 );
        refalrts::link_brackets( n20, n34 );
        refalrts::link_brackets( n28, n22 );
        refalrts::push_stack( n35 );
        refalrts::push_stack( n23 );
        refalrts::push_stack( n33 );
        refalrts::push_stack( n31 );
        refalrts::push_stack( n27 );
        refalrts::push_stack( n25 );
        res = refalrts::splice_elems( res, n34, n35 );
        res = refalrts::splice_elem( res, n22 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elems( res, n31, n32 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elems( res, n28, n30 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elems( res, n19, n20 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elems( res, n25, n26 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_elems( res, n5, n6 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elems( res, n23, n24 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eVars_B_b_1;
    refalrts::use( eVars_B_b_1 );
    static refalrts::Iter eVars_B_e_1;
    refalrts::use( eVars_B_e_1 );
    static refalrts::Iter eVars_E_b_1;
    refalrts::use( eVars_E_b_1 );
    static refalrts::Iter eVars_E_e_1;
    refalrts::use( eVars_E_e_1 );
    static refalrts::Iter sCount_1;
    refalrts::use( sCount_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sMode_3;
    refalrts::use( sMode_3 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sCount_2;
    refalrts::use( sCount_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkVariable s.Mode e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_left( bb_4, be_4, bb_3, be_3 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#else
    // e.Pattern_B (~1 & TkVariable s.Mode e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars_B (~4 s.Count s.Mode e.Index )~4 e.Vars_E )~3 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n20;
    if( (n20 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n20 );
    refalrts::Iter n22 = 0; // Right
    if( ! refalrts::brackets_match( n22, n20 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n19 = 0; // Right
    if( ! refalrts::brackets_match( n19, n11 ) ) 
      break;
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    refalrts::Iter bb_3_stk = bb_3;
    refalrts::Iter be_3_stk = be_3;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      bb_3 = bb_3_stk,
      be_3 = be_3_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
      refalrts::Iter bb_3_stk = bb_3;
      refalrts::Iter be_3_stk = be_3;
      for( 
        refalrts::Iter
          eVars_B_b_1 = bb_3_stk,
          eVars_B_oe_1 = bb_3_stk,
          bb_3 = bb_3_stk,
          be_3 = be_3_stk;
        ! empty_seq( eVars_B_oe_1, be_3 );
        bb_3 = bb_3_stk,
        be_3 = be_3_stk,
        refalrts::next_term( eVars_B_oe_1, be_3 )
      ) {
        bb_3 = eVars_B_oe_1;
        eVars_B_b_1 = bb_3_stk;
        eVars_B_e_1 = eVars_B_oe_1;
        refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        refalrts::Iter n13;
        if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_3, be_3 )) == 0 ) 
          continue;
        refalrts::use( n13 );
        refalrts::Iter n17 = 0; // Right
        if( ! refalrts::brackets_match( n17, n13 ) ) 
          continue;
        if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_4, be_4 ) ) 
          continue;
        if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_4, be_4 ) ) 
          continue;
        eVars_E_b_1 = bb_3;
        refalrts::use( eVars_E_b_1 );
        eVars_E_e_1 = be_3;
        refalrts::use( eVars_E_e_1 );
        if( ! refalrts::svar_left( sCount_1, bb_4, be_4 ) ) 
          continue;
        if( ! empty_seq( bb_4, be_4 ) )
          continue;
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
          {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
          {refalrts::icSpliceSTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
          {refalrts::icSpliceSTVar, & sMode_1},
          {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icSpliceSTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icSpliceSTVar, & sMode_2},
          {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & CmdRepeated, (void*) "CmdRepeated"},
          {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
          {refalrts::icCopySTVar, & sNum_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
          {refalrts::icCopySTVar, & sCount_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
          {refalrts::icCopySTVar, & sMode_1},
          {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sMode_3, sMode_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::copy_stvar( sCount_2, sCount_1 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_open_call( n23 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_name( n24, & GenPattern, "GenPattern" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_open_bracket( n25 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_name( n26, & RightPtr, "RightPtr" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_close_bracket( n27 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n28 = 0;
        if( ! refalrts::alloc_open_bracket( n28 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n29 = 0;
        if( ! refalrts::alloc_name( n29, & TkVariable, "TkVariable" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n30 = 0;
        if( ! refalrts::alloc_close_bracket( n30 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n31 = 0;
        if( ! refalrts::alloc_open_bracket( n31 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_open_bracket( n32 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_open_call( n33 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_name( n34, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_close_call( n35 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_close_bracket( n36 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_close_bracket( n37 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_open_bracket( n38 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_open_bracket( n39 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_name( n40, & CmdRepeated, "CmdRepeated" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_name( n41, & AlgRight, "AlgRight" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_open_call( n42 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_name( n43, & Inc, "Inc" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_close_call( n44 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_close_bracket( n45 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_close_bracket( n46 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_close_call( n47 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n47 );
        refalrts::push_stack( n23 );
        res = refalrts::splice_elem( res, n47 );
        refalrts::link_brackets( n38, n46 );
        res = refalrts::splice_elem( res, n46 );
        refalrts::link_brackets( n39, n45 );
        res = refalrts::splice_elem( res, n45 );
        res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
        res = refalrts::splice_stvar( res, sMode_3 );
        refalrts::push_stack( n44 );
        refalrts::push_stack( n42 );
        res = refalrts::splice_elem( res, n44 );
        res = refalrts::splice_stvar( res, sCount_2 );
        res = refalrts::splice_elem( res, n43 );
        res = refalrts::splice_elem( res, n42 );
        res = refalrts::splice_stvar( res, sNum_2 );
        res = refalrts::splice_elem( res, n41 );
        res = refalrts::splice_elem( res, n40 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
        res = refalrts::splice_elem( res, n38 );
        refalrts::link_brackets( n31, n37 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
        refalrts::link_brackets( n32, n36 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
        res = refalrts::splice_stvar( res, sMode_2 );
        refalrts::push_stack( n35 );
        refalrts::push_stack( n33 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_stvar( res, sCount_1 );
        res = refalrts::splice_elem( res, n34 );
        res = refalrts::splice_elem( res, n33 );
        res = refalrts::splice_elem( res, n32 );
        res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
        res = refalrts::splice_elem( res, n31 );
        res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
        refalrts::link_brackets( n28, n30 );
        res = refalrts::splice_elem( res, n30 );
        res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
        res = refalrts::splice_stvar( res, sMode_1 );
        res = refalrts::splice_elem( res, n29 );
        res = refalrts::splice_elem( res, n28 );
        refalrts::link_brackets( n25, n27 );
        res = refalrts::splice_elem( res, n27 );
        res = refalrts::splice_stvar( res, sNum_1 );
        res = refalrts::splice_elem( res, n26 );
        res = refalrts::splice_elem( res, n25 );
        res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
        res = refalrts::splice_elem( res, n24 );
        res = refalrts::splice_elem( res, n23 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n10;
      if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n10 );
      refalrts::Iter n13 = 0; // Right
      if( ! refalrts::brackets_match( n13, n10 ) ) 
        continue;
      refalrts::Iter n11;
      if( (n11 = refalrts::function_left( & RightPtr, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n11 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_number( n21, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_char( n22, 'e' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'e' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_call( n26 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n2 );
      refalrts::reinit_name( n11, & GenPattern, "GenPattern" );
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n13 );
      refalrts::link_brackets( n10, n9 );
      refalrts::link_brackets( n15, n20 );
      refalrts::link_brackets( n18, n17 );
      refalrts::push_stack( n26 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elems( res, n23, n24 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n21, n22 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n6, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n2 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_right( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_3, be_3 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 (~3 & RightPtr s.Num )~3 e.Pattern_E (~4 e.Vars )~4 (~5 e.Commands )~5
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n18;
    if( (n18 = refalrts::brackets_right( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n18 );
    refalrts::Iter n20 = 0; // Right
    if( ! refalrts::brackets_match( n20, n18 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n15;
    if( (n15 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n15 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n15 ) ) 
      break;
    eVars_b_1 = bb_4;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_4;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_5;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_5;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n10;
      if( (n10 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n10 );
      refalrts::Iter n13 = 0; // Right
      if( ! refalrts::brackets_match( n13, n10 ) ) 
        continue;
      refalrts::Iter n11;
      if( (n11 = refalrts::function_left( & RightPtr, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n11 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      if( ! refalrts::repeated_stvar_left( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdClosedE, (void*) "CmdClosedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_name( n22, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_number( n29, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_char( n30, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_open_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & CmdClosedE, "CmdClosedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_name( n36, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_char( n37, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_close_call( n40 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n40 );
      refalrts::push_stack( n21 );
      res = refalrts::splice_elem( res, n40 );
      refalrts::link_brackets( n33, n39 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n34, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n33 );
      refalrts::link_brackets( n27, n32 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n26 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_elem( res, n21 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 's', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_number( n19, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 's' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 's' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n9 );
      refalrts::link_brackets( n11, n16 );
      refalrts::link_brackets( n14, n13 );
      refalrts::link_brackets( n21, n27 );
      refalrts::link_brackets( n22, n26 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elems( res, n26, n28 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n22, n24 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n19, n20 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n6, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n17, n18 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 's e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 's', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_number( n28, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n32, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n33, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n19, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 't', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_number( n19, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 't' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n9 );
      refalrts::link_brackets( n11, n16 );
      refalrts::link_brackets( n14, n13 );
      refalrts::link_brackets( n21, n27 );
      refalrts::link_brackets( n22, n26 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elems( res, n26, n28 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n22, n24 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n19, n20 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n6, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n17, n18 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 't e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 't', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_number( n28, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n32, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n33, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n19, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkVariable 's e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n3;
      if( (n3 = refalrts::char_left( 's', bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_number( n19, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 's' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 's' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n5 );
      refalrts::link_brackets( n6, n9 );
      refalrts::link_brackets( n11, n16 );
      refalrts::link_brackets( n14, n13 );
      refalrts::link_brackets( n21, n27 );
      refalrts::link_brackets( n22, n26 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elems( res, n26, n28 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n22, n24 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n19, n20 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_elems( res, n5, n6 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n17, n18 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkVariable 's e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 's', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkVariable 's e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n3;
      if( (n3 = refalrts::char_left( 's', bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 's'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_number( n28, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 's' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n32, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n33, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n22, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n19, n21 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & TkVariable 't e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n3;
      if( (n3 = refalrts::char_left( 't', bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_number( n19, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 't' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 't' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n5 );
      refalrts::link_brackets( n6, n9 );
      refalrts::link_brackets( n11, n16 );
      refalrts::link_brackets( n14, n13 );
      refalrts::link_brackets( n21, n27 );
      refalrts::link_brackets( n22, n26 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elems( res, n26, n28 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n22, n24 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n19, n20 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_elems( res, n5, n6 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n17, n18 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & TkVariable 't e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::char_left( 't', bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & RightPtr, bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // e.Pattern_B (~1 & TkVariable 't e.Index )~1 (~2 & RightPtr s.Num )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n3;
      if( (n3 = refalrts::char_left( 't', bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n3 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n6;
      if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n6 ) ) 
        continue;
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & RightPtr, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_1;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_1;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & RightPtr, (void*) "RightPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdVar, (void*) "CmdVar"},
        {refalrts::icFunc, (void*) & AlgRight, (void*) "AlgRight"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 't'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & RightPtr, "RightPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_char( n24, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_number( n28, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdVar, "CmdVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgRight, "AlgRight" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 't' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n32, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n33, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n22, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      refalrts::link_brackets( n19, n21 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_number( n19, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_char( n20, 'e' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_2;
      refalrts::use( eIndex_b_2 );
      static refalrts::Iter eIndex_e_2;
      refalrts::use( eIndex_e_2 );
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sNum_2;
      refalrts::use( sNum_2 );
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_char( n25, 'e' ) )
        return refalrts::cNoMemory;
      static refalrts::Iter eIndex_b_3;
      refalrts::use( eIndex_b_3 );
      static refalrts::Iter eIndex_e_3;
      refalrts::use( eIndex_e_3 );
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
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
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n1, n4 );
      refalrts::link_brackets( n5, n9 );
      refalrts::link_brackets( n11, n16 );
      refalrts::link_brackets( n14, n13 );
      refalrts::link_brackets( n21, n27 );
      refalrts::link_brackets( n22, n26 );
      refalrts::push_stack( n28 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elems( res, n26, n28 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elems( res, n22, n24 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elems( res, n19, n20 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elems( res, n4, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elems( res, n6, n7 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elems( res, n17, n18 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter ePattern_B_b_1;
    refalrts::use( ePattern_B_b_1 );
    static refalrts::Iter ePattern_B_e_1;
    refalrts::use( ePattern_B_e_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter ePattern_E_b_1;
    refalrts::use( ePattern_E_b_1 );
    static refalrts::Iter ePattern_E_e_1;
    refalrts::use( ePattern_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
#ifdef OLD_PATTERN
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_right( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & LeftPtr, bb_1, be_1 ) ) 
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & TkVariable, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#else
    // e.Pattern_B (~1 & LeftPtr s.Num )~1 (~2 & TkVariable 'e e.Index )~2 e.Pattern_E (~3 e.Vars )~3 (~4 e.Commands )~4
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_right( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n16 = 0; // Right
    if( ! refalrts::brackets_match( n16, n14 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    eVars_b_1 = bb_3;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_3;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_4;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_4;
    refalrts::use( eCommands_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        ePattern_B_b_1 = bb_0_stk,
        ePattern_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( ePattern_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( ePattern_B_oe_1, be_0 )
    ) {
      bb_0 = ePattern_B_oe_1;
      ePattern_B_b_1 = bb_0_stk;
      ePattern_B_e_1 = ePattern_B_oe_1;
      refalrts::move_right( ePattern_B_b_1, ePattern_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n4 = 0; // Right
      if( ! refalrts::brackets_match( n4, n1 ) ) 
        continue;
      refalrts::Iter n2;
      if( (n2 = refalrts::function_left( & LeftPtr, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n9 = 0; // Right
      if( ! refalrts::brackets_match( n9, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & TkVariable, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
      ePattern_E_b_1 = bb_0;
      refalrts::use( ePattern_E_b_1 );
      ePattern_E_e_1 = be_0;
      refalrts::use( ePattern_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
        {refalrts::icSpliceEVar, & ePattern_B_b_1, & ePattern_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & TkVariable, (void*) "TkVariable"},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & LeftPtr, (void*) "LeftPtr"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & ePattern_E_b_1, & ePattern_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icInt, 0, 0, 1 },
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icCopySTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_open_call( n17 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_name( n18, & GenPattern, "GenPattern" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & TkVariable, "TkVariable" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_char( n21, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & LeftPtr, "LeftPtr" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_bracket( n25 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_open_bracket( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_open_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_number( n28, 1UL ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_char( n29, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_close_bracket( n30 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_bracket( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_name( n35, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_char( n36, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_close_bracket( n37 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_call( n39 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n39 );
      refalrts::push_stack( n17 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n32, n38 );
      res = refalrts::splice_elem( res, n38 );
      refalrts::link_brackets( n33, n37 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n26, n31 );
      res = refalrts::splice_elem( res, n31 );
      refalrts::link_brackets( n27, n30 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, ePattern_E_b_1, ePattern_E_e_1 );
      refalrts::link_brackets( n23, n25 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n19, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, ePattern_B_b_1, ePattern_B_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_elem( res, n17 );
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
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    refalrts::link_brackets( n4, n15 );
    refalrts::link_brackets( n7, n6 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elems( res, n14, n15 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n12, n13 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elems( res, n7, n10 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
#ifdef OLD_PATTERN
    // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
#else
    // e.Pattern (~1 e.Vars )~1 (~2 e.Commands )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    ePattern_b_1 = bb_0;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_0;
    refalrts::use( ePattern_e_1 );
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdComment, (void*) "CmdComment"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SaveBrackets, (void*) "SaveBrackets"},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_name( n11, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & SaveBrackets, "SaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n9, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n10, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult TextFromPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & TkOpenBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkOpenBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, '(' );
    refalrts::reinit_char( n3, '~' );
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n7, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & TkOpenBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkOpenBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkOpenBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '('},
      {refalrts::icChar, 0, 0, '~'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '(' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & TkCloseBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkCloseBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, ')' );
    refalrts::reinit_char( n3, '~' );
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n7, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & TkCloseBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkCloseBracket s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkCloseBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ')'},
      {refalrts::icChar, 0, 0, '~'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ')' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & TkOpenADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkOpenADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, '[' );
    refalrts::reinit_char( n3, '~' );
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n7, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & TkOpenADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkOpenADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkOpenADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '['},
      {refalrts::icChar, 0, 0, '~'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '[' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & TkCloseADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkCloseADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, ']' );
    refalrts::reinit_char( n3, '~' );
    //}}} REINITS
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n7, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & TkCloseADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkCloseADT s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkCloseADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, ']'},
      {refalrts::icChar, 0, 0, '~'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ']' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '~' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    res = refalrts::splice_elems( res, n5, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
#ifdef OLD_PATTERN
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern_Char, (void*) "TextFromPattern_Char"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & TkChar, (void*) "TkChar"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TkChar, "TkChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n9, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & TkNumber s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkNumber, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_open_call( n0 );
    refalrts::reinit_name( n3, & StrFromInt, "StrFromInt" );
    //}}} REINITS
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n5, n7 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & TkNumber s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkNumber, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkNumber s.Number )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkNumber, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & StrFromInt, "StrFromInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // (~1 & TkName e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkName, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, '&' );
    refalrts::reinit_char( n3, ' ' );
    //}}} REINITS
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
#ifdef OLD_PATTERN
    // (~1 & TkName e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // (~1 & TkName e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkName, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '&'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '&' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
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
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 & TkVariable s.Mode e.Index )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, '.' );
    refalrts::reinit_open_call( n4 );
    //}}} REINITS
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 & TkVariable s.Mode e.Index )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 & TkVariable s.Mode e.Index )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkVariable, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, '.' ) )
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
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    // (~1 & TkIdentifier e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkIdentifier, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n1, ' ' );
    refalrts::reinit_char( n0, '#' );
    refalrts::reinit_char( n3, ' ' );
    //}}} REINITS
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
#ifdef OLD_PATTERN
    // (~1 & TkIdentifier e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#else
    // (~1 & TkIdentifier e.Name )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkIdentifier, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '#'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, '#' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
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
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    //
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

static refalrts::FnResult Escape(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    // '\n'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\n', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'n' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '\\' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\n'
    if( ! refalrts::char_left( '\n', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\n'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\n', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'n' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    // '\r'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 'r' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '\\' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\r'
    if( ! refalrts::char_left( '\r', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\r'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\r', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'r' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    // '\t'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, 't' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_char( n0, '\\' );
    //}}} REINITS
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\t'
    if( ! refalrts::char_left( '\t', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\t'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\t', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 't' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    // '\\'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\\', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\\'
    if( ! refalrts::char_left( '\\', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\\'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\\', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\\' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    // '\''
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\'', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\''
    if( ! refalrts::char_left( '\'', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\''
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '\'', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    // '\"'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '"', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // '\"'
    if( ! refalrts::char_left( '"', bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // '\"'
    refalrts::Iter n0;
    if( (n0 = refalrts::char_left( '"', bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, '\\'},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sOther_1;
    refalrts::use( sOther_1 );
#ifdef OLD_PATTERN
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // s.Other
    if( ! refalrts::svar_left( sOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sOther_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult TextFromPattern_Char(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n1 );
    refalrts::reinit_name( n0, & Escape, "Escape" );
    refalrts::reinit_close_call( n3 );
    //}}} REINITS
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eTail_b_1;
    refalrts::use( eTail_b_1 );
    static refalrts::Iter eTail_e_1;
    refalrts::use( eTail_e_1 );
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
#ifdef OLD_PATTERN
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_1, be_1 ) ) 
      break;
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & TkChar s.Char )~1 e.Tail
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & TkChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    eTail_b_1 = bb_0;
    refalrts::use( eTail_b_1 );
    eTail_e_1 = be_0;
    refalrts::use( eTail_e_1 );
    if( ! refalrts::svar_left( sChar_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Escape, (void*) "Escape"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern_Char, (void*) "TextFromPattern_Char"},
      {refalrts::icSpliceEVar, & eTail_b_1, & eTail_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_open_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Escape, "Escape" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & TextFromPattern_Char, "TextFromPattern_Char" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    //
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
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
      {refalrts::icChar, 0, 0, '\''},
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
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter eOther_b_1;
    refalrts::use( eOther_b_1 );
    static refalrts::Iter eOther_e_1;
    refalrts::use( eOther_e_1 );
    // e.Other
    eOther_b_1 = bb_0;
    refalrts::use( eOther_b_1 );
    eOther_e_1 = be_0;
    refalrts::use( eOther_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eOther_b_1;
    refalrts::use( eOther_b_1 );
    static refalrts::Iter eOther_e_1;
    refalrts::use( eOther_e_1 );
#ifdef OLD_PATTERN
    // e.Other
    eOther_b_1 = bb_0;
    refalrts::use( eOther_b_1 );
    eOther_e_1 = be_0;
    refalrts::use( eOther_e_1 );
#else
    // e.Other
    eOther_b_1 = bb_0;
    refalrts::use( eOther_b_1 );
    eOther_e_1 = be_0;
    refalrts::use( eOther_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & TextFromPattern, (void*) "TextFromPattern"},
      {refalrts::icSpliceEVar, & eOther_b_1, & eOther_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & TextFromPattern, "TextFromPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult SaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n3, n4 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n1, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
#ifdef OLD_PATTERN
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#else
    // e.Commands
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoSaveBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 e.Scanned )~1 e.Commands_B (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 e.Commands_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_0_stk,
        eCommands_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCommands_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCommands_B_oe_1, be_0 )
    ) {
      bb_0 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_0_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & CmdOpenedE, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & AlgLeft, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eCommands_E_b_1 = bb_0;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_0;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      refalrts::Iter n8;
      if( (n8 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n8 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & DoSaveBrackets_Aux, "DoSaveBrackets_Aux" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      //}}} REINITS
      refalrts::link_brackets( n0, n10 );
      refalrts::link_brackets( n4, n2 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elems( res, n4, n6 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_elems( res, n12, n13 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Scanned )~1 e.Commands_B (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 e.Commands_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_0_stk,
        eCommands_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCommands_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCommands_B_oe_1, be_0 )
    ) {
      bb_0 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_0_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
        continue;
      eCommands_E_b_1 = bb_0;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_0;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
        continue;
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
#else
    // (~1 e.Scanned )~1 e.Commands_B (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 e.Commands_E
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_0_stk,
        eCommands_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCommands_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCommands_B_oe_1, be_0 )
    ) {
      bb_0 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_0_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n4;
      if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n4 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n4 ) ) 
        continue;
      refalrts::Iter n5;
      if( (n5 = refalrts::function_left( & CmdOpenedE, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & AlgLeft, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      eCommands_E_b_1 = bb_0;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_0;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
        continue;
      refalrts::Iter n8;
      if( (n8 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n8 );
      eIndex_b_1 = bb_2;
      refalrts::use( eIndex_b_1 );
      eIndex_e_1 = be_2;
      refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & DoSaveBrackets_Aux, (void*) "DoSaveBrackets_Aux"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
        {refalrts::icSpliceEVar, & eCommands_B_b_1, & eCommands_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
        {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icChar, 0, 0, 'e'},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_b_1, & eCommands_E_e_1},
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
      refalrts::Iter n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_name( n13, & DoSaveBrackets_Aux, "DoSaveBrackets_Aux" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_open_bracket( n14 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_open_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n16 = 0;
      if( ! refalrts::alloc_name( n16, & CmdOpenedE, "CmdOpenedE" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n17 = 0;
      if( ! refalrts::alloc_name( n17, & AlgLeft, "AlgLeft" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n18 = 0;
      if( ! refalrts::alloc_char( n18, 'e' ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_close_bracket( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_close_bracket( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_close_call( n21 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n21 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n14, n20 );
      res = refalrts::splice_elem( res, n20 );
      refalrts::link_brackets( n15, n19 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_elem( res, n18 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#else
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoSaveBrackets_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 e.Scanned (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n2 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & CmdOpenedE, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & AlgLeft, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n6 );
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CalcSavedBrackets, "CalcSavedBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eScanned_b_2;
    refalrts::use( eScanned_b_2 );
    static refalrts::Iter eScanned_e_2;
    refalrts::use( eScanned_e_2 );
    if( ! refalrts::copy_evar( eScanned_b_2, eScanned_e_2, eScanned_b_1, eScanned_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eCommands_b_2;
    refalrts::use( eCommands_b_2 );
    static refalrts::Iter eCommands_e_2;
    refalrts::use( eCommands_e_2 );
    if( ! refalrts::copy_evar( eCommands_b_2, eCommands_e_2, eCommands_b_1, eCommands_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_close_call( n30 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n29 );
    refalrts::link_brackets( n2, n28 );
    refalrts::link_brackets( n13, n27 );
    refalrts::link_brackets( n16, n9 );
    refalrts::link_brackets( n17, n8 );
    refalrts::link_brackets( n21, n25 );
    refalrts::push_stack( n30 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n26 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_evar( res, eCommands_b_2, eCommands_e_2 );
    res = refalrts::splice_elems( res, n25, n29 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_stvar( res, sNum_3 );
    res = refalrts::splice_elems( res, n21, n23 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_2 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_evar( res, eScanned_b_2, eScanned_e_2 );
    res = refalrts::splice_elems( res, n13, n16 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elems( res, n2, n4 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n11, n12 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eScanned_b_2;
    refalrts::use( eScanned_b_2 );
    static refalrts::Iter eScanned_e_2;
    refalrts::use( eScanned_e_2 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter sNum_3;
    refalrts::use( sNum_3 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eIndex_b_3;
    refalrts::use( eIndex_b_3 );
    static refalrts::Iter eIndex_e_3;
    refalrts::use( eIndex_e_3 );
    static refalrts::Iter eCommands_b_2;
    refalrts::use( eCommands_b_2 );
    static refalrts::Iter eCommands_e_2;
    refalrts::use( eCommands_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.Scanned (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & CmdOpenedE, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::function_left( & AlgLeft, bb_2, be_2 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 e.Scanned (~2 & CmdOpenedE & AlgLeft s.Num 'e e.Index )~2 )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n2;
    if( (n2 = refalrts::brackets_right( bb_2, be_2, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n2 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & CmdOpenedE, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & AlgLeft, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_2, be_2 ) ) 
      break;
    refalrts::Iter n6;
    if( (n6 = refalrts::char_left( 'e', bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n6 );
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoSaveBrackets, (void*) "DoSaveBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CalcSavedBrackets, (void*) "CalcSavedBrackets"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icCopySTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdOpenedE, (void*) "CmdOpenedE"},
      {refalrts::icFunc, (void*) & AlgLeft, (void*) "AlgLeft"},
      {refalrts::icCopySTVar, & sNum_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eScanned_b_2, eScanned_e_2, eScanned_b_1, eScanned_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_2, sNum_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sNum_3, sNum_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_3, eIndex_e_3, eIndex_b_2, eIndex_e_2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eCommands_b_2, eCommands_e_2, eCommands_b_1, eCommands_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoSaveBrackets, "DoSaveBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & CalcSavedBrackets, "CalcSavedBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_name( n23, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_name( n24, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & CmdOpenedE, "CmdOpenedE" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, & AlgLeft, "AlgLeft" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n37 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_evar( res, eCommands_b_2, eCommands_e_2 );
    refalrts::link_brackets( n13, n36 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n14, n35 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n18, n34 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n19 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::link_brackets( n28, n32 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eIndex_b_3, eIndex_e_3 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_stvar( res, sNum_3 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n21, n27 );
    res = refalrts::splice_elem( res, n27 );
    refalrts::link_brackets( n22, n26 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_stvar( res, sNum_2 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eScanned_b_2, eScanned_e_2 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n13 );
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

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CalcSavedBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Brackets_Intersect, "Brackets_Intersect" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n13, n21 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elems( res, n19, n22 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n13, n18 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elems( res, n6, n10 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n4, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScanned_b_1;
    refalrts::use( eScanned_b_1 );
    static refalrts::Iter eScanned_e_1;
    refalrts::use( eScanned_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#else
    // (~1 e.Scanned )~1 e.Commands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eScanned_b_1 = bb_1;
    refalrts::use( eScanned_b_1 );
    eScanned_e_1 = be_1;
    refalrts::use( eScanned_e_1 );
    eCommands_b_1 = bb_0;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_0;
    refalrts::use( eCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Intersect, (void*) "Brackets_Intersect"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ExtractBrackets, (void*) "ExtractBrackets"},
      {refalrts::icSpliceEVar, & eScanned_b_1, & eScanned_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ExtractBrackets, (void*) "ExtractBrackets"},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Brackets_Intersect, "Brackets_Intersect" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & Brackets_Set, "Brackets_Set" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_open_call( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_name( n20, & ExtractBrackets, "ExtractBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n15, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n16 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n6, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
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

static refalrts::FnResult ExtractBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    // (~1 & CmdEmpty s.BracketNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & CmdEmpty, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
#ifdef OLD_PATTERN
    // (~1 & CmdEmpty s.BracketNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdEmpty, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & CmdEmpty s.BracketNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & CmdEmpty, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    // (~1 & CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & CmdBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sInnerNum_1;
    refalrts::use( sInnerNum_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
#ifdef OLD_PATTERN
    // (~1 & CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CmdBrackets, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & CmdBrackets s.Direction s.BracketNum s.InnerNum )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n0 ) ) 
      break;
    refalrts::Iter n1;
    if( (n1 = refalrts::function_left( & CmdBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sInnerNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icSpliceSTVar, & sInnerNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sInnerNum_1 );
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCommand_1;
    refalrts::use( sCommand_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    // (~1 s.Command s.Direction s.BracketNum e.Info )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    eInfo_b_1 = bb_1;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_1;
    refalrts::use( eInfo_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sBracketNum_1;
    refalrts::use( sBracketNum_1 );
    static refalrts::Iter sCommand_1;
    refalrts::use( sCommand_1 );
    static refalrts::Iter sDirection_1;
    refalrts::use( sDirection_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Command s.Direction s.BracketNum e.Info )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    eInfo_b_1 = bb_1;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_1;
    refalrts::use( eInfo_e_1 );
#else
    // (~1 s.Command s.Direction s.BracketNum e.Info )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sCommand_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sDirection_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sBracketNum_1, bb_1, be_1 ) ) 
      break;
    eInfo_b_1 = bb_1;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_1;
    refalrts::use( eInfo_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sBracketNum_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sBracketNum_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Set(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
    static refalrts::Iter sRepeated_1;
    refalrts::use( sRepeated_1 );
    static refalrts::Iter sRepeated_2;
    refalrts::use( sRepeated_2 );
    static refalrts::Iter eMiddle_b_1;
    refalrts::use( eMiddle_b_1 );
    static refalrts::Iter eMiddle_e_1;
    refalrts::use( eMiddle_e_1 );
    static refalrts::Iter eRest_b_1;
    refalrts::use( eRest_b_1 );
    static refalrts::Iter eRest_e_1;
    refalrts::use( eRest_e_1 );
    // e.Unique s.Repeated e.Middle s.Repeated e.Rest
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eUnique_b_1 = bb_0_stk,
        eUnique_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eUnique_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eUnique_oe_1, be_0 )
    ) {
      bb_0 = eUnique_oe_1;
      eUnique_b_1 = bb_0_stk;
      eUnique_e_1 = eUnique_oe_1;
      refalrts::move_right( eUnique_b_1, eUnique_e_1 );
      if( ! refalrts::svar_left( sRepeated_1, bb_0, be_0 ) ) 
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
        if( ! refalrts::repeated_stvar_left( sRepeated_2, sRepeated_1, bb_0, be_0 ) ) 
          continue;
        eRest_b_1 = bb_0;
        refalrts::use( eRest_b_1 );
        eRest_e_1 = be_0;
        refalrts::use( eRest_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_call( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_name( n6, & Brackets_Set, "Brackets_Set" ) )
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
        res = refalrts::splice_evar( res, eRest_b_1, eRest_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, sRepeated_1 );
        res = refalrts::splice_elems( res, n5, n6 );
        res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
    static refalrts::Iter sRepeated_1;
    refalrts::use( sRepeated_1 );
    static refalrts::Iter eMiddle_b_1;
    refalrts::use( eMiddle_b_1 );
    static refalrts::Iter eMiddle_e_1;
    refalrts::use( eMiddle_e_1 );
    static refalrts::Iter eRest_b_1;
    refalrts::use( eRest_b_1 );
    static refalrts::Iter eRest_e_1;
    refalrts::use( eRest_e_1 );
    static refalrts::Iter sRepeated_2;
    refalrts::use( sRepeated_2 );
#ifdef OLD_PATTERN
    // e.Unique s.Repeated e.Middle s.Repeated e.Rest
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eUnique_b_1 = bb_0_stk,
        eUnique_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eUnique_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eUnique_oe_1, be_0 )
    ) {
      bb_0 = eUnique_oe_1;
      eUnique_b_1 = bb_0_stk;
      eUnique_e_1 = eUnique_oe_1;
      refalrts::move_right( eUnique_b_1, eUnique_e_1 );
      if( ! refalrts::svar_left( sRepeated_1, bb_0, be_0 ) ) 
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
        if( ! refalrts::repeated_stvar_left( sRepeated_2, sRepeated_1, bb_0, be_0 ) ) 
          continue;
        eRest_b_1 = bb_0;
        refalrts::use( eRest_b_1 );
        eRest_e_1 = be_0;
        refalrts::use( eRest_e_1 );
#else
    // e.Unique s.Repeated e.Middle s.Repeated e.Rest
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eUnique_b_1 = bb_0_stk,
        eUnique_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eUnique_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eUnique_oe_1, be_0 )
    ) {
      bb_0 = eUnique_oe_1;
      eUnique_b_1 = bb_0_stk;
      eUnique_e_1 = eUnique_oe_1;
      refalrts::move_right( eUnique_b_1, eUnique_e_1 );
      if( ! refalrts::svar_left( sRepeated_1, bb_0, be_0 ) ) 
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
        if( ! refalrts::repeated_stvar_left( sRepeated_2, sRepeated_1, bb_0, be_0 ) ) 
          continue;
        eRest_b_1 = bb_0;
        refalrts::use( eRest_b_1 );
        eRest_e_1 = be_0;
        refalrts::use( eRest_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceEVar, & eUnique_b_1, & eUnique_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Brackets_Set, (void*) "Brackets_Set"},
          {refalrts::icSpliceSTVar, & sRepeated_1},
          {refalrts::icSpliceEVar, & eMiddle_b_1, & eMiddle_e_1},
          {refalrts::icSpliceEVar, & eRest_b_1, & eRest_e_1},
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
        if( ! refalrts::alloc_name( n6, & Brackets_Set, "Brackets_Set" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_call( n7 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n7 );
        refalrts::push_stack( n5 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_evar( res, eRest_b_1, eRest_e_1 );
        res = refalrts::splice_evar( res, eMiddle_b_1, eMiddle_e_1 );
        res = refalrts::splice_stvar( res, sRepeated_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
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
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
    // e.Unique
    eUnique_b_1 = bb_0;
    refalrts::use( eUnique_b_1 );
    eUnique_e_1 = be_0;
    refalrts::use( eUnique_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eUnique_b_1;
    refalrts::use( eUnique_b_1 );
    static refalrts::Iter eUnique_e_1;
    refalrts::use( eUnique_e_1 );
#ifdef OLD_PATTERN
    // e.Unique
    eUnique_b_1 = bb_0;
    refalrts::use( eUnique_b_1 );
    eUnique_e_1 = be_0;
    refalrts::use( eUnique_e_1 );
#else
    // e.Unique
    eUnique_b_1 = bb_0;
    refalrts::use( eUnique_b_1 );
    eUnique_e_1 = be_0;
    refalrts::use( eUnique_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eUnique_b_1, & eUnique_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eUnique_b_1, eUnique_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult Brackets_Intersect(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter sCommon_1;
    refalrts::use( sCommon_1 );
    static refalrts::Iter sCommon_2;
    refalrts::use( sCommon_2 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::svar_left( sCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( sCommon_2, sCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        //{{{ ALLOCS
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Brackets_Intersect, "Brackets_Intersect" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_close_call( n12 ) )
          return refalrts::cNoMemory;
        //}}} ALLOCS
        //{{{ REINITS
        //}}} REINITS
        refalrts::link_brackets( n0, n4 );
        refalrts::link_brackets( n5, n9 );
        refalrts::push_stack( n12 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elems( res, n4, n5 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n0 );
        res = refalrts::splice_elems( res, n10, n11 );
        res = refalrts::splice_stvar( res, sCommon_1 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      }
    }
  } while ( 0 );
#else
    static refalrts::Iter sCommon_1;
    refalrts::use( sCommon_1 );
    static refalrts::Iter eSet1_E_b_1;
    refalrts::use( eSet1_E_b_1 );
    static refalrts::Iter eSet1_E_e_1;
    refalrts::use( eSet1_E_e_1 );
    static refalrts::Iter eSet2_B_b_1;
    refalrts::use( eSet2_B_b_1 );
    static refalrts::Iter eSet2_B_e_1;
    refalrts::use( eSet2_B_e_1 );
    static refalrts::Iter eSet2_E_b_1;
    refalrts::use( eSet2_E_b_1 );
    static refalrts::Iter eSet2_E_e_1;
    refalrts::use( eSet2_E_e_1 );
    static refalrts::Iter eSet1_B_b_1;
    refalrts::use( eSet1_B_b_1 );
    static refalrts::Iter eSet1_B_e_1;
    refalrts::use( eSet1_B_e_1 );
    static refalrts::Iter sCommon_2;
    refalrts::use( sCommon_2 );
#ifdef OLD_PATTERN
    // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::svar_left( sCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( sCommon_2, sCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#else
    // (~1 e.Set1_B s.Common e.Set1_E )~1 (~2 e.Set2_B s.Common e.Set2_E )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n5;
    if( (n5 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n5 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n5 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eSet1_B_b_1 = bb_1_stk,
        eSet1_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eSet1_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eSet1_B_oe_1, be_1 )
    ) {
      bb_1 = eSet1_B_oe_1;
      eSet1_B_b_1 = bb_1_stk;
      eSet1_B_e_1 = eSet1_B_oe_1;
      refalrts::move_right( eSet1_B_b_1, eSet1_B_e_1 );
      if( ! refalrts::svar_left( sCommon_1, bb_1, be_1 ) ) 
        continue;
      eSet1_E_b_1 = bb_1;
      refalrts::use( eSet1_E_b_1 );
      eSet1_E_e_1 = be_1;
      refalrts::use( eSet1_E_e_1 );
      refalrts::Iter bb_2_stk = bb_2;
      refalrts::Iter be_2_stk = be_2;
      for( 
        refalrts::Iter
          eSet2_B_b_1 = bb_2_stk,
          eSet2_B_oe_1 = bb_2_stk,
          bb_2 = bb_2_stk,
          be_2 = be_2_stk;
        ! empty_seq( eSet2_B_oe_1, be_2 );
        bb_2 = bb_2_stk,
        be_2 = be_2_stk,
        refalrts::next_term( eSet2_B_oe_1, be_2 )
      ) {
        bb_2 = eSet2_B_oe_1;
        eSet2_B_b_1 = bb_2_stk;
        eSet2_B_e_1 = eSet2_B_oe_1;
        refalrts::move_right( eSet2_B_b_1, eSet2_B_e_1 );
        if( ! refalrts::repeated_stvar_left( sCommon_2, sCommon_1, bb_2, be_2 ) ) 
          continue;
        eSet2_E_b_1 = bb_2;
        refalrts::use( eSet2_E_b_1 );
        eSet2_E_e_1 = be_2;
        refalrts::use( eSet2_E_e_1 );
#endif
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icSpliceSTVar, & sCommon_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & Brackets_Intersect, (void*) "Brackets_Intersect"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet1_E_b_1, & eSet1_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eSet2_B_b_1, & eSet2_B_e_1},
          {refalrts::icSpliceEVar, & eSet2_E_b_1, & eSet2_E_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & Brackets_Intersect, "Brackets_Intersect" ) )
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
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n16 );
        refalrts::link_brackets( n14, n15 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_evar( res, eSet2_E_b_1, eSet2_E_e_1 );
        res = refalrts::splice_evar( res, eSet2_B_b_1, eSet2_B_e_1 );
        res = refalrts::splice_elem( res, n14 );
        refalrts::link_brackets( n12, n13 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_evar( res, eSet1_E_b_1, eSet1_E_e_1 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, sCommon_1 );
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
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );

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
    static refalrts::Iter eSet1_b_1;
    refalrts::use( eSet1_b_1 );
    static refalrts::Iter eSet1_e_1;
    refalrts::use( eSet1_e_1 );
    static refalrts::Iter eSet2_b_1;
    refalrts::use( eSet2_b_1 );
    static refalrts::Iter eSet2_e_1;
    refalrts::use( eSet2_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
#else
    // (~1 e.Set1 )~1 (~2 e.Set2 )~2
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eSet1_b_1 = bb_1;
    refalrts::use( eSet1_b_1 );
    eSet1_e_1 = be_1;
    refalrts::use( eSet1_e_1 );
    eSet2_b_1 = bb_2;
    refalrts::use( eSet2_b_1 );
    eSet2_e_1 = be_2;
    refalrts::use( eSet2_e_1 );
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


//End of file
