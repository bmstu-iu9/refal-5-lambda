// Automatically generated file. Don't edit!
#include "refalrts.h"


static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eArguments_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseCommandLine, "DoParseCommandLine" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icContextSet, 0, 0, __eArguments_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArguments_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // e.Arguments#1
    context[__eArguments_1_1] = context[0];
    context[__eArguments_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    res = refalrts::splice_evar( res, context[__eArguments_1_1], context[__eArguments_1_1 + 1] );
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

refalrts::FnResult NoCompile(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CompileCommand(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

refalrts::FnResult CmdLineError(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __eScannedFiles_1_1 = 10 };
    enum { __eFolders_1_1 = 12 };
    enum { __eCompileCommand_1_1 = 14 };
    enum { __eFiles_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CompileCommand, "CompileCommand" },
      { & DoParseFileNames, "DoParseFileNames" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'c', 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eCompileCommand_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCompileCommand_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-c' ) ( e.CompileCommand#1 ) e.Files#1
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'c', context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eCompileCommand_1_1] = context[8];
    context[__eCompileCommand_1_1 + 1] = context[9];
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNames, "DoParseFileNames" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & CompileCommand, "CompileCommand" ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eCompileCommand_1_1], context[__eCompileCommand_1_1 + 1] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'c', 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, '-', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-c' )
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'c', context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.ScannedFiles#1
    // Unused closed variable e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n54 );
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
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __eScannedFiles_1_1 = 10 };
    enum { __eFolders_1_1 = 12 };
    enum { __eDirectory_1_1 = 14 };
    enum { __eOptions_1_1 = 16 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseCommandLine, "DoParseCommandLine" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'d', 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eDirectory_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eOptions_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eDirectory_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOptions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-d' ) ( e.Directory#1 ) e.Options#1
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'd', context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eDirectory_1_1] = context[8];
    context[__eDirectory_1_1 + 1] = context[9];
    context[__eOptions_1_1] = context[0];
    context[__eOptions_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eOptions_1_1], context[__eOptions_1_1 + 1] );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eDirectory_1_1], context[__eDirectory_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
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
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'d', 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, '-', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'y', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-d' )
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'd', context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.ScannedFiles#1
    // Unused closed variable e.Folders#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n43 );
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
    // issue here memory for vars with 14 elems
    refalrts::Iter context[14];
    refalrts::zeros( context, 14 );
    enum { __eScannedFiles_1_1 = 8 };
    enum { __eFolders_1_1 = 10 };
    enum { __eOptions_1_1 = 12 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & NoCompile, "NoCompile" },
      { & DoParseFileNamesOnly, "DoParseFileNamesOnly" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eOptions_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOptions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '--' ) e.Options#1
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eOptions_1_1] = context[0];
    context[__eOptions_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & NoCompile, "NoCompile" ) )
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
    if( ! refalrts::alloc_close_call( n9 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eOptions_1_1], context[__eOptions_1_1 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n2, n4 );
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
    // issue here memory for vars with 16 elems
    refalrts::Iter context[16];
    refalrts::zeros( context, 16 );
    enum { __eScannedFiles_1_1 = 8 };
    enum { __eFolders_1_1 = 10 };
    enum { __eNextFileName_1_1 = 12 };
    enum { __eOptions_1_1 = 14 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseCommandLine, "DoParseCommandLine" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eNextFileName_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eOptions_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eNextFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOptions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( e.NextFileName#1 ) e.Options#1
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
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eNextFileName_1_1] = context[6];
    context[__eNextFileName_1_1 + 1] = context[7];
    context[__eOptions_1_1] = context[0];
    context[__eOptions_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseCommandLine, "DoParseCommandLine" ) )
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
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eOptions_1_1], context[__eOptions_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eNextFileName_1_1], context[__eNextFileName_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
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
    enum { __eScannedFiles_1_1 = 6 };
    enum { __eFolders_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & NoCompile, "NoCompile" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
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
    // ( e.ScannedFiles#1 ) ( e.Folders#1 )
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
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & NoCompile, "NoCompile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
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

static refalrts::FnResult DoParseFileNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __tCompiler_1_1 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'c', 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-c' ) ( e.CompileCommand#1 ) e.Options#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'c', context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    // Unused closed variable e.ScannedFiles#1
    // Unused closed variable e.Folders#1
    // Unused closed variable e.CompileCommand#1
    // Unused closed variable e.Options#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_close_bracket( n51 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n51 );
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
    enum { __tCompiler_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'-', 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'c', 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, '-', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-c' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '-', context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'c', context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    // Unused closed variable e.ScannedFiles#1
    // Unused closed variable e.Folders#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_bracket( n54 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n54 );
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
    // issue here memory for vars with 19 elems
    refalrts::Iter context[19];
    refalrts::zeros( context, 19 );
    enum { __tCompiler_1_1 = 10 };
    enum { __eScannedFiles_1_1 = 11 };
    enum { __eFolders_1_1 = 13 };
    enum { __eDirectory_1_1 = 15 };
    enum { __eOptions_1_1 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseFileNames, "DoParseFileNames" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'d', 0},
      {refalrts::icBracketLeft, 0, 0, 8, 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eDirectory_1_1, 8},
      {refalrts::icContextSet, 0, 0, __eOptions_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eDirectory_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOptions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-d' ) ( e.Directory#1 ) e.Options#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( 'd', context[6], context[7] ) )
      break;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eDirectory_1_1] = context[8];
    context[__eDirectory_1_1 + 1] = context[9];
    context[__eOptions_1_1] = context[0];
    context[__eOptions_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNames, "DoParseFileNames" ) )
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
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eOptions_1_1], context[__eOptions_1_1 + 1] );
    refalrts::link_brackets( n4, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eDirectory_1_1], context[__eDirectory_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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
    enum { __tCompiler_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'-', 0},
      {refalrts::icCharLeft, & context[2], & context[3], (int)'d', 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icBracketRight, 0, 0, 6, 0},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, '-', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, '\'', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'y', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '-d' )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '-', context[2], context[3] ) )
      break;
    if( ! refalrts::char_left( 'd', context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_right( context[6], context[7], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    // Unused closed variable e.ScannedFiles#1
    // Unused closed variable e.Folders#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, '-' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, '\'' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_close_bracket( n43 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n43 );
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
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __tCompiler_1_1 = 8 };
    enum { __eScannedFiles_1_1 = 9 };
    enum { __eFolders_1_1 = 11 };
    enum { __eFiles_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseFileNamesOnly, "DoParseFileNamesOnly" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icCharLeft, & context[6], & context[7], (int)'-', 0},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( '--' ) e.Files#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
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
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::char_left( '-', context[6], context[7] ) )
      break;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      break;
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
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
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 17 elems
    refalrts::Iter context[17];
    refalrts::zeros( context, 17 );
    enum { __tCompiler_1_1 = 8 };
    enum { __eScannedFiles_1_1 = 9 };
    enum { __eFolders_1_1 = 11 };
    enum { __eNextFileName_1_1 = 13 };
    enum { __eOptions_1_1 = 15 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseFileNames, "DoParseFileNames" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eNextFileName_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eOptions_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eNextFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOptions_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( e.NextFileName#1 ) e.Options#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
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
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    context[__eFolders_1_1] = context[4];
    context[__eFolders_1_1 + 1] = context[5];
    context[__eNextFileName_1_1] = context[6];
    context[__eNextFileName_1_1 + 1] = context[7];
    context[__eOptions_1_1] = context[0];
    context[__eOptions_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNames, "DoParseFileNames" ) )
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
    refalrts::push_stack( n8 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eOptions_1_1], context[__eOptions_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eNextFileName_1_1], context[__eNextFileName_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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
    enum { __eScannedFiles_1_1 = 6 };
    enum { __eFolders_1_1 = 8 };
    enum { __tCompiler_1_1 = 10 };
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
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eScannedFiles_1_1] = context[4];
    context[__eScannedFiles_1_1 + 1] = context[5];
    context[__eFolders_1_1] = context[2];
    context[__eFolders_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
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
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoParseFileNamesOnly(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 15 elems
    refalrts::Iter context[15];
    refalrts::zeros( context, 15 );
    enum { __tCompiler_1_1 = 8 };
    enum { __eScannedFiles_1_1 = 9 };
    enum { __eNextFileName_1_1 = 11 };
    enum { __eFiles_1_1 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoParseFileNamesOnly, "DoParseFileNamesOnly" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 6, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eNextFileName_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eNextFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 ) ( e.NextFileName#1 ) e.Files#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
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
    context[__eScannedFiles_1_1] = context[2];
    context[__eScannedFiles_1_1 + 1] = context[3];
    // Unused closed variable e.Folders#1
    context[__eNextFileName_1_1] = context[6];
    context[__eNextFileName_1_1 + 1] = context[7];
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoParseFileNamesOnly, "DoParseFileNamesOnly" ) )
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
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    refalrts::link_brackets( n2, n5 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n3, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, context[__eNextFileName_1_1], context[__eNextFileName_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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
    enum { __eScannedFiles_1_1 = 6 };
    enum { __eFolders_1_1 = 8 };
    enum { __tCompiler_1_1 = 10 };
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
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 0},
      {refalrts::icContextSet, 0, 0, __eScannedFiles_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 2},
      {refalrts::ictVarLeft, & context[0], & context[1], __tCompiler_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFolders_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eScannedFiles_1_1, 0},
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
    // t.Compiler#1 ( e.ScannedFiles#1 ) ( e.Folders#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[0], context[1] ) )
      break;
    context[__eScannedFiles_1_1] = context[4];
    context[__eScannedFiles_1_1 + 1] = context[5];
    context[__eFolders_1_1] = context[2];
    context[__eFolders_1_1 + 1] = context[3];
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
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
    res = refalrts::splice_evar( res, context[__eScannedFiles_1_1], context[__eScannedFiles_1_1 + 1] );
    refalrts::link_brackets( n0, n1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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
