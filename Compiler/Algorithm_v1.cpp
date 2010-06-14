// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenResult(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdIfDef(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdElse(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdEndIf(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenPattern_v1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult GenPattern_v2(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CmdDropIndent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_GenPattern_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter eCommands_v1_b_1;
    refalrts::use( eCommands_v1_b_1 );
    static refalrts::Iter eCommands_v1_e_1;
    refalrts::use( eCommands_v1_e_1 );
    static refalrts::Iter eVars_v2_b_1;
    refalrts::use( eVars_v2_b_1 );
    static refalrts::Iter eVars_v2_e_1;
    refalrts::use( eVars_v2_e_1 );
    static refalrts::Iter eScannedPattern_v2_b_1;
    refalrts::use( eScannedPattern_v2_b_1 );
    static refalrts::Iter eScannedPattern_v2_e_1;
    refalrts::use( eScannedPattern_v2_e_1 );
    static refalrts::Iter eCommands_v2_b_1;
    refalrts::use( eCommands_v2_b_1 );
    static refalrts::Iter eCommands_v2_e_1;
    refalrts::use( eCommands_v2_e_1 );
    static refalrts::Iter sTotal_1;
    refalrts::use( sTotal_1 );
    // (~4 e.Vars_v1 )~4 (~5 e.Commands_v1 )~5 s.Total (~1 e.Vars_v2 )~1 (~2 e.ScannedPattern_v2 )~2 (~3 e.Commands_v2 )~3
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eVars_v1_b_1 = bb_4;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_4;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_5;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_5;
    refalrts::use( eCommands_v1_e_1 );
    eVars_v2_b_1 = bb_1;
    refalrts::use( eVars_v2_b_1 );
    eVars_v2_e_1 = be_1;
    refalrts::use( eVars_v2_e_1 );
    eScannedPattern_v2_b_1 = bb_2;
    refalrts::use( eScannedPattern_v2_b_1 );
    eScannedPattern_v2_e_1 = be_2;
    refalrts::use( eScannedPattern_v2_e_1 );
    eCommands_v2_b_1 = bb_3;
    refalrts::use( eCommands_v2_b_1 );
    eCommands_v2_e_1 = be_3;
    refalrts::use( eCommands_v2_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_name( n29, & CmdDropIndent, "CmdDropIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_name( n30, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n7, n9 );
    refalrts::link_brackets( n10, n12 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n30 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eCommands_v2_b_1, eCommands_v2_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_v1_b_1, eCommands_v1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elems( res, n16, n27 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, sTotal_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter eCommands_v1_b_1;
    refalrts::use( eCommands_v1_b_1 );
    static refalrts::Iter eCommands_v1_e_1;
    refalrts::use( eCommands_v1_e_1 );
    static refalrts::Iter eCommands_v2_b_1;
    refalrts::use( eCommands_v2_b_1 );
    static refalrts::Iter eCommands_v2_e_1;
    refalrts::use( eCommands_v2_e_1 );
    static refalrts::Iter sTotal_1;
    refalrts::use( sTotal_1 );
    static refalrts::Iter eVars_v2_b_1;
    refalrts::use( eVars_v2_b_1 );
    static refalrts::Iter eVars_v2_e_1;
    refalrts::use( eVars_v2_e_1 );
    static refalrts::Iter eScannedPattern_v2_b_1;
    refalrts::use( eScannedPattern_v2_b_1 );
    static refalrts::Iter eScannedPattern_v2_e_1;
    refalrts::use( eScannedPattern_v2_e_1 );
#ifdef OLD_PATTERN
    // (~4 e.Vars_v1 )~4 (~5 e.Commands_v1 )~5 s.Total (~1 e.Vars_v2 )~1 (~2 e.ScannedPattern_v2 )~2 (~3 e.Commands_v2 )~3
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    if( ! refalrts::brackets_left( bb_5, be_5, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVars_v1_b_1 = bb_4;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_4;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_5;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_5;
    refalrts::use( eCommands_v1_e_1 );
    eVars_v2_b_1 = bb_1;
    refalrts::use( eVars_v2_b_1 );
    eVars_v2_e_1 = be_1;
    refalrts::use( eVars_v2_e_1 );
    eScannedPattern_v2_b_1 = bb_2;
    refalrts::use( eScannedPattern_v2_b_1 );
    eScannedPattern_v2_e_1 = be_2;
    refalrts::use( eScannedPattern_v2_e_1 );
    eCommands_v2_b_1 = bb_3;
    refalrts::use( eCommands_v2_b_1 );
    eCommands_v2_e_1 = be_3;
    refalrts::use( eCommands_v2_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~4 e.Vars_v1 )~4 (~5 e.Commands_v1 )~5 s.Total (~1 e.Vars_v2 )~1 (~2 e.ScannedPattern_v2 )~2 (~3 e.Commands_v2 )~3
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_5 = 0;
    refalrts::Iter be_5 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_5, be_5, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n15 = 0; // Right
    if( ! refalrts::brackets_match( n15, n13 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eVars_v1_b_1 = bb_4;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_4;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_5;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_5;
    refalrts::use( eCommands_v1_e_1 );
    eVars_v2_b_1 = bb_1;
    refalrts::use( eVars_v2_b_1 );
    eVars_v2_e_1 = be_1;
    refalrts::use( eVars_v2_e_1 );
    eScannedPattern_v2_b_1 = bb_2;
    refalrts::use( eScannedPattern_v2_b_1 );
    eScannedPattern_v2_e_1 = be_2;
    refalrts::use( eScannedPattern_v2_e_1 );
    eCommands_v2_b_1 = bb_3;
    refalrts::use( eCommands_v2_b_1 );
    eCommands_v2_e_1 = be_3;
    refalrts::use( eCommands_v2_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sTotal_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_v1_b_1, & eVars_v1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdIfDef, (void*) "CmdIfDef"},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, '_'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_v1_b_1, & eCommands_v1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdElse, (void*) "CmdElse"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdDropIndent, (void*) "CmdDropIndent"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_v2_b_1, & eCommands_v2_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEndIf, (void*) "CmdEndIf"},
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
    if( ! refalrts::alloc_name( n19, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, '_' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_open_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_name( n33, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_close_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_open_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_name( n36, & CmdDropIndent, "CmdDropIndent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_bracket( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_open_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_name( n39, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_close_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n38, n40 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_evar( res, eCommands_v2_b_1, eCommands_v2_e_1 );
    refalrts::link_brackets( n35, n37 );
    res = refalrts::splice_elem( res, n37 );
    res = refalrts::splice_elem( res, n36 );
    res = refalrts::splice_elem( res, n35 );
    refalrts::link_brackets( n32, n34 );
    res = refalrts::splice_elem( res, n34 );
    res = refalrts::splice_elem( res, n33 );
    res = refalrts::splice_elem( res, n32 );
    res = refalrts::splice_evar( res, eCommands_v1_b_1, eCommands_v1_e_1 );
    refalrts::link_brackets( n18, n31 );
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
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_stvar( res, sTotal_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult lambda_GenPattern_1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter eCommands_v1_b_1;
    refalrts::use( eCommands_v1_b_1 );
    static refalrts::Iter eCommands_v1_e_1;
    refalrts::use( eCommands_v1_e_1 );
    // (~3 e.Pattern )~3 (~1 e.Vars_v1 )~1 (~2 e.Commands_v1 )~2
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_3;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_3;
    refalrts::use( ePattern_e_1 );
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_2;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_2;
    refalrts::use( eCommands_v1_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & GenPattern_v2, "GenPattern_v2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & lambda_GenPattern_0, "lambda_GenPattern_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n6 );
    refalrts::reinit_name( n8, & Fetch, "Fetch" );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_v1_b_1, eCommands_v1_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n11, n14 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elems( res, n9, n10 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter eCommands_v1_b_1;
    refalrts::use( eCommands_v1_b_1 );
    static refalrts::Iter eCommands_v1_e_1;
    refalrts::use( eCommands_v1_e_1 );
#ifdef OLD_PATTERN
    // (~3 e.Pattern )~3 (~1 e.Vars_v1 )~1 (~2 e.Commands_v1 )~2
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
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
    ePattern_b_1 = bb_3;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_3;
    refalrts::use( ePattern_e_1 );
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_2;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_2;
    refalrts::use( eCommands_v1_e_1 );
#else
    // (~3 e.Pattern )~3 (~1 e.Vars_v1 )~1 (~2 e.Commands_v1 )~2
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n3;
    if( (n3 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n3 );
    refalrts::Iter n5 = 0; // Right
    if( ! refalrts::brackets_match( n5, n3 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_3;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_3;
    refalrts::use( ePattern_e_1 );
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    eCommands_v1_b_1 = bb_2;
    refalrts::use( eCommands_v1_b_1 );
    eCommands_v1_e_1 = be_2;
    refalrts::use( eCommands_v1_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern_v2, (void*) "GenPattern_v2"},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GenPattern_0, (void*) "lambda_GenPattern_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_v1_b_1, & eVars_v1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_v1_b_1, & eCommands_v1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenPattern_v2, "GenPattern_v2" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & lambda_GenPattern_0, "lambda_GenPattern_0" ) )
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
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n22 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eCommands_v1_b_1, eCommands_v1_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
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
    if( ! refalrts::alloc_name( n2, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenPattern_v1, "GenPattern_v1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & lambda_GenPattern_1, "lambda_GenPattern_1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n9, n10 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elems( res, n10, n12 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    res = refalrts::splice_elems( res, n5, n9 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elems( res, n1, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter ePattern_b_2;
    refalrts::use( ePattern_b_2 );
    static refalrts::Iter ePattern_e_2;
    refalrts::use( ePattern_e_2 );
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
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern_v1, (void*) "GenPattern_v1"},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_GenPattern_1, (void*) "lambda_GenPattern_1"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::copy_evar( ePattern_b_2, ePattern_e_2, ePattern_b_1, ePattern_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GenPattern_v1, "GenPattern_v1" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & lambda_GenPattern_1, "lambda_GenPattern_1" ) )
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
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, ePattern_b_2, ePattern_e_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
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

extern refalrts::FnResult MakeAlgorithm_v1(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult lambda_MakeAlgorithm_v1_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sTotal_1;
    refalrts::use( sTotal_1 );
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter ePatCommands_b_1;
    refalrts::use( ePatCommands_b_1 );
    static refalrts::Iter ePatCommands_e_1;
    refalrts::use( ePatCommands_e_1 );
    // (~2 e.Result )~2 s.Total (~1 e.Vars_v1 )~1 e.PatCommands
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    ePatCommands_b_1 = bb_0;
    refalrts::use( ePatCommands_b_1 );
    ePatCommands_e_1 = be_0;
    refalrts::use( ePatCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
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
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n4, n6 );
    refalrts::link_brackets( n10, n11 );
    refalrts::link_brackets( n12, n13 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sTotal_1 );
    res = refalrts::splice_elems( res, n8, n13 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, ePatCommands_b_1, ePatCommands_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sTotal_1;
    refalrts::use( sTotal_1 );
    static refalrts::Iter eVars_v1_b_1;
    refalrts::use( eVars_v1_b_1 );
    static refalrts::Iter eVars_v1_e_1;
    refalrts::use( eVars_v1_e_1 );
    static refalrts::Iter ePatCommands_b_1;
    refalrts::use( ePatCommands_b_1 );
    static refalrts::Iter ePatCommands_e_1;
    refalrts::use( ePatCommands_e_1 );
#ifdef OLD_PATTERN
    // (~2 e.Result )~2 s.Total (~1 e.Vars_v1 )~1 e.PatCommands
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    ePatCommands_b_1 = bb_0;
    refalrts::use( ePatCommands_b_1 );
    ePatCommands_e_1 = be_0;
    refalrts::use( ePatCommands_e_1 );
#else
    // (~2 e.Result )~2 s.Total (~1 e.Vars_v1 )~1 e.PatCommands
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sTotal_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    eVars_v1_b_1 = bb_1;
    refalrts::use( eVars_v1_b_1 );
    eVars_v1_e_1 = be_1;
    refalrts::use( eVars_v1_e_1 );
    ePatCommands_b_1 = bb_0;
    refalrts::use( ePatCommands_b_1 );
    ePatCommands_e_1 = be_0;
    refalrts::use( ePatCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_v1_b_1, & eVars_v1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatCommands_b_1, & ePatCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sTotal_1},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
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
    refalrts::push_stack( n18 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sTotal_1 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::link_brackets( n10, n11 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, ePatCommands_b_1, ePatCommands_e_1 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n8, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eVars_v1_b_1, eVars_v1_e_1 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult MakeAlgorithm_v1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & GenPattern, "GenPattern" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & lambda_MakeAlgorithm_v1_0, "lambda_MakeAlgorithm_v1_0" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n3 );
    refalrts::reinit_name( n5, & GeneralizeResult, "GeneralizeResult" );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n14 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elems( res, n14, n16 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n10, n13 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elems( res, n6, n9 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.Pattern )~1 (~2 e.Result )~2
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
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eResult_b_1 = bb_2;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_2;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult, (void*) "GeneralizeResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Fetch, (void*) "Fetch"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenPattern, (void*) "GenPattern"},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & refalrts::create_closure, (void*) "refalrts::create_closure"},
      {refalrts::icFunc, (void*) & lambda_MakeAlgorithm_v1_0, (void*) "lambda_MakeAlgorithm_v1_0"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & GeneralizeResult, "GeneralizeResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & GenPattern, "GenPattern" ) )
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
    if( ! refalrts::alloc_name( n15, & lambda_MakeAlgorithm_v1_0, "lambda_MakeAlgorithm_v1_0" ) )
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
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
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

//$LABEL Dir
template <typename T>
struct DirL_ {
  static const char *name() {
    return "Dir";
  }
};

//$LABEL Num
template <typename T>
struct NumL_ {
  static const char *name() {
    return "Num";
  }
};

//$LABEL NoNum
template <typename T>
struct NoNumL_ {
  static const char *name() {
    return "NoNum";
  }
};

//$LABEL DirLeft
template <typename T>
struct DirLeftL_ {
  static const char *name() {
    return "DirLeft";
  }
};

//$LABEL DirRight
template <typename T>
struct DirRightL_ {
  static const char *name() {
    return "DirRight";
  }
};

refalrts::FnResult AlgLeft(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    // # Dir
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_ident( n0, & DirLeftL_<int>::name );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // # Dir
    if( ! refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // # Dir
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icIdent, (void*) & DirLeftL_<int>::name},
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
    if( ! refalrts::alloc_ident( n1, & DirLeftL_<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Num
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_ident( n0, & NoNumL_<int>::name );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // # Num
    if( ! refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // # Num
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icIdent, (void*) & NoNumL_<int>::name},
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
    if( ! refalrts::alloc_ident( n1, & NoNumL_<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult AlgRight(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    // # Dir
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_ident( n0, & DirRightL_<int>::name );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // # Dir
    if( ! refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // # Dir
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & DirL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icIdent, (void*) & DirRightL_<int>::name},
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
    if( ! refalrts::alloc_ident( n1, & DirRightL_<int>::name ) )
      return refalrts::cNoMemory;
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
    // # Num
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_ident( n0, & NoNumL_<int>::name );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
#ifdef OLD_PATTERN
    // # Num
    if( ! refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // # Num
    refalrts::Iter n0;
    if( (n0 = refalrts::ident_left(  & NumL_<int>::name, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icIdent, (void*) & NoNumL_<int>::name},
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
    if( ! refalrts::alloc_ident( n1, & NoNumL_<int>::name ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult TkIdentifier(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdEmpty(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdRepeated(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdOpenedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdClosedE(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdComment(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdPrint(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtAlloc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsert(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult CtInsertVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StLink(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult StStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sValue_1;
    refalrts::use( sValue_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkChar s.Value )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkChar, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sValue_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StChar, "StChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sValue_1;
    refalrts::use( sValue_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkChar s.Value )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkChar, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sValue_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkChar s.Value )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkChar, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sValue_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StChar, (void*) "StChar"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sValue_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StChar, "StChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkName e.Name )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkName, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StName, "StName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkName e.Name )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkName, bb_3, be_3 ) ) 
      break;
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkName e.Name )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkName, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StName, (void*) "StName"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StName, "StName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkNumber s.Number )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkNumber, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StNumber, "StNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkNumber s.Number )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkNumber, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkNumber s.Number )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkNumber, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNumber_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StNumber, (void*) "StNumber"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StNumber, "StNumber" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkIdentifier e.Name )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkIdentifier, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StIdent, "StIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkIdentifier e.Name )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkIdentifier, bb_3, be_3 ) ) 
      break;
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkIdentifier e.Name )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkIdentifier, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eName_b_1 = bb_3;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_3;
    refalrts::use( eName_e_1 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StIdent, (void*) "StIdent"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StIdent, "StIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenBracket s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenBracket, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StOpenBracket, "StOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenBracket s.Num )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenBracket, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenBracket s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenBracket, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenBracket, (void*) "StOpenBracket"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StOpenBracket, "StOpenBracket" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenCall s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenCall, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StOpenCall, "StOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenCall s.Num )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenCall, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenCall s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenCall, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenCall, (void*) "StOpenCall"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StOpenCall, "StOpenCall" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenADT s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenADT, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & StOpenADT, "StOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsert, "CtInsert" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
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
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n17 );
    refalrts::link_brackets( n7, n5 );
    refalrts::link_brackets( n15, n10 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n18 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elems( res, n17, n19 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elems( res, n15, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elems( res, n13, n14 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenADT s.Num )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkOpenADT, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkOpenADT s.Num )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkOpenADT, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icFunc, (void*) & StOpenADT, (void*) "StOpenADT"},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceSTVar, & sNum_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icCopySTVar, & sCounter_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & StOpenADT, "StOpenADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CtInsert, "CtInsert" ) )
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
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::push_stack( n27 );
    refalrts::push_stack( n25 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_stvar( res, sCounter_3 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n16, n24 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_stvar( res, sCounter_2 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n17, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenBracket s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseBracket s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseBracket, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenBracket, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & StCloseBracket, "StCloseBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_2;
      refalrts::use( sCounter_2 );
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StLink, "StLink" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOpenCounter_2;
      refalrts::use( sOpenCounter_2 );
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_3;
      refalrts::use( sCounter_3 );
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_call( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_4;
      refalrts::use( sCounter_4 );
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_call( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n15 );
      //}}} REINITS
      refalrts::link_brackets( n0, n2 );
      refalrts::link_brackets( n3, n28 );
      refalrts::link_brackets( n5, n10 );
      refalrts::link_brackets( n14, n12 );
      refalrts::link_brackets( n22, n17 );
      refalrts::link_brackets( n24, n27 );
      refalrts::push_stack( n32 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n31 );
      refalrts::push_stack( n29 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elems( res, n27, n30 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elems( res, n24, n26 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elems( res, n22, n23 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elems( res, n20, n21 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elems( res, n5, n7 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n15 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    static refalrts::Iter sOpenCounter_2;
    refalrts::use( sOpenCounter_2 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    static refalrts::Iter sCounter_4;
    refalrts::use( sCounter_4 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenBracket s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseBracket s.Num )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseBracket, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::function_left( & StOpenBracket, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#else
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenBracket s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseBracket s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseBracket, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenBracket, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_b_1, & eCommands_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenBracket, (void*) "StOpenBracket"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_b_1, & eCommands_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseBracket, (void*) "StCloseBracket"},
        {refalrts::icSpliceSTVar, & sCounter_1},
        {refalrts::icSpliceSTVar, & sNum_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StLink, (void*) "StLink"},
        {refalrts::icCopySTVar, & sOpenCounter_1},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StOpenBracket, "StOpenBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & StCloseBracket, "StCloseBracket" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_name( n36, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_name( n37, & StLink, "StLink" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_call( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_call( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_call( n43 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n43 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      refalrts::push_stack( n42 );
      refalrts::push_stack( n40 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      refalrts::link_brackets( n23, n39 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n35, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      refalrts::link_brackets( n32, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n24, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n21, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenADT s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseADT s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseADT, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenADT, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & StCloseADT, "StCloseADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_2;
      refalrts::use( sCounter_2 );
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StLink, "StLink" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOpenCounter_2;
      refalrts::use( sOpenCounter_2 );
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_3;
      refalrts::use( sCounter_3 );
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_close_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_open_call( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_4;
      refalrts::use( sCounter_4 );
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_call( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_call( n32 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n15 );
      //}}} REINITS
      refalrts::link_brackets( n0, n2 );
      refalrts::link_brackets( n3, n28 );
      refalrts::link_brackets( n5, n10 );
      refalrts::link_brackets( n14, n12 );
      refalrts::link_brackets( n22, n17 );
      refalrts::link_brackets( n24, n27 );
      refalrts::push_stack( n32 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n31 );
      refalrts::push_stack( n29 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elems( res, n27, n30 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elems( res, n24, n26 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elems( res, n22, n23 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elems( res, n20, n21 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elems( res, n5, n7 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n15 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    static refalrts::Iter sOpenCounter_2;
    refalrts::use( sOpenCounter_2 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    static refalrts::Iter sCounter_4;
    refalrts::use( sCounter_4 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenADT s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseADT s.Num )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseADT, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::function_left( & StOpenADT, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#else
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenADT s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseADT s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseADT, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenADT, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_b_1, & eCommands_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenADT, (void*) "StOpenADT"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_b_1, & eCommands_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseADT, (void*) "StCloseADT"},
        {refalrts::icSpliceSTVar, & sCounter_1},
        {refalrts::icSpliceSTVar, & sNum_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StLink, (void*) "StLink"},
        {refalrts::icCopySTVar, & sOpenCounter_1},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StOpenADT, "StOpenADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & StCloseADT, "StCloseADT" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_name( n36, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_name( n37, & StLink, "StLink" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_close_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_open_call( n40 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_call( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_call( n43 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n43 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n43 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      refalrts::push_stack( n42 );
      refalrts::push_stack( n40 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      refalrts::link_brackets( n23, n39 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n35, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      refalrts::link_brackets( n32, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n24, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n21, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenCall s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseCall s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseCall, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenCall, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & StCloseCall, "StCloseCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_2;
      refalrts::use( sCounter_2 );
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sOpenCounter_2;
      refalrts::use( sOpenCounter_2 );
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_3;
      refalrts::use( sCounter_3 );
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_close_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_open_call( n33 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_name( n34, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sCounter_4;
      refalrts::use( sCounter_4 );
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_close_call( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n15 );
      //}}} REINITS
      refalrts::link_brackets( n0, n2 );
      refalrts::link_brackets( n3, n32 );
      refalrts::link_brackets( n5, n10 );
      refalrts::link_brackets( n14, n12 );
      refalrts::link_brackets( n22, n17 );
      refalrts::link_brackets( n24, n27 );
      refalrts::link_brackets( n28, n31 );
      refalrts::push_stack( n36 );
      refalrts::push_stack( n15 );
      refalrts::push_stack( n35 );
      refalrts::push_stack( n33 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_elem( res, n35 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elems( res, n31, n34 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_elems( res, n27, n30 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elems( res, n24, n26 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elems( res, n22, n23 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elems( res, n20, n21 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      res = refalrts::splice_elem( res, n10 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elems( res, n5, n7 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elems( res, n2, n3 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n15 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    static refalrts::Iter sNum_2;
    refalrts::use( sNum_2 );
    static refalrts::Iter eCommands_B_b_1;
    refalrts::use( eCommands_B_b_1 );
    static refalrts::Iter eCommands_B_e_1;
    refalrts::use( eCommands_B_e_1 );
    static refalrts::Iter eCommands_E_b_1;
    refalrts::use( eCommands_E_b_1 );
    static refalrts::Iter eCommands_E_e_1;
    refalrts::use( eCommands_E_e_1 );
    static refalrts::Iter sOpenCounter_1;
    refalrts::use( sOpenCounter_1 );
    static refalrts::Iter sOpenCounter_2;
    refalrts::use( sOpenCounter_2 );
    static refalrts::Iter sCounter_2;
    refalrts::use( sCounter_2 );
    static refalrts::Iter sCounter_3;
    refalrts::use( sCounter_3 );
    static refalrts::Iter sCounter_4;
    refalrts::use( sCounter_4 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenCall s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseCall s.Num )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkCloseCall, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::function_left( & CtAlloc, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::function_left( & StOpenCall, bb_3, be_3 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#else
    // (~1 e.Vars )~1 (~2 e.Commands_B (~3 & CtAlloc & StOpenCall s.OpenCounter s.Num )~3 e.Commands_E )~2 s.Counter (~4 & TkCloseCall s.Num )~4 e.Result
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
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n3 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n14;
    if( (n14 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n14 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n14 ) ) 
      break;
    refalrts::Iter n15;
    if( (n15 = refalrts::function_left( & TkCloseCall, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n15 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sNum_1, bb_4, be_4 ) ) 
      break;
    if( ! empty_seq( bb_4, be_4 ) )
      break;
    refalrts::Iter bb_2_stk = bb_2;
    refalrts::Iter be_2_stk = be_2;
    for( 
      refalrts::Iter
        eCommands_B_b_1 = bb_2_stk,
        eCommands_B_oe_1 = bb_2_stk,
        bb_2 = bb_2_stk,
        be_2 = be_2_stk;
      ! empty_seq( eCommands_B_oe_1, be_2 );
      bb_2 = bb_2_stk,
      be_2 = be_2_stk,
      refalrts::next_term( eCommands_B_oe_1, be_2 )
    ) {
      bb_2 = eCommands_B_oe_1;
      eCommands_B_b_1 = bb_2_stk;
      eCommands_B_e_1 = eCommands_B_oe_1;
      refalrts::move_right( eCommands_B_b_1, eCommands_B_e_1 );
      refalrts::Iter bb_3 = 0;
      refalrts::Iter be_3 = 0;
      refalrts::Iter n5;
      if( (n5 = refalrts::brackets_left( bb_3, be_3, bb_2, be_2 )) == 0 ) 
        continue;
      refalrts::use( n5 );
      refalrts::Iter n10 = 0; // Right
      if( ! refalrts::brackets_match( n10, n5 ) ) 
        continue;
      refalrts::Iter n6;
      if( (n6 = refalrts::function_left( & CtAlloc, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n6 );
      refalrts::Iter n7;
      if( (n7 = refalrts::function_left( & StOpenCall, bb_3, be_3 )) == 0 ) 
        continue;
      refalrts::use( n7 );
      if( ! refalrts::repeated_stvar_right( sNum_2, sNum_1, bb_3, be_3 ) ) 
        continue;
      eCommands_E_b_1 = bb_2;
      refalrts::use( eCommands_E_b_1 );
      eCommands_E_e_1 = be_2;
      refalrts::use( eCommands_E_e_1 );
      if( ! refalrts::svar_left( sOpenCounter_1, bb_3, be_3 ) ) 
        continue;
      if( ! empty_seq( bb_3, be_3 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_B_b_1, & eCommands_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StOpenCall, (void*) "StOpenCall"},
        {refalrts::icSpliceSTVar, & sOpenCounter_1},
        {refalrts::icSpliceSTVar, & sNum_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eCommands_E_b_1, & eCommands_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
        {refalrts::icFunc, (void*) & StCloseCall, (void*) "StCloseCall"},
        {refalrts::icSpliceSTVar, & sCounter_1},
        {refalrts::icSpliceSTVar, & sNum_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsert, (void*) "CtInsert"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StStack, (void*) "StStack"},
        {refalrts::icCopySTVar, & sOpenCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtBrackets, (void*) "CtBrackets"},
        {refalrts::icFunc, (void*) & StStack, (void*) "StStack"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sCounter_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
      if( ! refalrts::copy_stvar( sOpenCounter_2, sOpenCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_2, sCounter_1 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_3, sCounter_2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::copy_stvar( sCounter_4, sCounter_3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_bracket( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_bracket( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_name( n26, & StOpenCall, "StOpenCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_bracket( n27 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n28 = 0;
      if( ! refalrts::alloc_open_bracket( n28 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n29 = 0;
      if( ! refalrts::alloc_name( n29, & CtAlloc, "CtAlloc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & StCloseCall, "StCloseCall" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_close_bracket( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_open_bracket( n32 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n33 = 0;
      if( ! refalrts::alloc_name( n33, & CtInsert, "CtInsert" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n34 = 0;
      if( ! refalrts::alloc_close_bracket( n34 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n35 = 0;
      if( ! refalrts::alloc_open_bracket( n35 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n36 = 0;
      if( ! refalrts::alloc_name( n36, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n37 = 0;
      if( ! refalrts::alloc_name( n37, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n38 = 0;
      if( ! refalrts::alloc_close_bracket( n38 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n39 = 0;
      if( ! refalrts::alloc_open_bracket( n39 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n40 = 0;
      if( ! refalrts::alloc_name( n40, & CtBrackets, "CtBrackets" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n41 = 0;
      if( ! refalrts::alloc_name( n41, & StStack, "StStack" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n42 = 0;
      if( ! refalrts::alloc_close_bracket( n42 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n43 = 0;
      if( ! refalrts::alloc_close_bracket( n43 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n44 = 0;
      if( ! refalrts::alloc_open_call( n44 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n45 = 0;
      if( ! refalrts::alloc_name( n45, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n46 = 0;
      if( ! refalrts::alloc_close_call( n46 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n47 = 0;
      if( ! refalrts::alloc_close_call( n47 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n47 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n47 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      refalrts::push_stack( n46 );
      refalrts::push_stack( n44 );
      res = refalrts::splice_elem( res, n46 );
      res = refalrts::splice_stvar( res, sCounter_4 );
      res = refalrts::splice_elem( res, n45 );
      res = refalrts::splice_elem( res, n44 );
      refalrts::link_brackets( n23, n43 );
      res = refalrts::splice_elem( res, n43 );
      refalrts::link_brackets( n39, n42 );
      res = refalrts::splice_elem( res, n42 );
      res = refalrts::splice_stvar( res, sCounter_3 );
      res = refalrts::splice_elem( res, n41 );
      res = refalrts::splice_elem( res, n40 );
      res = refalrts::splice_elem( res, n39 );
      refalrts::link_brackets( n35, n38 );
      res = refalrts::splice_elem( res, n38 );
      res = refalrts::splice_stvar( res, sOpenCounter_2 );
      res = refalrts::splice_elem( res, n37 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_elem( res, n35 );
      refalrts::link_brackets( n32, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_stvar( res, sCounter_2 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_elem( res, n32 );
      refalrts::link_brackets( n28, n31 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_stvar( res, sNum_2 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_elem( res, n28 );
      res = refalrts::splice_evar( res, eCommands_E_b_1, eCommands_E_e_1 );
      refalrts::link_brackets( n24, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_stvar( res, sNum_1 );
      res = refalrts::splice_stvar( res, sOpenCounter_1 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_evar( res, eCommands_B_b_1, eCommands_B_e_1 );
      res = refalrts::splice_elem( res, n23 );
      refalrts::link_brackets( n21, n22 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    // (~1 e.Vars_B (~2 s.Usings s.Mode e.Index )~2 e.Vars_E )~1 (~3 e.Commands )~3 s.Counter (~4 & TkVariable s.Mode e.Index )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n13 ) ) 
      break;
    refalrts::Iter n14;
    if( (n14 = refalrts::function_left( & TkVariable, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n14 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) ) 
      break;
    eIndex_b_1 = bb_4;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_4;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVars_B_b_1 = bb_1_stk,
        eVars_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVars_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVars_B_oe_1, be_1 )
    ) {
      bb_1 = eVars_B_oe_1;
      eVars_B_b_1 = bb_1_stk;
      eVars_B_e_1 = eVars_B_oe_1;
      refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      eVars_E_b_1 = bb_1;
      refalrts::use( eVars_E_b_1 );
      eVars_E_e_1 = be_1;
      refalrts::use( eVars_E_e_1 );
      if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_name( n19, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_open_call( n20 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_name( n21, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_close_call( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_name( n23, & CtInsertVar, "CtInsertVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_open_call( n24 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_name( n25, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      static refalrts::Iter sUsings_2;
      refalrts::use( sUsings_2 );
      if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n26 = 0;
      if( ! refalrts::alloc_close_call( n26 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n27 = 0;
      if( ! refalrts::alloc_close_call( n27 ) )
        return refalrts::cNoMemory;
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_open_call( n14 );
      //}}} REINITS
      refalrts::link_brackets( n0, n8 );
      refalrts::link_brackets( n2, n6 );
      refalrts::link_brackets( n9, n17 );
      refalrts::link_brackets( n13, n11 );
      refalrts::push_stack( n27 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n26 );
      refalrts::push_stack( n24 );
      refalrts::push_stack( n22 );
      refalrts::push_stack( n20 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      res = refalrts::splice_elem( res, n17 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_stvar( res, sUsings_2 );
      res = refalrts::splice_elems( res, n23, n25 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elems( res, n8, n9 );
      res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_stvar( res, sUsings_1 );
      res = refalrts::splice_elems( res, n20, n21 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
      res = refalrts::splice_elem( res, n0 );
      res = refalrts::splice_elem( res, n19 );
      res = refalrts::splice_elem( res, n14 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
#ifdef OLD_PATTERN
    // (~1 e.Vars_B (~2 s.Usings s.Mode e.Index )~2 e.Vars_E )~1 (~3 e.Commands )~3 s.Counter (~4 & TkVariable s.Mode e.Index )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_4, be_4 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) ) 
      break;
    eIndex_b_1 = bb_4;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_4;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVars_B_b_1 = bb_1_stk,
        eVars_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVars_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVars_B_oe_1, be_1 )
    ) {
      bb_1 = eVars_B_oe_1;
      eVars_B_b_1 = bb_1_stk;
      eVars_B_e_1 = eVars_B_oe_1;
      refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      eVars_E_b_1 = bb_1;
      refalrts::use( eVars_E_b_1 );
      eVars_E_e_1 = be_1;
      refalrts::use( eVars_E_e_1 );
      if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#else
    // (~1 e.Vars_B (~2 s.Usings s.Mode e.Index )~2 e.Vars_E )~1 (~3 e.Commands )~3 s.Counter (~4 & TkVariable s.Mode e.Index )~4 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    eCommands_b_1 = bb_3;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_3;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n13;
    if( (n13 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n13 );
    refalrts::Iter n17 = 0; // Right
    if( ! refalrts::brackets_match( n17, n13 ) ) 
      break;
    refalrts::Iter n14;
    if( (n14 = refalrts::function_left( & TkVariable, bb_4, be_4 )) == 0 ) 
      break;
    refalrts::use( n14 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_4, be_4 ) ) 
      break;
    eIndex_b_1 = bb_4;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_4;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_1_stk = bb_1;
    refalrts::Iter be_1_stk = be_1;
    for( 
      refalrts::Iter
        eVars_B_b_1 = bb_1_stk,
        eVars_B_oe_1 = bb_1_stk,
        bb_1 = bb_1_stk,
        be_1 = be_1_stk;
      ! empty_seq( eVars_B_oe_1, be_1 );
      bb_1 = bb_1_stk,
      be_1 = be_1_stk,
      refalrts::next_term( eVars_B_oe_1, be_1 )
    ) {
      bb_1 = eVars_B_oe_1;
      eVars_B_b_1 = bb_1_stk;
      eVars_B_e_1 = eVars_B_oe_1;
      refalrts::move_right( eVars_B_b_1, eVars_B_e_1 );
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      refalrts::Iter n2;
      if( (n2 = refalrts::brackets_left( bb_2, be_2, bb_1, be_1 )) == 0 ) 
        continue;
      refalrts::use( n2 );
      refalrts::Iter n6 = 0; // Right
      if( ! refalrts::brackets_match( n6, n2 ) ) 
        continue;
      if( ! refalrts::repeated_evar_right( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_2, be_2 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_right( sMode_2, sMode_1, bb_2, be_2 ) ) 
        continue;
      eVars_E_b_1 = bb_1;
      refalrts::use( eVars_E_b_1 );
      eVars_E_e_1 = be_1;
      refalrts::use( eVars_E_e_1 );
      if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
        continue;
      if( ! empty_seq( bb_2, be_2 ) )
        continue;
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eVars_B_b_1, & eVars_B_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icSpliceSTVar, & sUsings_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eVars_E_b_1, & eVars_E_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CtInsertVar, (void*) "CtInsertVar"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
        {refalrts::icCopySTVar, & sUsings_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
        {refalrts::icSpliceSTVar, & sMode_2},
        {refalrts::icSpliceEVar, & eIndex_b_2, & eIndex_e_2},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceSTVar, & sCounter_1},
        {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
      if( ! refalrts::copy_stvar( sUsings_2, sUsings_1 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n19 = 0;
      if( ! refalrts::alloc_open_call( n19 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n20 = 0;
      if( ! refalrts::alloc_name( n20, & GenResult, "GenResult" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n21 = 0;
      if( ! refalrts::alloc_open_bracket( n21 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n22 = 0;
      if( ! refalrts::alloc_open_bracket( n22 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n23 = 0;
      if( ! refalrts::alloc_open_call( n23 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n24 = 0;
      if( ! refalrts::alloc_name( n24, & Inc, "Inc" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n25 = 0;
      if( ! refalrts::alloc_close_call( n25 ) )
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
      if( ! refalrts::alloc_open_bracket( n29 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n30 = 0;
      if( ! refalrts::alloc_name( n30, & CtInsertVar, "CtInsertVar" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n31 = 0;
      if( ! refalrts::alloc_open_call( n31 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n32 = 0;
      if( ! refalrts::alloc_name( n32, & Inc, "Inc" ) )
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
      if( ! refalrts::alloc_close_call( n36 ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( n36 );
      refalrts::push_stack( n19 );
      res = refalrts::splice_elem( res, n36 );
      res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
      res = refalrts::splice_stvar( res, sCounter_1 );
      refalrts::link_brackets( n28, n35 );
      res = refalrts::splice_elem( res, n35 );
      refalrts::link_brackets( n29, n34 );
      res = refalrts::splice_elem( res, n34 );
      res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
      res = refalrts::splice_stvar( res, sMode_2 );
      refalrts::push_stack( n33 );
      refalrts::push_stack( n31 );
      res = refalrts::splice_elem( res, n33 );
      res = refalrts::splice_stvar( res, sUsings_2 );
      res = refalrts::splice_elem( res, n32 );
      res = refalrts::splice_elem( res, n31 );
      res = refalrts::splice_elem( res, n30 );
      res = refalrts::splice_elem( res, n29 );
      res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
      res = refalrts::splice_elem( res, n28 );
      refalrts::link_brackets( n21, n27 );
      res = refalrts::splice_elem( res, n27 );
      res = refalrts::splice_evar( res, eVars_E_b_1, eVars_E_e_1 );
      refalrts::link_brackets( n22, n26 );
      res = refalrts::splice_elem( res, n26 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      refalrts::push_stack( n25 );
      refalrts::push_stack( n23 );
      res = refalrts::splice_elem( res, n25 );
      res = refalrts::splice_stvar( res, sUsings_1 );
      res = refalrts::splice_elem( res, n24 );
      res = refalrts::splice_elem( res, n23 );
      res = refalrts::splice_elem( res, n22 );
      res = refalrts::splice_evar( res, eVars_B_b_1, eVars_B_e_1 );
      res = refalrts::splice_elem( res, n21 );
      res = refalrts::splice_elem( res, n20 );
      res = refalrts::splice_elem( res, n19 );
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkVariable s.Mode e.Index )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkVariable, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_3, be_3 ) ) 
      break;
    eIndex_b_1 = bb_3;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_3;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_number( n14, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CtInsertVar, "CtInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_number( n17, 1UL ) )
      return refalrts::cNoMemory;
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    refalrts::link_brackets( n3, n2 );
    refalrts::link_brackets( n7, n18 );
    refalrts::link_brackets( n15, n11 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elems( res, n15, n17 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkVariable s.Mode e.Index )~3 e.Result
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & TkVariable, bb_3, be_3 ) ) 
      break;
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_3, be_3 ) ) 
      break;
    eIndex_b_1 = bb_3;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_3;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter (~3 & TkVariable s.Mode e.Index )~3 e.Result
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & TkVariable, bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    eResult_b_1 = bb_0;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_0;
    refalrts::use( eResult_e_1 );
    if( ! refalrts::svar_left( sMode_1, bb_3, be_3 ) ) 
      break;
    eIndex_b_1 = bb_3;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_3;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult, (void*) "GenResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtInsertVar, (void*) "CtInsertVar"},
      {refalrts::icInt, 0, 0, 1 },
      {refalrts::icCopySTVar, & sMode_1},
      {refalrts::icCopyEVar, & eIndex_b_1, & eIndex_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & sCounter_1},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    if( ! refalrts::copy_stvar( sMode_2, sMode_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & GenResult, "GenResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_number( n17, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
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
    if( ! refalrts::alloc_name( n22, & CtInsertVar, "CtInsertVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_number( n23, 1UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n26 );
    refalrts::push_stack( n13 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_stvar( res, sCounter_1 );
    refalrts::link_brackets( n20, n25 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n21, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, eIndex_b_2, eIndex_e_2 );
    res = refalrts::splice_stvar( res, sMode_2 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n15, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n16, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
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
    static refalrts::Iter eVars_b_1;
    refalrts::use( eVars_b_1 );
    static refalrts::Iter eVars_e_1;
    refalrts::use( eVars_e_1 );
    static refalrts::Iter eCommands_b_1;
    refalrts::use( eCommands_b_1 );
    static refalrts::Iter eCommands_e_1;
    refalrts::use( eCommands_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eVars_b_1, eVars_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
#ifdef OLD_PATTERN
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.Vars )~1 (~2 e.Commands )~2 s.Counter
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
    eVars_b_1 = bb_1;
    refalrts::use( eVars_b_1 );
    eVars_e_1 = be_1;
    refalrts::use( eVars_e_1 );
    eCommands_b_1 = bb_2;
    refalrts::use( eCommands_b_1 );
    eCommands_e_1 = be_2;
    refalrts::use( eCommands_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eVars_b_1, & eVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
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

static refalrts::FnResult ConvertCommad(refalrts::Iter arg_begin, refalrts::Iter arg_end);

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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
    // (~1 e.Allocates )~1 (~2 & CtAlloc e.Info )~2
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
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & CtAlloc, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n6 );
    refalrts::link_brackets( n3, n2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eInfo_b_1;
    refalrts::use( eInfo_b_1 );
    static refalrts::Iter eInfo_e_1;
    refalrts::use( eInfo_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Allocates )~1 (~2 & CtAlloc e.Info )~2
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );
#else
    // (~1 e.Allocates )~1 (~2 & CtAlloc e.Info )~2
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
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n3 ) ) 
      break;
    refalrts::Iter n4;
    if( (n4 = refalrts::function_left( & CtAlloc, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n4 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eInfo_b_1 = bb_2;
    refalrts::use( eInfo_b_1 );
    eInfo_e_1 = be_2;
    refalrts::use( eInfo_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CtAlloc, (void*) "CtAlloc"},
      {refalrts::icSpliceEVar, & eInfo_b_1, & eInfo_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CtAlloc, "CtAlloc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eInfo_b_1, eInfo_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter tOther_1;
    refalrts::use( tOther_1 );
    // (~1 e.Allocates )~1 t.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_stvar( res, tOther_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter tOther_1;
    refalrts::use( tOther_1 );
#ifdef OLD_PATTERN
    // (~1 e.Allocates )~1 t.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // (~1 e.Allocates )~1 t.Other
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    if( ! refalrts::tvar_left( tOther_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceSTVar, & tOther_1},
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
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tOther_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenResult_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    if( ! refalrts::alloc_name( n2, & ConvertCommands_Separated, "ConvertCommands_Separated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & SeparateAllocates, "SeparateAllocates" ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n6, n7 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    res = refalrts::splice_elems( res, n1, n7 );
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
      {refalrts::icFunc, (void*) & ConvertCommands_Separated, (void*) "ConvertCommands_Separated"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
      {refalrts::icFunc, (void*) & SeparateAllocates, (void*) "SeparateAllocates"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eCommands_b_1, & eCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_name( n2, & ConvertCommands_Separated, "ConvertCommands_Separated" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & MapReduce, "MapReduce" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & SeparateAllocates, "SeparateAllocates" ) )
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
    refalrts::push_stack( n9 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eCommands_b_1, eCommands_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
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
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eOtherCommands_b_1;
    refalrts::use( eOtherCommands_b_1 );
    static refalrts::Iter eOtherCommands_e_1;
    refalrts::use( eOtherCommands_e_1 );
    // (~1 e.Allocates )~1 e.OtherCommands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eOtherCommands_b_1 = bb_0;
    refalrts::use( eOtherCommands_b_1 );
    eOtherCommands_e_1 = be_0;
    refalrts::use( eOtherCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ConvertAllocates, "ConvertAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & ConvertCommand, "ConvertCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n0 );
    refalrts::reinit_name( n2, & Map, "Map" );
    //}}} REINITS
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elems( res, n11, n12 );
    res = refalrts::splice_evar( res, eOtherCommands_b_1, eOtherCommands_e_1 );
    res = refalrts::splice_elems( res, n5, n10 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eAllocates_b_1;
    refalrts::use( eAllocates_b_1 );
    static refalrts::Iter eAllocates_e_1;
    refalrts::use( eAllocates_e_1 );
    static refalrts::Iter eOtherCommands_b_1;
    refalrts::use( eOtherCommands_b_1 );
    static refalrts::Iter eOtherCommands_e_1;
    refalrts::use( eOtherCommands_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.Allocates )~1 e.OtherCommands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eOtherCommands_b_1 = bb_0;
    refalrts::use( eOtherCommands_b_1 );
    eOtherCommands_e_1 = be_0;
    refalrts::use( eOtherCommands_e_1 );
#else
    // (~1 e.Allocates )~1 e.OtherCommands
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n2 = 0; // Right
    if( ! refalrts::brackets_match( n2, n0 ) ) 
      break;
    eAllocates_b_1 = bb_1;
    refalrts::use( eAllocates_b_1 );
    eAllocates_e_1 = be_1;
    refalrts::use( eAllocates_e_1 );
    eOtherCommands_b_1 = bb_0;
    refalrts::use( eOtherCommands_b_1 );
    eOtherCommands_e_1 = be_0;
    refalrts::use( eOtherCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertAllocates, (void*) "ConvertAllocates"},
      {refalrts::icSpliceEVar, & eAllocates_b_1, & eAllocates_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & ConvertCommand, (void*) "ConvertCommand"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eOtherCommands_b_1, & eOtherCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
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
    if( ! refalrts::alloc_name( n5, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ConvertAllocates, "ConvertAllocates" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & ConvertCommand, "ConvertCommand" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eOtherCommands_b_1, eOtherCommands_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eAllocates_b_1, eAllocates_e_1 );
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

static refalrts::FnResult Reverse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tFirst_1;
    refalrts::use( tFirst_1 );
    static refalrts::Iter tLast_1;
    refalrts::use( tLast_1 );
    static refalrts::Iter eMedium_b_1;
    refalrts::use( eMedium_b_1 );
    static refalrts::Iter eMedium_e_1;
    refalrts::use( eMedium_e_1 );
    // t.First e.Medium t.Last
    if( ! refalrts::tvar_left( tFirst_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_right( tLast_1, bb_0, be_0 ) ) 
      break;
    eMedium_b_1 = bb_0;
    refalrts::use( eMedium_b_1 );
    eMedium_e_1 = be_0;
    refalrts::use( eMedium_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_stvar( res, tFirst_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eMedium_b_1, eMedium_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_stvar( res, tLast_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tFirst_1;
    refalrts::use( tFirst_1 );
    static refalrts::Iter tLast_1;
    refalrts::use( tLast_1 );
    static refalrts::Iter eMedium_b_1;
    refalrts::use( eMedium_b_1 );
    static refalrts::Iter eMedium_e_1;
    refalrts::use( eMedium_e_1 );
#ifdef OLD_PATTERN
    // t.First e.Medium t.Last
    if( ! refalrts::tvar_left( tFirst_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_right( tLast_1, bb_0, be_0 ) ) 
      break;
    eMedium_b_1 = bb_0;
    refalrts::use( eMedium_b_1 );
    eMedium_e_1 = be_0;
    refalrts::use( eMedium_e_1 );
#else
    // t.First e.Medium t.Last
    if( ! refalrts::tvar_left( tFirst_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::tvar_right( tLast_1, bb_0, be_0 ) ) 
      break;
    eMedium_b_1 = bb_0;
    refalrts::use( eMedium_b_1 );
    eMedium_e_1 = be_0;
    refalrts::use( eMedium_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tLast_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Reverse, (void*) "Reverse"},
      {refalrts::icSpliceEVar, & eMedium_b_1, & eMedium_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceSTVar, & tFirst_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Reverse, "Reverse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, tFirst_1 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eMedium_b_1, eMedium_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, tLast_1 );
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
    static refalrts::Iter tOne_1;
    refalrts::use( tOne_1 );
    // t.One
    if( ! refalrts::tvar_left( tOne_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    res = refalrts::splice_stvar( res, tOne_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tOne_1;
    refalrts::use( tOne_1 );
#ifdef OLD_PATTERN
    // t.One
    if( ! refalrts::tvar_left( tOne_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.One
    if( ! refalrts::tvar_left( tOne_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tOne_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tOne_1 );
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

refalrts::FnResult CmdAllocateElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdLinkBrackets(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdPushStack(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInsertEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElName(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElNumber(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseBracket(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElOpenCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElCloseCall(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElElem(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElSTVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult ElSeq(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ElemType(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
    // & StChar s.Char
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StChar, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElChar, "ElChar" );
    //}}} REINITS
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sChar_1;
    refalrts::use( sChar_1 );
#ifdef OLD_PATTERN
    // & StChar s.Char
    if( ! refalrts::function_left( & StChar, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StChar s.Char
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StChar, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sChar_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElChar, (void*) "ElChar"},
      {refalrts::icSpliceSTVar, & sChar_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElChar, "ElChar" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n2 );
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
    // & StName e.Name
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StName, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElName, "ElName" );
    //}}} REINITS
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
#ifdef OLD_PATTERN
    // & StName e.Name
    if( ! refalrts::function_left( & StName, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // & StName e.Name
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StName, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElName, (void*) "ElName"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElName, "ElName" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // & StNumber s.Number
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StNumber, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElNumber, "ElNumber" );
    //}}} REINITS
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // & StNumber s.Number
    if( ! refalrts::function_left( & StNumber, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StNumber s.Number
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StNumber, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNumber_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElNumber, (void*) "ElNumber"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElNumber, "ElNumber" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n2 );
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
    // & StIdent e.Name
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StIdent, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElIdent, "ElIdent" );
    //}}} REINITS
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
#ifdef OLD_PATTERN
    // & StIdent e.Name
    if( ! refalrts::function_left( & StIdent, bb_0, be_0 ) ) 
      break;
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#else
    // & StIdent e.Name
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StIdent, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    eName_b_1 = bb_0;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_0;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElIdent, (void*) "ElIdent"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElIdent, "ElIdent" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenADT s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenADT, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElOpenADT, "ElOpenADT" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StOpenADT s.Num
    if( ! refalrts::function_left( & StOpenADT, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StOpenADT s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenADT, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenADT, (void*) "ElOpenADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElOpenADT, "ElOpenADT" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseADT s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseADT, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElCloseADT, "ElCloseADT" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StCloseADT s.Num
    if( ! refalrts::function_left( & StCloseADT, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StCloseADT s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseADT, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseADT, (void*) "ElCloseADT"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElCloseADT, "ElCloseADT" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenBracket s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenBracket, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElOpenBracket, "ElOpenBracket" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StOpenBracket s.Num
    if( ! refalrts::function_left( & StOpenBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StOpenBracket s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenBracket, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenBracket, (void*) "ElOpenBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElOpenBracket, "ElOpenBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseBracket s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseBracket, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElCloseBracket, "ElCloseBracket" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StCloseBracket s.Num
    if( ! refalrts::function_left( & StCloseBracket, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StCloseBracket s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseBracket, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseBracket, (void*) "ElCloseBracket"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElCloseBracket, "ElCloseBracket" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StOpenCall s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenCall, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElOpenCall, "ElOpenCall" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StOpenCall s.Num
    if( ! refalrts::function_left( & StOpenCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StOpenCall s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StOpenCall, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElOpenCall, (void*) "ElOpenCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElOpenCall, "ElOpenCall" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
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
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // & StCloseCall s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseCall, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n0, & ElCloseCall, "ElCloseCall" );
    //}}} REINITS
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // & StCloseCall s.Num
    if( ! refalrts::function_left( & StCloseCall, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // & StCloseCall s.Num
    refalrts::Iter n0;
    if( (n0 = refalrts::function_left( & StCloseCall, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    if( ! refalrts::svar_left( sNum_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & ElCloseCall, (void*) "ElCloseCall"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & ElCloseCall, "ElCloseCall" ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertAllocates(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sType_1;
    refalrts::use( sType_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eValue_b_1;
    refalrts::use( eValue_b_1 );
    static refalrts::Iter eValue_e_1;
    refalrts::use( eValue_e_1 );
    // (~1 & CtAlloc s.Type s.Number e.Value )~1
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
    if( (n1 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    eValue_b_1 = bb_1;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_1;
    refalrts::use( eValue_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & ElemType, "ElemType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdAllocateElem, "CmdAllocateElem" );
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    res = refalrts::splice_stvar( res, sType_1 );
    res = refalrts::splice_elems( res, n6, n7 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sType_1;
    refalrts::use( sType_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eValue_b_1;
    refalrts::use( eValue_b_1 );
    static refalrts::Iter eValue_e_1;
    refalrts::use( eValue_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CtAlloc s.Type s.Number e.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    eValue_b_1 = bb_1;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_1;
    refalrts::use( eValue_e_1 );
#else
    // (~1 & CtAlloc s.Type s.Number e.Value )~1
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
    if( (n1 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sType_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    eValue_b_1 = bb_1;
    refalrts::use( eValue_b_1 );
    eValue_e_1 = be_1;
    refalrts::use( eValue_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdAllocateElem, (void*) "CmdAllocateElem"},
      {refalrts::icSpliceSTVar, & sNumber_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ElemType, (void*) "ElemType"},
      {refalrts::icSpliceSTVar, & sType_1},
      {refalrts::icSpliceEVar, & eValue_b_1, & eValue_e_1},
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdAllocateElem, "CmdAllocateElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & ElemType, "ElemType" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eValue_b_1, eValue_e_1 );
    res = refalrts::splice_stvar( res, sType_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult ConvertCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & CtInsert s.Number )~1
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
    if( (n1 = refalrts::function_left( & CtInsert, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & ElElem, "ElElem" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdInsertElem, "CmdInsertElem" );
    //}}} REINITS
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & CtInsert s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & CtInsert s.Number )~1
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
    if( (n1 = refalrts::function_left( & CtInsert, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElElem, (void*) "ElElem"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ElElem, "ElElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 & CtInsertVar s.Usings 'e e.Index )~1
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
    if( (n1 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdInsertEVar, "CmdInsertEVar" );
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CtInsertVar s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 & CtInsertVar s.Usings 'e e.Index )~1
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
    if( (n1 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n3;
    if( (n3 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertEVar, (void*) "CmdInsertEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdInsertEVar, "CmdInsertEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sSTMode_1;
    refalrts::use( sSTMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 & CtInsertVar s.Usings s.STMode e.Index )~1
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
    if( (n1 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sSTMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & ElSTVar, "ElSTVar" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdInsertElem, "CmdInsertElem" );
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sSTMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sSTMode_1;
    refalrts::use( sSTMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 & CtInsertVar s.Usings s.STMode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sSTMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 & CtInsertVar s.Usings s.STMode e.Index )~1
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
    if( (n1 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sSTMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInsertElem, (void*) "CmdInsertElem"},
      {refalrts::icFunc, (void*) & ElSTVar, (void*) "ElSTVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sSTMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdInsertElem, "CmdInsertElem" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & ElSTVar, "ElSTVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sSTMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // (~1 & CtBrackets & StStack s.Number )~1
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
    if( (n1 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & StStack, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdPushStack, "CmdPushStack" );
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & CtBrackets & StStack s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StStack, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & CtBrackets & StStack s.Number )~1
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
    if( (n1 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & StStack, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdPushStack, (void*) "CmdPushStack"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdPushStack, "CmdPushStack" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sNumber_1 );
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
    static refalrts::Iter sLeftNumber_1;
    refalrts::use( sLeftNumber_1 );
    static refalrts::Iter sRightNumber_1;
    refalrts::use( sRightNumber_1 );
    // (~1 & CtBrackets & StLink s.LeftNumber s.RightNumber )~1
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
    if( (n1 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & StLink, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sRightNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n1, & CmdLinkBrackets, "CmdLinkBrackets" );
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sRightNumber_1 );
    res = refalrts::splice_stvar( res, sLeftNumber_1 );
    res = refalrts::splice_elems( res, n0, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sLeftNumber_1;
    refalrts::use( sLeftNumber_1 );
    static refalrts::Iter sRightNumber_1;
    refalrts::use( sRightNumber_1 );
#ifdef OLD_PATTERN
    // (~1 & CtBrackets & StLink s.LeftNumber s.RightNumber )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StLink, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sRightNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // (~1 & CtBrackets & StLink s.LeftNumber s.RightNumber )~1
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
    if( (n1 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & StLink, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLeftNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sRightNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLinkBrackets, (void*) "CmdLinkBrackets"},
      {refalrts::icSpliceSTVar, & sLeftNumber_1},
      {refalrts::icSpliceSTVar, & sRightNumber_1},
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
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_name( n7, & CmdLinkBrackets, "CmdLinkBrackets" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n6, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sRightNumber_1 );
    res = refalrts::splice_stvar( res, sLeftNumber_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ReplicateVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
    // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    ePatternCommands_b_1 = bb_2;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_2;
    refalrts::use( ePatternCommands_e_1 );
    eResultVars_b_1 = bb_3;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_3;
    refalrts::use( eResultVars_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GeneralizeResult_Vars, "GeneralizeResult_Vars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n6, n8 );
    refalrts::link_brackets( n9, n11 );
    refalrts::push_stack( n20 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n19 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elems( res, n17, n18 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elems( res, n14, n15 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n12, n13 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    ePatternCommands_b_1 = bb_2;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_2;
    refalrts::use( ePatternCommands_e_1 );
    eResultVars_b_1 = bb_3;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_3;
    refalrts::use( eResultVars_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#else
    // (~1 e.PatternVars )~1 (~2 e.PatternCommands )~2 (~3 e.ResultVars )~3 (~4 e.ResultCommands )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    ePatternCommands_b_1 = bb_2;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_2;
    refalrts::use( ePatternCommands_e_1 );
    eResultVars_b_1 = bb_3;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_3;
    refalrts::use( eResultVars_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_Vars, (void*) "GeneralizeResult_Vars"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ReplicateVars, (void*) "ReplicateVars"},
      {refalrts::icSpliceEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_b_1, & ePatternCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_b_1, & eResultCommands_e_1},
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
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GeneralizeResult_Vars, "GeneralizeResult_Vars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & ReplicateVars, "ReplicateVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
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
    if( ! refalrts::alloc_close_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_call( n28 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n28 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n28 );
    refalrts::link_brackets( n26, n27 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n26 );
    refalrts::link_brackets( n24, n25 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n19, n23 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::push_stack( n22 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n14, n18 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult VarSetUnion(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult VarSetDifference(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MakeDeclaration(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GeneralizeResult_Vars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
    // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    eResultVars_b_1 = bb_2;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_2;
    refalrts::use( eResultVars_e_1 );
    ePatternCommands_b_1 = bb_3;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_3;
    refalrts::use( ePatternCommands_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GeneralizeResult_CopyVars, "GeneralizeResult_CopyVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & VarSetUnion, "VarSetUnion" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_bracket( n17 ) )
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
    static refalrts::Iter eResultVars_b_2;
    refalrts::use( eResultVars_b_2 );
    static refalrts::Iter eResultVars_e_2;
    refalrts::use( eResultVars_e_2 );
    if( ! refalrts::copy_evar( eResultVars_b_2, eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_open_bracket( n22 ) )
      return refalrts::cNoMemory;
    static refalrts::Iter ePatternVars_b_2;
    refalrts::use( ePatternVars_b_2 );
    static refalrts::Iter ePatternVars_e_2;
    refalrts::use( ePatternVars_e_2 );
    if( ! refalrts::copy_evar( ePatternVars_b_2, ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_close_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
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
    refalrts::link_brackets( n0, n8 );
    refalrts::link_brackets( n3, n2 );
    refalrts::link_brackets( n6, n5 );
    refalrts::link_brackets( n9, n11 );
    refalrts::link_brackets( n17, n25 );
    refalrts::link_brackets( n20, n21 );
    refalrts::link_brackets( n22, n23 );
    refalrts::link_brackets( n26, n27 );
    refalrts::push_stack( n28 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n24 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elems( res, n27, n28 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elems( res, n23, n26 );
    res = refalrts::splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
    res = refalrts::splice_elems( res, n21, n22 );
    res = refalrts::splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
    res = refalrts::splice_elems( res, n17, n20 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elems( res, n14, n15 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n12, n13 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePatternVars_b_1;
    refalrts::use( ePatternVars_b_1 );
    static refalrts::Iter ePatternVars_e_1;
    refalrts::use( ePatternVars_e_1 );
    static refalrts::Iter eResultVars_b_1;
    refalrts::use( eResultVars_b_1 );
    static refalrts::Iter eResultVars_e_1;
    refalrts::use( eResultVars_e_1 );
    static refalrts::Iter ePatternCommands_b_1;
    refalrts::use( ePatternCommands_b_1 );
    static refalrts::Iter ePatternCommands_e_1;
    refalrts::use( ePatternCommands_e_1 );
    static refalrts::Iter eResultCommands_b_1;
    refalrts::use( eResultCommands_b_1 );
    static refalrts::Iter eResultCommands_e_1;
    refalrts::use( eResultCommands_e_1 );
    static refalrts::Iter ePatternVars_b_2;
    refalrts::use( ePatternVars_b_2 );
    static refalrts::Iter ePatternVars_e_2;
    refalrts::use( ePatternVars_e_2 );
    static refalrts::Iter eResultVars_b_2;
    refalrts::use( eResultVars_b_2 );
    static refalrts::Iter eResultVars_e_2;
    refalrts::use( eResultVars_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    eResultVars_b_1 = bb_2;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_2;
    refalrts::use( eResultVars_e_1 );
    ePatternCommands_b_1 = bb_3;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_3;
    refalrts::use( ePatternCommands_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#else
    // (~1 e.PatternVars )~1 (~2 e.ResultVars )~2 (~3 e.PatternCommands )~3 (~4 e.ResultCommands )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePatternVars_b_1 = bb_1;
    refalrts::use( ePatternVars_b_1 );
    ePatternVars_e_1 = be_1;
    refalrts::use( ePatternVars_e_1 );
    eResultVars_b_1 = bb_2;
    refalrts::use( eResultVars_b_1 );
    eResultVars_e_1 = be_2;
    refalrts::use( eResultVars_e_1 );
    ePatternCommands_b_1 = bb_3;
    refalrts::use( ePatternCommands_b_1 );
    ePatternCommands_e_1 = be_3;
    refalrts::use( ePatternCommands_e_1 );
    eResultCommands_b_1 = bb_4;
    refalrts::use( eResultCommands_b_1 );
    eResultCommands_e_1 = be_4;
    refalrts::use( eResultCommands_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GeneralizeResult_CopyVars, (void*) "GeneralizeResult_CopyVars"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetUnion, (void*) "VarSetUnion"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & ePatternCommands_b_1, & ePatternCommands_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & VarSetDifference, (void*) "VarSetDifference"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eResultVars_b_1, & eResultVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & ePatternVars_b_1, & ePatternVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResultCommands_b_1, & eResultCommands_e_1},
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
    if( ! refalrts::copy_evar( ePatternVars_b_2, ePatternVars_e_2, ePatternVars_b_1, ePatternVars_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResultVars_b_2, eResultVars_e_2, eResultVars_b_1, eResultVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GeneralizeResult_CopyVars, "GeneralizeResult_CopyVars" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & VarSetUnion, "VarSetUnion" ) )
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
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_close_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_open_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_open_bracket( n25 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_call( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & VarSetDifference, "VarSetDifference" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_open_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_close_bracket( n31 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_call( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_close_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_open_bracket( n34 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n36 );
    refalrts::link_brackets( n34, n35 );
    res = refalrts::splice_elem( res, n35 );
    res = refalrts::splice_evar( res, eResultCommands_b_1, eResultCommands_e_1 );
    res = refalrts::splice_elem( res, n34 );
    refalrts::link_brackets( n25, n33 );
    res = refalrts::splice_elem( res, n33 );
    refalrts::push_stack( n32 );
    refalrts::push_stack( n26 );
    res = refalrts::splice_elem( res, n32 );
    refalrts::link_brackets( n30, n31 );
    res = refalrts::splice_elem( res, n31 );
    res = refalrts::splice_evar( res, ePatternVars_b_2, ePatternVars_e_2 );
    res = refalrts::splice_elem( res, n30 );
    refalrts::link_brackets( n28, n29 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eResultVars_b_2, eResultVars_e_2 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    refalrts::link_brackets( n23, n24 );
    res = refalrts::splice_elem( res, n24 );
    res = refalrts::splice_evar( res, ePatternCommands_b_1, ePatternCommands_e_1 );
    res = refalrts::splice_elem( res, n23 );
    refalrts::link_brackets( n14, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::push_stack( n21 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eResultVars_b_1, eResultVars_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, ePatternVars_b_1, ePatternVars_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult CmdEmptyResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdReturnResult(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdIfDef(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdElse(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdEndIf(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdInitRAA(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdFinRAA(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GeneralizeResult_CopyVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eCommonVars_b_1;
    refalrts::use( eCommonVars_b_1 );
    static refalrts::Iter eCommonVars_e_1;
    refalrts::use( eCommonVars_e_1 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_b_1 = bb_1;
    refalrts::use( eCommonVars_b_1 );
    eCommonVars_e_1 = be_1;
    refalrts::use( eCommonVars_e_1 );
    ePattern_b_1 = bb_2;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_2;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_3;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_3;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_4;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_4;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n9 );
    refalrts::reinit_name( n11, & GenerateResult_Interp, "GenerateResult_Interp" );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n6, n8 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n15 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
    res = refalrts::splice_elems( res, n12, n14 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCommonVars_b_1;
    refalrts::use( eCommonVars_b_1 );
    static refalrts::Iter eCommonVars_e_1;
    refalrts::use( eCommonVars_e_1 );
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_b_1 = bb_1;
    refalrts::use( eCommonVars_b_1 );
    eCommonVars_e_1 = be_1;
    refalrts::use( eCommonVars_e_1 );
    ePattern_b_1 = bb_2;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_2;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_3;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_3;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_4;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_4;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.CommonVars )~1 (~2 e.Pattern )~2 (~3 e.CopiedVars )~3 (~4 e.Result )~4
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n9;
    if( (n9 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter n11 = 0; // Right
    if( ! refalrts::brackets_match( n11, n9 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eCommonVars_b_1 = bb_1;
    refalrts::use( eCommonVars_b_1 );
    eCommonVars_e_1 = be_1;
    refalrts::use( eCommonVars_e_1 );
    ePattern_b_1 = bb_2;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_2;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_3;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_3;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_4;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_4;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenerateResult_Interp, (void*) "GenerateResult_Interp"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & MakeDeclaration, (void*) "MakeDeclaration"},
      {refalrts::icSpliceEVar, & eCommonVars_b_1, & eCommonVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_call( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_name( n13, & GenerateResult_Interp, "GenerateResult_Interp" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & MakeDeclaration, "MakeDeclaration" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_close_call( n18 ) )
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
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_close_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n24 );
    refalrts::push_stack( n12 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n22, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n20 );
    refalrts::link_brackets( n14, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::push_stack( n18 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eCommonVars_b_1, eCommonVars_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult GenerateResult_Interp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    // (~1 e.Pattern )~1 (~2 e.CopiedVars )~2 (~3 e.Result )~3
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_2;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_2;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_3;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_3;
    refalrts::use( eResult_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_name( n9, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_name( n19, & CmdInitRAA, "CmdInitRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_open_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_name( n21, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_bracket( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & CmdFinRAA, "CmdFinRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_close_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_open_bracket( n27 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_name( n28, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_bracket( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_call( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_name( n35, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eCopiedVars_b_2;
    refalrts::use( eCopiedVars_b_2 );
    static refalrts::Iter eCopiedVars_e_2;
    refalrts::use( eCopiedVars_e_2 );
    if( ! refalrts::copy_evar( eCopiedVars_b_2, eCopiedVars_e_2, eCopiedVars_b_1, eCopiedVars_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_open_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_name( n38, & GenResult_Commands, "GenResult_Commands" ) )
      return refalrts::cNoMemory;
    static refalrts::Iter eResult_b_2;
    refalrts::use( eResult_b_2 );
    static refalrts::Iter eResult_e_2;
    refalrts::use( eResult_e_2 );
    if( ! refalrts::copy_evar( eResult_b_2, eResult_e_2, eResult_b_1, eResult_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_close_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_open_bracket( n40 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_bracket( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_bracket( n45 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n6, n8 );
    refalrts::link_brackets( n24, n26 );
    refalrts::link_brackets( n27, n29 );
    refalrts::link_brackets( n30, n32 );
    refalrts::link_brackets( n40, n42 );
    refalrts::link_brackets( n43, n45 );
    refalrts::push_stack( n39 );
    refalrts::push_stack( n37 );
    refalrts::push_stack( n36 );
    refalrts::push_stack( n33 );
    refalrts::push_stack( n23 );
    refalrts::push_stack( n20 );
    res = refalrts::splice_elems( res, n39, n45 );
    res = refalrts::splice_evar( res, eResult_b_2, eResult_e_2 );
    res = refalrts::splice_elems( res, n36, n38 );
    res = refalrts::splice_evar( res, eCopiedVars_b_2, eCopiedVars_e_2 );
    res = refalrts::splice_elems( res, n23, n35 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n20, n21 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_elems( res, n9, n18 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter ePattern_b_1;
    refalrts::use( ePattern_b_1 );
    static refalrts::Iter ePattern_e_1;
    refalrts::use( ePattern_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eResult_b_1;
    refalrts::use( eResult_b_1 );
    static refalrts::Iter eResult_e_1;
    refalrts::use( eResult_e_1 );
    static refalrts::Iter eCopiedVars_b_2;
    refalrts::use( eCopiedVars_b_2 );
    static refalrts::Iter eCopiedVars_e_2;
    refalrts::use( eCopiedVars_e_2 );
    static refalrts::Iter eResult_b_2;
    refalrts::use( eResult_b_2 );
    static refalrts::Iter eResult_e_2;
    refalrts::use( eResult_e_2 );
#ifdef OLD_PATTERN
    // (~1 e.Pattern )~1 (~2 e.CopiedVars )~2 (~3 e.Result )~3
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
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_2;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_2;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_3;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_3;
    refalrts::use( eResult_e_1 );
#else
    // (~1 e.Pattern )~1 (~2 e.CopiedVars )~2 (~3 e.Result )~3
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
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n6;
    if( (n6 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n6 );
    refalrts::Iter n8 = 0; // Right
    if( ! refalrts::brackets_match( n8, n6 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    ePattern_b_1 = bb_1;
    refalrts::use( ePattern_b_1 );
    ePattern_e_1 = be_1;
    refalrts::use( ePattern_e_1 );
    eCopiedVars_b_1 = bb_2;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_2;
    refalrts::use( eCopiedVars_e_1 );
    eResult_b_1 = bb_3;
    refalrts::use( eResult_b_1 );
    eResult_e_1 = be_3;
    refalrts::use( eResult_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & ePattern_b_1, & ePattern_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdIfDef, (void*) "CmdIfDef"},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdInitRAA, (void*) "CmdInitRAA"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & MakeInterpCommands, (void*) "MakeInterpCommands"},
      {refalrts::icSpliceEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eResult_b_1, & eResult_e_1},
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
      {refalrts::icCopyEVar, & eCopiedVars_b_1, & eCopiedVars_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GenResult_Commands, (void*) "GenResult_Commands"},
      {refalrts::icCopyEVar, & eResult_b_1, & eResult_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdReturnResult, (void*) "CmdReturnResult"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdEndIf, (void*) "CmdEndIf"},
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
    if( ! refalrts::copy_evar( eCopiedVars_b_2, eCopiedVars_e_2, eCopiedVars_b_1, eCopiedVars_e_1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::copy_evar( eResult_b_2, eResult_e_2, eResult_b_1, eResult_e_1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_name( n10, & CmdIfDef, "CmdIfDef" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & CmdInitRAA, "CmdInitRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_bracket( n23 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_open_call( n24 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_name( n25, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_open_bracket( n26 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_name( n27, & MakeInterpCommands, "MakeInterpCommands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_close_bracket( n28 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_close_call( n29 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_open_bracket( n30 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_name( n31, & CmdFinRAA, "CmdFinRAA" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_close_bracket( n32 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_open_bracket( n33 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_name( n34, & CmdElse, "CmdElse" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_close_bracket( n35 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_open_bracket( n36 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_name( n37, & CmdEmptyResult, "CmdEmptyResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_close_bracket( n38 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_open_call( n39 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_name( n40, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_name( n41, & MakeCopyVar, "MakeCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_close_call( n42 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_open_call( n43 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_name( n44, & GenResult_Commands, "GenResult_Commands" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_close_call( n45 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_open_bracket( n46 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_name( n47, & CmdReturnResult, "CmdReturnResult" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_close_bracket( n48 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_open_bracket( n49 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_name( n50, & CmdEndIf, "CmdEndIf" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n49, n51 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    refalrts::link_brackets( n46, n48 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    refalrts::push_stack( n45 );
    refalrts::push_stack( n43 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_evar( res, eResult_b_2, eResult_e_2 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    refalrts::push_stack( n42 );
    refalrts::push_stack( n39 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_evar( res, eCopiedVars_b_2, eCopiedVars_e_2 );
    res = refalrts::splice_elem( res, n41 );
    res = refalrts::splice_elem( res, n40 );
    res = refalrts::splice_elem( res, n39 );
    refalrts::link_brackets( n36, n38 );
    res = refalrts::splice_elem( res, n38 );
    res = refalrts::splice_elem( res, n37 );
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
    refalrts::push_stack( n24 );
    res = refalrts::splice_elem( res, n29 );
    res = refalrts::splice_evar( res, eResult_b_1, eResult_e_1 );
    refalrts::link_brackets( n26, n28 );
    res = refalrts::splice_elem( res, n28 );
    res = refalrts::splice_evar( res, eCopiedVars_b_1, eCopiedVars_e_1 );
    res = refalrts::splice_elem( res, n27 );
    res = refalrts::splice_elem( res, n26 );
    res = refalrts::splice_elem( res, n25 );
    res = refalrts::splice_elem( res, n24 );
    refalrts::link_brackets( n21, n23 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n9, n20 );
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
    res = refalrts::splice_evar( res, ePattern_b_1, ePattern_e_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCopyEVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdCopyVar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeCopyVar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdCopyEVar, "CmdCopyEVar" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::char_left( 'e', bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Usings 'e e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::char_left( 'e', bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyEVar, (void*) "CmdCopyEVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdCopyEVar, "CmdCopyEVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sUsings_1 );
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
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
#ifdef OLD_PATTERN
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // (~1 s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n0;
    if( (n0 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n0 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdCopyVar, (void*) "CmdCopyVar"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & CmdCopyVar, "CmdCopyVar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrChar(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrFunc(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrInt(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrIdent(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrOB(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrCB(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrOADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrCADT(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrOC(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrCC(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrSplice(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdArrCopy(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult MakeInterpCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
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
    static refalrts::Iter eCopiedVars_B_b_1;
    refalrts::use( eCopiedVars_B_b_1 );
    static refalrts::Iter eCopiedVars_B_e_1;
    refalrts::use( eCopiedVars_B_e_1 );
    static refalrts::Iter eCopiedVars_E_b_1;
    refalrts::use( eCopiedVars_E_b_1 );
    static refalrts::Iter eCopiedVars_E_e_1;
    refalrts::use( eCopiedVars_E_e_1 );
    // e.CopiedVars_B (~1 s.Usings s.Mode e.Index )~1 e.CopiedVars_E (~2 & CtInsertVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & CtInsertVar, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCopiedVars_B_b_1 = bb_0_stk,
        eCopiedVars_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCopiedVars_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCopiedVars_B_oe_1, be_0 )
    ) {
      bb_0 = eCopiedVars_B_oe_1;
      eCopiedVars_B_b_1 = bb_0_stk;
      eCopiedVars_B_e_1 = eCopiedVars_B_oe_1;
      refalrts::move_right( eCopiedVars_B_b_1, eCopiedVars_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sUsings_2, sUsings_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      eCopiedVars_E_b_1 = bb_0;
      refalrts::use( eCopiedVars_E_b_1 );
      eCopiedVars_E_e_1 = be_0;
      refalrts::use( eCopiedVars_E_e_1 );

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      //{{{ ALLOCS
      //}}} ALLOCS
      //{{{ REINITS
      refalrts::reinit_name( n8, & CmdArrCopy, "CmdArrCopy" );
      //}}} REINITS
      refalrts::link_brackets( n1, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n1 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    }
  } while ( 0 );
#else
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sUsings_2;
    refalrts::use( sUsings_2 );
    static refalrts::Iter sMode_2;
    refalrts::use( sMode_2 );
    static refalrts::Iter eIndex_b_2;
    refalrts::use( eIndex_b_2 );
    static refalrts::Iter eIndex_e_2;
    refalrts::use( eIndex_e_2 );
    static refalrts::Iter eCopiedVars_B_b_1;
    refalrts::use( eCopiedVars_B_b_1 );
    static refalrts::Iter eCopiedVars_B_e_1;
    refalrts::use( eCopiedVars_B_e_1 );
    static refalrts::Iter eCopiedVars_E_b_1;
    refalrts::use( eCopiedVars_E_b_1 );
    static refalrts::Iter eCopiedVars_E_e_1;
    refalrts::use( eCopiedVars_E_e_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars_B (~1 s.Usings s.Mode e.Index )~1 e.CopiedVars_E (~2 & CtInsertVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCopiedVars_B_b_1 = bb_0_stk,
        eCopiedVars_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCopiedVars_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCopiedVars_B_oe_1, be_0 )
    ) {
      bb_0 = eCopiedVars_B_oe_1;
      eCopiedVars_B_b_1 = bb_0_stk;
      eCopiedVars_B_e_1 = eCopiedVars_B_oe_1;
      refalrts::move_right( eCopiedVars_B_b_1, eCopiedVars_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sUsings_2, sUsings_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      eCopiedVars_E_b_1 = bb_0;
      refalrts::use( eCopiedVars_E_b_1 );
      eCopiedVars_E_e_1 = be_0;
      refalrts::use( eCopiedVars_E_e_1 );
#else
    // e.CopiedVars_B (~1 s.Usings s.Mode e.Index )~1 e.CopiedVars_E (~2 & CtInsertVar s.Usings s.Mode e.Index )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::function_left( & CtInsertVar, bb_2, be_2 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! refalrts::svar_left( sUsings_1, bb_2, be_2 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_2, be_2 ) ) 
      break;
    eIndex_b_1 = bb_2;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_2;
    refalrts::use( eIndex_e_1 );
    refalrts::Iter bb_0_stk = bb_0;
    refalrts::Iter be_0_stk = be_0;
    for( 
      refalrts::Iter
        eCopiedVars_B_b_1 = bb_0_stk,
        eCopiedVars_B_oe_1 = bb_0_stk,
        bb_0 = bb_0_stk,
        be_0 = be_0_stk;
      ! empty_seq( eCopiedVars_B_oe_1, be_0 );
      bb_0 = bb_0_stk,
      be_0 = be_0_stk,
      refalrts::next_term( eCopiedVars_B_oe_1, be_0 )
    ) {
      bb_0 = eCopiedVars_B_oe_1;
      eCopiedVars_B_b_1 = bb_0_stk;
      eCopiedVars_B_e_1 = eCopiedVars_B_oe_1;
      refalrts::move_right( eCopiedVars_B_b_1, eCopiedVars_B_e_1 );
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      refalrts::Iter n1;
      if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
        continue;
      refalrts::use( n1 );
      refalrts::Iter n5 = 0; // Right
      if( ! refalrts::brackets_match( n5, n1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sUsings_2, sUsings_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_stvar_left( sMode_2, sMode_1, bb_1, be_1 ) ) 
        continue;
      if( ! refalrts::repeated_evar_left( eIndex_b_2, eIndex_e_2, eIndex_b_1, eIndex_e_1, bb_1, be_1 ) ) 
        continue;
      if( ! empty_seq( bb_1, be_1 ) )
        continue;
      eCopiedVars_E_b_1 = bb_0;
      refalrts::use( eCopiedVars_E_b_1 );
      eCopiedVars_E_e_1 = be_0;
      refalrts::use( eCopiedVars_E_e_1 );
#endif
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & CmdArrCopy, (void*) "CmdArrCopy"},
        {refalrts::icSpliceSTVar, & sMode_1},
        {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
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
      refalrts::Iter n13 = 0;
      if( ! refalrts::alloc_open_bracket( n13 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n14 = 0;
      if( ! refalrts::alloc_name( n14, & CmdArrCopy, "CmdArrCopy" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n15 = 0;
      if( ! refalrts::alloc_close_bracket( n15 ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( n13, n15 );
      res = refalrts::splice_elem( res, n15 );
      res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
      res = refalrts::splice_stvar( res, sMode_1 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_elem( res, n13 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    // e.CopiedVars (~1 & CtInsertVar s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrSplice, "CmdArrSplice" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sUsings_1;
    refalrts::use( sUsings_1 );
    static refalrts::Iter sMode_1;
    refalrts::use( sMode_1 );
    static refalrts::Iter eIndex_b_1;
    refalrts::use( eIndex_b_1 );
    static refalrts::Iter eIndex_e_1;
    refalrts::use( eIndex_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtInsertVar s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsertVar, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#else
    // e.CopiedVars (~1 & CtInsertVar s.Usings s.Mode e.Index )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtInsertVar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sUsings_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sMode_1, bb_1, be_1 ) ) 
      break;
    eIndex_b_1 = bb_1;
    refalrts::use( eIndex_b_1 );
    eIndex_e_1 = be_1;
    refalrts::use( eIndex_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrSplice, (void*) "CmdArrSplice"},
      {refalrts::icSpliceSTVar, & sUsings_1},
      {refalrts::icSpliceSTVar, & sMode_1},
      {refalrts::icSpliceEVar, & eIndex_b_1, & eIndex_e_1},
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
    if( ! refalrts::alloc_name( n8, & CmdArrSplice, "CmdArrSplice" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_stvar( res, sUsings_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eCmdInfo_b_1;
    refalrts::use( eCmdInfo_b_1 );
    static refalrts::Iter eCmdInfo_e_1;
    refalrts::use( eCmdInfo_e_1 );
    // e.CopiedVars (~1 & CtBrackets e.CmdInfo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eCmdInfo_b_1 = bb_1;
    refalrts::use( eCmdInfo_b_1 );
    eCmdInfo_e_1 = be_1;
    refalrts::use( eCmdInfo_e_1 );

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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eCmdInfo_b_1;
    refalrts::use( eCmdInfo_b_1 );
    static refalrts::Iter eCmdInfo_e_1;
    refalrts::use( eCmdInfo_e_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtBrackets e.CmdInfo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtBrackets, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eCmdInfo_b_1 = bb_1;
    refalrts::use( eCmdInfo_b_1 );
    eCmdInfo_e_1 = be_1;
    refalrts::use( eCmdInfo_e_1 );
#else
    // e.CopiedVars (~1 & CtBrackets e.CmdInfo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtBrackets, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eCmdInfo_b_1 = bb_1;
    refalrts::use( eCmdInfo_b_1 );
    eCmdInfo_e_1 = be_1;
    refalrts::use( eCmdInfo_e_1 );
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sElemNo_1;
    refalrts::use( sElemNo_1 );
    // e.CopiedVars (~1 & CtInsert s.ElemNo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtInsert, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sElemNo_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sElemNo_1;
    refalrts::use( sElemNo_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtInsert s.ElemNo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtInsert, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sElemNo_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtInsert s.ElemNo )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n4 = 0; // Right
    if( ! refalrts::brackets_match( n4, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtInsert, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sElemNo_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
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

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sValue_1;
    refalrts::use( sValue_1 );
    // e.CopiedVars (~1 & CtAlloc & StChar s.Counter s.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sValue_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrChar, "CmdArrChar" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sValue_1;
    refalrts::use( sValue_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StChar s.Counter s.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StChar, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sValue_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StChar s.Counter s.Value )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StChar, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sValue_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrChar, (void*) "CmdArrChar"},
      {refalrts::icSpliceSTVar, & sValue_1},
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
    if( ! refalrts::alloc_name( n8, & CmdArrChar, "CmdArrChar" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sValue_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.CopiedVars (~1 & CtAlloc & StName s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StName, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrFunc, "CmdArrFunc" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StName s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StName, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
#else
    // e.CopiedVars (~1 & CtAlloc & StName s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StName, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrFunc, (void*) "CmdArrFunc"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
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
    if( ! refalrts::alloc_name( n8, & CmdArrFunc, "CmdArrFunc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    // e.CopiedVars (~1 & CtAlloc & StNumber s.Counter s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StNumber, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrInt, "CmdArrInt" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter sNumber_1;
    refalrts::use( sNumber_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StNumber s.Counter s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StNumber, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StNumber s.Counter s.Number )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StNumber, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNumber_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrInt, (void*) "CmdArrInt"},
      {refalrts::icSpliceSTVar, & sNumber_1},
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
    if( ! refalrts::alloc_name( n8, & CmdArrInt, "CmdArrInt" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    // e.CopiedVars (~1 & CtAlloc & StIdent s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StIdent, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrIdent, "CmdArrIdent" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eName_b_1;
    refalrts::use( eName_b_1 );
    static refalrts::Iter eName_e_1;
    refalrts::use( eName_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StIdent s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StIdent, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
#else
    // e.CopiedVars (~1 & CtAlloc & StIdent s.Counter e.Name )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StIdent, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    eName_b_1 = bb_1;
    refalrts::use( eName_b_1 );
    eName_e_1 = be_1;
    refalrts::use( eName_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdArrIdent, (void*) "CmdArrIdent"},
      {refalrts::icSpliceEVar, & eName_b_1, & eName_e_1},
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
    if( ! refalrts::alloc_name( n8, & CmdArrIdent, "CmdArrIdent" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StOpenBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrOB, "CmdArrOB" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StOpenBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StOpenBracket, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StOpenBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrOB, "CmdArrOB" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StOpenADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrOADT, "CmdArrOADT" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StOpenADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StOpenADT, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StOpenADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrOADT, "CmdArrOADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StOpenCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenCall, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrOC, "CmdArrOC" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StOpenCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StOpenCall, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StOpenCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StOpenCall, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrOC, "CmdArrOC" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StCloseBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrCB, "CmdArrCB" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StCloseBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StCloseBracket, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StCloseBracket s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseBracket, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrCB, "CmdArrCB" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StCloseADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrCADT, "CmdArrCADT" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StCloseADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StCloseADT, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StCloseADT s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseADT, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrCADT, "CmdArrCADT" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
    // e.CopiedVars (~1 & CtAlloc & StCloseCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseCall, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n2, & CmdArrCC, "CmdArrCC" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elems( res, n1, n2 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter sCounter_1;
    refalrts::use( sCounter_1 );
    static refalrts::Iter sNum_1;
    refalrts::use( sNum_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 & CtAlloc & StCloseCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::function_left( & CtAlloc, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::function_left( & StCloseCall, bb_1, be_1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#else
    // e.CopiedVars (~1 & CtAlloc & StCloseCall s.Counter s.Num )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n1 ) ) 
      break;
    refalrts::Iter n2;
    if( (n2 = refalrts::function_left( & CtAlloc, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n2 );
    refalrts::Iter n3;
    if( (n3 = refalrts::function_left( & StCloseCall, bb_1, be_1 )) == 0 ) 
      break;
    refalrts::use( n3 );
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    if( ! refalrts::svar_left( sCounter_1, bb_1, be_1 ) ) 
      break;
    if( ! refalrts::svar_left( sNum_1, bb_1, be_1 ) ) 
      break;
    if( ! empty_seq( bb_1, be_1 ) )
      break;
#endif
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
  } while ( 0 );
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & CmdArrCC, "CmdArrCC" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n7, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
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
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
    static refalrts::Iter eAnyCommand_b_1;
    refalrts::use( eAnyCommand_b_1 );
    static refalrts::Iter eAnyCommand_e_1;
    refalrts::use( eAnyCommand_e_1 );
    // e.CopiedVars (~1 e.AnyCommand )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eAnyCommand_b_1 = bb_1;
    refalrts::use( eAnyCommand_b_1 );
    eAnyCommand_e_1 = be_1;
    refalrts::use( eAnyCommand_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, ' ' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eAnyCommand_b_1, eAnyCommand_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eAnyCommand_b_1;
    refalrts::use( eAnyCommand_b_1 );
    static refalrts::Iter eAnyCommand_e_1;
    refalrts::use( eAnyCommand_e_1 );
    static refalrts::Iter eCopiedVars_b_1;
    refalrts::use( eCopiedVars_b_1 );
    static refalrts::Iter eCopiedVars_e_1;
    refalrts::use( eCopiedVars_e_1 );
#ifdef OLD_PATTERN
    // e.CopiedVars (~1 e.AnyCommand )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eAnyCommand_b_1 = bb_1;
    refalrts::use( eAnyCommand_b_1 );
    eAnyCommand_e_1 = be_1;
    refalrts::use( eAnyCommand_e_1 );
#else
    // e.CopiedVars (~1 e.AnyCommand )~1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_right( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    eCopiedVars_b_1 = bb_0;
    refalrts::use( eCopiedVars_b_1 );
    eCopiedVars_e_1 = be_0;
    refalrts::use( eCopiedVars_e_1 );
    eAnyCommand_b_1 = bb_1;
    refalrts::use( eAnyCommand_b_1 );
    eAnyCommand_e_1 = be_1;
    refalrts::use( eAnyCommand_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdComment, (void*) "CmdComment"},
      {refalrts::icSpliceEVar, & eAnyCommand_b_1, & eAnyCommand_e_1},
      {refalrts::icChar, 0, 0, ' '},
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
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & CmdComment, "CmdComment" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eAnyCommand_b_1, eAnyCommand_e_1 );
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


//End of file
