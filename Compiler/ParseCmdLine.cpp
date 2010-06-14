// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eArguments_b_1;
    refalrts::use( eArguments_b_1 );
    static refalrts::Iter eArguments_e_1;
    refalrts::use( eArguments_e_1 );
    // e.Arguments
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n3, n4 );
    refalrts::link_brackets( n5, n6 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
    res = refalrts::splice_elems( res, n1, n6 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eArguments_b_1;
    refalrts::use( eArguments_b_1 );
    static refalrts::Iter eArguments_e_1;
    refalrts::use( eArguments_e_1 );
#ifdef OLD_PATTERN
    // e.Arguments
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );
#else
    // e.Arguments
    eArguments_b_1 = bb_0;
    refalrts::use( eArguments_b_1 );
    eArguments_e_1 = be_0;
    refalrts::use( eArguments_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseCommandLine, (void*) "DoParseCommandLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eArguments_b_1, & eArguments_e_1},
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
    if( ! refalrts::alloc_name( n2, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    refalrts::push_stack( n7 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eArguments_b_1, eArguments_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
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

refalrts::FnResult NoCompile(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CompileCommand(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

refalrts::FnResult CmdLineError(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eCompileCommand_b_1;
    refalrts::use( eCompileCommand_b_1 );
    static refalrts::Iter eCompileCommand_e_1;
    refalrts::use( eCompileCommand_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3 (~4 e.CompileCommand )~4 e.Files
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n7 );
    refalrts::reinit_name( n8, & DoParseFileNames, "DoParseFileNames" );
    refalrts::reinit_name( n10, & CompileCommand, "CompileCommand" );
    refalrts::reinit_close_call( n12 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n6, n9 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eCompileCommand_b_1, eCompileCommand_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n7, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eCompileCommand_b_1;
    refalrts::use( eCompileCommand_b_1 );
    static refalrts::Iter eCompileCommand_e_1;
    refalrts::use( eCompileCommand_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3 (~4 e.CompileCommand )~4 e.Files
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'c', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3 (~4 e.CompileCommand )~4 e.Files
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNames, (void*) "DoParseFileNames"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CompileCommand, (void*) "CompileCommand"},
      {refalrts::icSpliceEVar, & eCompileCommand_b_1, & eCompileCommand_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eFiles_b_1, & eFiles_e_1},
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
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_name( n17, & CompileCommand, "CompileCommand" ) )
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
    if( ! refalrts::alloc_open_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n21, n22 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n16, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eCompileCommand_b_1, eCompileCommand_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    if( ! refalrts::alloc_char( n13, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'e' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n3, & CmdLineError, "CmdLineError" );
    refalrts::reinit_char( n6, 'A' );
    refalrts::reinit_char( n5, 'f' );
    refalrts::reinit_char( n9, 't' );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elems( res, n21, n56 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_elems( res, n10, n20 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'c', bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
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
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_close_bracket( n64 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n64 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
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
    res = refalrts::splice_elem( res, n10 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eDirectory_b_1;
    refalrts::use( eDirectory_b_1 );
    static refalrts::Iter eDirectory_e_1;
    refalrts::use( eDirectory_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3 (~4 e.Directory )~4 e.Options
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n7 );
    refalrts::reinit_name( n8, & DoParseCommandLine, "DoParseCommandLine" );
    refalrts::reinit_close_call( n10 );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n9 );
    refalrts::link_brackets( n6, n5 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n7, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eDirectory_b_1;
    refalrts::use( eDirectory_b_1 );
    static refalrts::Iter eDirectory_e_1;
    refalrts::use( eDirectory_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3 (~4 e.Directory )~4 e.Options
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'd', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3 (~4 e.Directory )~4 e.Options
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n10;
    if( (n10 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n10 );
    refalrts::Iter n12 = 0; // Right
    if( ! refalrts::brackets_match( n12, n10 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseCommandLine, (void*) "DoParseCommandLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eDirectory_b_1, & eDirectory_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOptions_b_1, & eOptions_e_1},
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
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_call( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_name( n15, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    if( ! refalrts::alloc_open_bracket( n19 ) )
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
    refalrts::push_stack( n14 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n18, n21 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
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
    if( ! refalrts::alloc_char( n13, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'y' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n3, & CmdLineError, "CmdLineError" );
    refalrts::reinit_char( n6, 'A' );
    refalrts::reinit_char( n5, 'f' );
    refalrts::reinit_char( n9, 't' );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elems( res, n21, n45 );
    res = refalrts::splice_elems( res, n7, n8 );
    res = refalrts::splice_elems( res, n10, n20 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'd', bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
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
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_close_bracket( n53 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n10, n53 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
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
    res = refalrts::splice_elem( res, n10 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- '- )~3 e.Options
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & NoCompile, "NoCompile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n7 );
    refalrts::reinit_name( n8, & DoParseFileNamesOnly, "DoParseFileNamesOnly" );
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    refalrts::link_brackets( n6, n9 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n7, n8 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-- )~3 e.Options
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- '- )~3 e.Options
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
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n6 ) ) 
      break;
    refalrts::Iter n7;
    if( (n7 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNamesOnly, (void*) "DoParseFileNamesOnly"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NoCompile, (void*) "NoCompile"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOptions_b_1, & eOptions_e_1},
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_name( n14, & NoCompile, "NoCompile" ) )
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
    if( ! refalrts::alloc_open_bracket( n18 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_call( n20 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n20 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n18, n19 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n18 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n13, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & DoParseCommandLine, "DoParseCommandLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n5 );
    refalrts::link_brackets( n3, n2 );
    refalrts::link_brackets( n6, n8 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n5, n6 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_elems( res, n10, n11 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseCommandLine, (void*) "DoParseCommandLine"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eNextFileName_b_1, & eNextFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOptions_b_1, & eOptions_e_1},
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
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_open_call( n10 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_name( n11, & DoParseCommandLine, "DoParseCommandLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
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
    refalrts::push_stack( n10 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n12, n15 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n13, n14 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & NoCompile, "NoCompile" ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n0, n2 );
    refalrts::link_brackets( n3, n5 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n2, n3 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
#ifdef OLD_PATTERN
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#else
    // (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & NoCompile, (void*) "NoCompile"},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
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
    if( ! refalrts::alloc_name( n7, & NoCompile, "NoCompile" ) )
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
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n6, n8 );
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

static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eCompileCommand_b_1;
    refalrts::use( eCompileCommand_b_1 );
    static refalrts::Iter eCompileCommand_e_1;
    refalrts::use( eCompileCommand_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3 (~4 e.CompileCommand )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
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
    if( ! refalrts::alloc_char( n20, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'e' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n8, & CmdLineError, "CmdLineError" );
    refalrts::reinit_char( n4, 'M' );
    refalrts::reinit_char( n7, 'u' );
    refalrts::reinit_char( n11, 'l' );
    refalrts::reinit_char( n6, 't' );
    refalrts::reinit_char( n10, 'i' );
    refalrts::reinit_char( n13, 'p' );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elems( res, n20, n56 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elems( res, n15, n19 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eCompileCommand_b_1;
    refalrts::use( eCompileCommand_b_1 );
    static refalrts::Iter eCompileCommand_e_1;
    refalrts::use( eCompileCommand_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3 (~4 e.CompileCommand )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'c', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3 (~4 e.CompileCommand )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eCompileCommand_b_1 = bb_4;
    refalrts::use( eCompileCommand_b_1 );
    eCompileCommand_e_1 = be_4;
    refalrts::use( eCompileCommand_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
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
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_bracket( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'p' ) )
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
    if( ! refalrts::alloc_char( n26, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_char( n65, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n66 = 0;
    if( ! refalrts::alloc_close_bracket( n66 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n15, n66 );
    res = refalrts::splice_elem( res, n66 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
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
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'e' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n4, & CmdLineError, "CmdLineError" );
    refalrts::reinit_char( n7, 'A' );
    refalrts::reinit_char( n6, 'f' );
    refalrts::reinit_char( n10, 't' );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elems( res, n22, n57 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_elems( res, n11, n21 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-c )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'c', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'c )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'c', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
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
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'e'},
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_char( n54, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n55 = 0;
    if( ! refalrts::alloc_char( n55, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n56 = 0;
    if( ! refalrts::alloc_char( n56, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n57 = 0;
    if( ! refalrts::alloc_char( n57, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n58 = 0;
    if( ! refalrts::alloc_char( n58, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n59 = 0;
    if( ! refalrts::alloc_char( n59, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n60 = 0;
    if( ! refalrts::alloc_char( n60, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n61 = 0;
    if( ! refalrts::alloc_char( n61, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n62 = 0;
    if( ! refalrts::alloc_char( n62, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n63 = 0;
    if( ! refalrts::alloc_char( n63, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n64 = 0;
    if( ! refalrts::alloc_char( n64, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n65 = 0;
    if( ! refalrts::alloc_close_bracket( n65 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n11, n65 );
    res = refalrts::splice_elem( res, n65 );
    res = refalrts::splice_elem( res, n64 );
    res = refalrts::splice_elem( res, n63 );
    res = refalrts::splice_elem( res, n62 );
    res = refalrts::splice_elem( res, n61 );
    res = refalrts::splice_elem( res, n60 );
    res = refalrts::splice_elem( res, n59 );
    res = refalrts::splice_elem( res, n58 );
    res = refalrts::splice_elem( res, n57 );
    res = refalrts::splice_elem( res, n56 );
    res = refalrts::splice_elem( res, n55 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eDirectory_b_1;
    refalrts::use( eDirectory_b_1 );
    static refalrts::Iter eDirectory_e_1;
    refalrts::use( eDirectory_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3 (~4 e.Directory )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    refalrts::reinit_name( n9, & DoParseFileNames, "DoParseFileNames" );
    refalrts::reinit_close_call( n11 );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    refalrts::link_brackets( n4, n10 );
    refalrts::link_brackets( n7, n6 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eDirectory_b_1;
    refalrts::use( eDirectory_b_1 );
    static refalrts::Iter eDirectory_e_1;
    refalrts::use( eDirectory_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3 (~4 e.Directory )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'd', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    if( ! refalrts::brackets_left( bb_4, be_4, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3 (~4 e.Directory )~4 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    refalrts::Iter bb_4 = 0;
    refalrts::Iter be_4 = 0;
    refalrts::Iter n11;
    if( (n11 = refalrts::brackets_left( bb_4, be_4, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n11 );
    refalrts::Iter n13 = 0; // Right
    if( ! refalrts::brackets_match( n13, n11 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eDirectory_b_1 = bb_4;
    refalrts::use( eDirectory_b_1 );
    eDirectory_e_1 = be_4;
    refalrts::use( eDirectory_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNames, (void*) "DoParseFileNames"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eDirectory_b_1, & eDirectory_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOptions_b_1, & eOptions_e_1},
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
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_name( n16, & DoParseFileNames, "DoParseFileNames" ) )
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
    if( ! refalrts::alloc_close_bracket( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_bracket( n22 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n23 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n19, n22 );
    res = refalrts::splice_elem( res, n22 );
    refalrts::link_brackets( n20, n21 );
    res = refalrts::splice_elem( res, n21 );
    res = refalrts::splice_evar( res, eDirectory_b_1, eDirectory_e_1 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
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
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'y' ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_name( n4, & CmdLineError, "CmdLineError" );
    refalrts::reinit_char( n7, 'A' );
    refalrts::reinit_char( n6, 'f' );
    refalrts::reinit_char( n10, 't' );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elems( res, n22, n46 );
    res = refalrts::splice_elems( res, n8, n9 );
    res = refalrts::splice_elems( res, n11, n21 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-d )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_right( bb_3, be_3, bb_0, be_0 ) ) 
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( 'd', bb_3, be_3 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- 'd )~3
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_right( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n10 = 0; // Right
    if( ! refalrts::brackets_match( n10, n7 ) ) 
      break;
    refalrts::Iter n8;
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( 'd', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
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
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, '-'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, '\''},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'y'},
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_bracket( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n11, n54 );
    res = refalrts::splice_elem( res, n54 );
    res = refalrts::splice_elem( res, n53 );
    res = refalrts::splice_elem( res, n52 );
    res = refalrts::splice_elem( res, n51 );
    res = refalrts::splice_elem( res, n50 );
    res = refalrts::splice_elem( res, n49 );
    res = refalrts::splice_elem( res, n48 );
    res = refalrts::splice_elem( res, n47 );
    res = refalrts::splice_elem( res, n46 );
    res = refalrts::splice_elem( res, n45 );
    res = refalrts::splice_elem( res, n44 );
    res = refalrts::splice_elem( res, n43 );
    res = refalrts::splice_elem( res, n42 );
    res = refalrts::splice_elem( res, n41 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- '- )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n8 );
    refalrts::reinit_name( n9, & DoParseFileNamesOnly, "DoParseFileNamesOnly" );
    refalrts::reinit_close_call( n7 );
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    refalrts::link_brackets( n4, n6 );
    refalrts::push_stack( n7 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n3, n4 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elems( res, n8, n9 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '-- )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
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
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! refalrts::char_left( '-', bb_3, be_3 ) ) 
      break;
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 '- '- )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
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
    if( (n8 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n8 );
    refalrts::Iter n9;
    if( (n9 = refalrts::char_left( '-', bb_3, be_3 )) == 0 ) 
      break;
    refalrts::use( n9 );
    if( ! empty_seq( bb_3, be_3 ) )
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNamesOnly, (void*) "DoParseFileNamesOnly"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eFiles_b_1, & eFiles_e_1},
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
    if( ! refalrts::alloc_name( n13, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
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
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n16, n17 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
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
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    refalrts::link_brackets( n4, n3 );
    refalrts::link_brackets( n7, n9 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elems( res, n6, n7 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elems( res, n11, n12 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eOptions_b_1;
    refalrts::use( eOptions_b_1 );
    static refalrts::Iter eOptions_e_1;
    refalrts::use( eOptions_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Options
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eOptions_b_1 = bb_0;
    refalrts::use( eOptions_b_1 );
    eOptions_e_1 = be_0;
    refalrts::use( eOptions_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNames, (void*) "DoParseFileNames"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eNextFileName_b_1, & eNextFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOptions_b_1, & eOptions_e_1},
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_close_bracket( n15 ) )
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
    if( ! refalrts::alloc_close_call( n19 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n19 );
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_evar( res, eOptions_b_1, eOptions_e_1 );
    refalrts::link_brackets( n17, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
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
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}

static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
#ifdef OPTIMIZE_RESULT
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    //}}} ALLOCS
    //{{{ REINITS
    refalrts::reinit_open_call( n7 );
    refalrts::reinit_name( n9, & DoParseFileNamesOnly, "DoParseFileNamesOnly" );
    //}}} REINITS
    refalrts::link_brackets( n1, n6 );
    refalrts::link_brackets( n4, n3 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eNextFileName_b_1;
    refalrts::use( eNextFileName_b_1 );
    static refalrts::Iter eNextFileName_e_1;
    refalrts::use( eNextFileName_e_1 );
    static refalrts::Iter eFiles_b_1;
    refalrts::use( eFiles_b_1 );
    static refalrts::Iter eFiles_e_1;
    refalrts::use( eFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2 (~3 e.NextFileName )~3 e.Files
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    refalrts::Iter n1;
    if( (n1 = refalrts::brackets_left( bb_1, be_1, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n1 );
    refalrts::Iter n3 = 0; // Right
    if( ! refalrts::brackets_match( n3, n1 ) ) 
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    refalrts::Iter n4;
    if( (n4 = refalrts::brackets_left( bb_2, be_2, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n4 );
    refalrts::Iter n6 = 0; // Right
    if( ! refalrts::brackets_match( n6, n4 ) ) 
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    refalrts::Iter n7;
    if( (n7 = refalrts::brackets_left( bb_3, be_3, bb_0, be_0 )) == 0 ) 
      break;
    refalrts::use( n7 );
    refalrts::Iter n9 = 0; // Right
    if( ! refalrts::brackets_match( n9, n7 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    eNextFileName_b_1 = bb_3;
    refalrts::use( eNextFileName_b_1 );
    eNextFileName_e_1 = be_3;
    refalrts::use( eNextFileName_e_1 );
    eFiles_b_1 = bb_0;
    refalrts::use( eFiles_b_1 );
    eFiles_e_1 = be_0;
    refalrts::use( eFiles_e_1 );
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoParseFileNamesOnly, (void*) "DoParseFileNamesOnly"},
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eNextFileName_b_1, & eNextFileName_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eFiles_b_1, & eFiles_e_1},
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
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_open_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_name( n12, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_open_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
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
    refalrts::push_stack( n11 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eFiles_b_1, eFiles_e_1 );
    refalrts::link_brackets( n13, n16 );
    res = refalrts::splice_elem( res, n16 );
    refalrts::link_brackets( n14, n15 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eNextFileName_b_1, eNextFileName_e_1 );
    res = refalrts::splice_elem( res, n14 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_elem( res, n11 );
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
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    //{{{ ALLOCS
    //}}} ALLOCS
    //{{{ REINITS
    //}}} REINITS
    refalrts::link_brackets( n1, n3 );
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#else
    static refalrts::Iter eScannedFiles_b_1;
    refalrts::use( eScannedFiles_b_1 );
    static refalrts::Iter eScannedFiles_e_1;
    refalrts::use( eScannedFiles_e_1 );
    static refalrts::Iter eFolders_b_1;
    refalrts::use( eFolders_b_1 );
    static refalrts::Iter eFolders_e_1;
    refalrts::use( eFolders_e_1 );
    static refalrts::Iter tCompiler_1;
    refalrts::use( tCompiler_1 );
#ifdef OLD_PATTERN
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_0, be_0 ) ) 
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) ) 
      break;
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#else
    // t.Compiler (~1 e.ScannedFiles )~1 (~2 e.Folders )~2
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
    eScannedFiles_b_1 = bb_1;
    refalrts::use( eScannedFiles_b_1 );
    eScannedFiles_e_1 = be_1;
    refalrts::use( eScannedFiles_e_1 );
    eFolders_b_1 = bb_2;
    refalrts::use( eFolders_b_1 );
    eFolders_e_1 = be_2;
    refalrts::use( eFolders_e_1 );
    if( ! refalrts::tvar_left( tCompiler_1, bb_0, be_0 ) ) 
      break;
    if( ! empty_seq( bb_0, be_0 ) )
      break;
#endif
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tCompiler_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_b_1, & eFolders_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eScannedFiles_b_1, & eScannedFiles_e_1},
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
    res = refalrts::splice_evar( res, eScannedFiles_b_1, eScannedFiles_e_1 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eFolders_b_1, eFolders_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, tCompiler_1 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
  } while ( 0 );
#endif
#endif

  return refalrts::cRecognitionImpossible;
}


//End of file
