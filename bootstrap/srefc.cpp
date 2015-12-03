// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CompileFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ArgList(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Success(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Fails(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult WriteLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult System(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end);

refalrts::FnResult Go(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
      { & ArgList, "ArgList" },
      { & Main, "Main" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    //
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Main, "Main" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & ArgList, "ArgList" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
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

static refalrts::FnResult Compile_And_Link(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult ParseCommandLine(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult NoCompile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CompileCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult CmdLineError(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult LoadFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Main(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 10 elems
    refalrts::Iter context[10];
    refalrts::zeros( context, 10 );
    enum { __eProgName_1_1 = 6 };
    enum { __eConfig_1_1 = 8 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & LoadFile, "LoadFile" },
      { & Main, "Main" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketLeft, 0, 0, 4, 0},
      {refalrts::icCharLeft, 0, 0, (int)'@', 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eProgName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eConfig_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eProgName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eConfig_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ProgName#1 ) ( '@ e.Config#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      break;
    if( ! refalrts::char_left( '@', context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eProgName_1_1] = context[2];
    context[__eProgName_1_1 + 1] = context[3];
    context[__eConfig_1_1] = context[4];
    context[__eConfig_1_1 + 1] = context[5];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Main, "Main" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & LoadFile, "LoadFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eConfig_1_1], context[__eConfig_1_1 + 1] );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eProgName_1_1], context[__eProgName_1_1 + 1] );
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
    enum { __eArguments_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & ParseCommandLine, "ParseCommandLine" },
      { & FindFiles_Compilers, "FindFiles_Compilers" },
      { & Compile_And_Link, "Compile_And_Link" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eArguments_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eArguments_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.ProgName#1 ) e.Arguments#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    // Unused closed variable e.ProgName#1
    context[__eArguments_1_1] = context[0];
    context[__eArguments_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Compile_And_Link, "Compile_And_Link" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & FindFiles_Compilers, "FindFiles_Compilers" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & ParseCommandLine, "ParseCommandLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
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
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, context[__eArguments_1_1], context[__eArguments_1_1 + 1] );
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

extern refalrts::FnResult FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FindFiles_Compilers(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 9 elems
    refalrts::Iter context[9];
    refalrts::zeros( context, 9 );
    enum { __tCompilers_1_1 = 4 };
    enum { __eFolders_1_1 = 5 };
    enum { __eFiles_1_1 = 7 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FindFiles, "FindFiles" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompilers_1_1, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icContextSet, 0, 0, __eFolders_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompilers_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
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
    // t.Compilers#1 ( e.Folders#1 ) e.Files#1
    if( ! refalrts::tvar_left( context[__tCompilers_1_1], context[0], context[1] ) )
      break;
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[__eFolders_1_1] = context[2];
    context[__eFolders_1_1 + 1] = context[3];
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & FindFiles, "FindFiles" ) )
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
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFolders_1_1], context[__eFolders_1_1 + 1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, context[__tCompilers_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eMessage_1_1 = 4 };
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
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMessage_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eMessage_1_1, 0},
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
    // ( & CmdLineError e.Message#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdLineError, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMessage_1_1] = context[2];
    context[__eMessage_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eMessage_1_1], context[__eMessage_1_1 + 1] );
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

extern refalrts::FnResult Source(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult Output(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult NotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult PrintNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CompileEachFile(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Compile_And_Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eMessage_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & CmdLineError, "CmdLineError" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eMessage_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'L', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eMessage_1_1, 0},
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
    // ( & CmdLineError e.Message#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CmdLineError, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eMessage_1_1] = context[2];
    context[__eMessage_1_1 + 1] = context[3];

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
    if( ! refalrts::alloc_char( n3, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_close_call( n22 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n22 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_evar( res, context[__eMessage_1_1], context[__eMessage_1_1 + 1] );
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
    // issue here memory for vars with 13 elems
    refalrts::Iter context[13];
    refalrts::zeros( context, 13 );
    enum { __eFileName_1_1 = 6 };
    enum { __eFiles_E_1_1 = 8 };
    enum { __tCompiler_1_1 = 10 };
    enum { __eFiles_B_1_1 = 11 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & NotFound, "NotFound" },
      { & PrintNotFound, "PrintNotFound" },
      { & Map, "Map" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icSave, 0, 0, 4, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 4},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eFiles_E_1_1, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_E_1_1, 0},
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
    // t.Compiler#1 e.Files_B#1 ( & NotFound e.FileName#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_B_1_1] = 0;
    context[__eFiles_B_1_1 + 1] = 0;
    do {
      context[4] = context[0];
      context[5] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[4], context[5] ) )
        continue;
      if( ! refalrts::function_left( & NotFound, context[2], context[3] ) )
        continue;
      context[__eFileName_1_1] = context[2];
      context[__eFileName_1_1 + 1] = context[3];
      context[__eFiles_E_1_1] = context[4];
      context[__eFiles_E_1_1 + 1] = context[5];

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::Iter n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n1 = 0;
      if( ! refalrts::alloc_name( n1, & Map, "Map" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n2 = 0;
      if( ! refalrts::alloc_name( n2, & PrintNotFound, "PrintNotFound" ) )
        return refalrts::cNoMemory;
      refalrts::Iter n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return refalrts::cNoMemory;
      refalrts::Iter n4 = 0;
      if( ! refalrts::alloc_name( n4, & NotFound, "NotFound" ) )
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
      res = refalrts::splice_evar( res, context[__eFiles_E_1_1], context[__eFiles_E_1_1 + 1] );
      refalrts::link_brackets( n3, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tCompiler_1_1 = 2 };
    enum { __eFiles_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & GetFileName, "GetFileName" },
      { & Map, "Map" },
      { & ScanCollisions, "ScanCollisions" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 e.Files#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & ScanCollisions, "ScanCollisions" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & GetFileName, "GetFileName" ) )
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
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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

static refalrts::FnResult PrintNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eFileName_1_1 = 4 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & NotFound, "NotFound" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'L', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
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
    // ( & NotFound e.FileName#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & NotFound, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[2];
    context[__eFileName_1_1 + 1] = context[3];

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
    if( ! refalrts::alloc_char( n3, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_close_call( n37 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n37 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
      { & Output, "Output" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // ( & Output e.FileName#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Output, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
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
      { & Source, "Source" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icBracketLeft, 0, 0, 4, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // ( & Source ( e.Source#1 ) e.Output#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Source, context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    // Unused closed variable e.Source#1
    // Unused closed variable e.Output#1

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

static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eFileName_1_1 = 4 };
    enum { __eFileName_1_2 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Output, "Output" },
      { & GetFileName_Aux, "GetFileName_Aux" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // ( & Output e.FileName#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Output, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[2];
    context[__eFileName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Output, "Output" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eFileName_1_2], context[__eFileName_1_2 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
    enum { __eSource_1_1 = 6 };
    enum { __eOutput_1_1 = 8 };
    enum { __eOutput_1_2 = 10 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Source, "Source" },
      { & GetFileName_Aux, "GetFileName_Aux" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icBracketLeft, 0, 0, 4, 2},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eSource_1_1, 4},
      {refalrts::icContextSet, 0, 0, __eOutput_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSource_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // ( & Source ( e.Source#1 ) e.Output#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & Source, context[2], context[3] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSource_1_1] = context[4];
    context[__eSource_1_1 + 1] = context[5];
    context[__eOutput_1_1] = context[2];
    context[__eOutput_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eOutput_1_2], context[__eOutput_1_2 + 1], context[__eOutput_1_1], context[__eOutput_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_name( n2, & GetFileName_Aux, "GetFileName_Aux" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_number( n4, 0UL ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_name( n6, & Source, "Source" ) )
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
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n10 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::link_brackets( n5, n9 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, context[__eOutput_1_2], context[__eOutput_1_2 + 1] );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eSource_1_1], context[__eSource_1_1 + 1] );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, context[__eOutput_1_1], context[__eOutput_1_1 + 1] );
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

static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eFileName_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoGetFileName, "DoGetFileName" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'p', 0},
      {refalrts::icCharRight, 0, 0, (int)'p', 0},
      {refalrts::icCharRight, 0, 0, (int)'c', 0},
      {refalrts::icCharRight, 0, 0, (int)'.', 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
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
    // e.FileName#1 '.cpp'
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( 'c', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( '.', context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[0];
    context[__eFileName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'/', 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // e.FileName#1 '/'
    if( ! refalrts::char_right( '/', context[0], context[1] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
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
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'\\', 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // e.FileName#1 '\\'
    if( ! refalrts::char_right( '\\', context[0], context[1] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLast_1_1 = 2 };
    enum { __eFileName_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Lower, "Lower" },
      { & DoGetFileName, "DoGetFileName" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarRight, 0, 0, __sLast_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLast_1_1, 0},
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
    // e.FileName#1 s.Last#1
    if( ! refalrts::svar_right( context[__sLast_1_1], context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[0];
    context[__eFileName_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & Lower, "Lower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, context[__sLast_1_1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
    using refalrts::functions;
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult DoLower(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 3 elems
    refalrts::Iter context[3];
    refalrts::zeros( context, 3 );
    enum { __sChar_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoLower, "DoLower" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'B', 0},
      {refalrts::icChar, 0, 0, 'b', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'F', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'G', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, 'H', 0},
      {refalrts::icChar, 0, 0, 'h', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'J', 0},
      {refalrts::icChar, 0, 0, 'j', 0},
      {refalrts::icChar, 0, 0, 'K', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'L', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'P', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'Q', 0},
      {refalrts::icChar, 0, 0, 'q', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'r', 0},
      {refalrts::icChar, 0, 0, 'S', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'T', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'U', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'V', 0},
      {refalrts::icChar, 0, 0, 'v', 0},
      {refalrts::icChar, 0, 0, 'W', 0},
      {refalrts::icChar, 0, 0, 'w', 0},
      {refalrts::icChar, 0, 0, 'X', 0},
      {refalrts::icChar, 0, 0, 'x', 0},
      {refalrts::icChar, 0, 0, 'Y', 0},
      {refalrts::icChar, 0, 0, 'y', 0},
      {refalrts::icChar, 0, 0, 'Z', 0},
      {refalrts::icChar, 0, 0, 'z', 0},
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
    // s.Char#1
    if( ! refalrts::svar_left( context[__sChar_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, 'A' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'B' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'b' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'D' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'E' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'F' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'f' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'G' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'H' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'h' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'I' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'J' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'j' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'K' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'M' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'N' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 'O' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'P' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, 'Q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, 'q' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_char( n36, 'R' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n37 = 0;
    if( ! refalrts::alloc_char( n37, 'r' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n38 = 0;
    if( ! refalrts::alloc_char( n38, 'S' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n39 = 0;
    if( ! refalrts::alloc_char( n39, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n40 = 0;
    if( ! refalrts::alloc_char( n40, 'T' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n41 = 0;
    if( ! refalrts::alloc_char( n41, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n42 = 0;
    if( ! refalrts::alloc_char( n42, 'U' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n43 = 0;
    if( ! refalrts::alloc_char( n43, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n44 = 0;
    if( ! refalrts::alloc_char( n44, 'V' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n45 = 0;
    if( ! refalrts::alloc_char( n45, 'v' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n46 = 0;
    if( ! refalrts::alloc_char( n46, 'W' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n47 = 0;
    if( ! refalrts::alloc_char( n47, 'w' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n48 = 0;
    if( ! refalrts::alloc_char( n48, 'X' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n49 = 0;
    if( ! refalrts::alloc_char( n49, 'x' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n50 = 0;
    if( ! refalrts::alloc_char( n50, 'Y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n51 = 0;
    if( ! refalrts::alloc_char( n51, 'y' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n52 = 0;
    if( ! refalrts::alloc_char( n52, 'Z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n53 = 0;
    if( ! refalrts::alloc_char( n53, 'z' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n54 = 0;
    if( ! refalrts::alloc_close_call( n54 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n54 );
    refalrts::push_stack( n0 );
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
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
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

static refalrts::FnResult DoLower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sLower_1_1 = 2 };
    enum { __sUpper_1_1 = 3 };
    enum { __sUpper_1_2 = 4 };
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
      {refalrts::icsVarLeft, 0, 0, __sUpper_1_1, 0},
      {refalrts::icsRepeatLeft, (void*)__sUpper_1_2, (void*)__sUpper_1_1, 0, 0},
      {refalrts::icsVarLeft, 0, 0, __sLower_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sLower_1_1, 0},
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
    // s.Upper#1 s.Upper#1 s.Lower#1 e.Tail#1
    if( ! refalrts::svar_left( context[__sUpper_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::repeated_stvar_left( context[__sUpper_1_2], context[__sUpper_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLower_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.Tail#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sLower_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 7 elems
    refalrts::Iter context[7];
    refalrts::zeros( context, 7 );
    enum { __sChar_1_1 = 2 };
    enum { __eTail_1_1 = 3 };
    enum { __sUpper_1_1 = 5 };
    enum { __sLower_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & DoLower, "DoLower" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icsVarLeft, 0, 0, __sChar_1_1, 0},
      {refalrts::icsVarLeft, 0, 0, __sUpper_1_1, 0},
      {refalrts::icsVarLeft, 0, 0, __sLower_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eTail_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eTail_1_1, 0},
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
    // s.Char#1 s.Upper#1 s.Lower#1 e.Tail#1
    if( ! refalrts::svar_left( context[__sChar_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sUpper_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sLower_1_1], context[0], context[1] ) )
      break;
    context[__eTail_1_1] = context[0];
    context[__eTail_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eTail_1_1], context[__eTail_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
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
    enum { __sChar_1_1 = 2 };
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
      {refalrts::icsVarLeft, 0, 0, __sChar_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sChar_1_1, 0},
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
    // s.Char#1
    if( ! refalrts::svar_left( context[__sChar_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__sChar_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult Renumerate(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult DelAccumulator(refalrts::Iter arg_begin, refalrts::Iter arg_end);

extern refalrts::FnResult MapReduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult ScanCollisions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 27 elems
    refalrts::Iter context[27];
    refalrts::zeros( context, 27 );
    enum { __eFileName_1_1 = 14 };
    enum { __eOutput1_1_1 = 16 };
    enum { __eOutput2_1_1 = 18 };
    enum { __tCompiler_1_1 = 20 };
    enum { __eFiles_B_1_1 = 21 };
    enum { __eFileName_1_2 = 23 };
    enum { __eFiles_M_1_1 = 25 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & Output, "Output" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icSave, 0, 0, 10, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 10},
      {refalrts::icBracketRight, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 4},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumRight, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eOutput1_1_1, 4},
      {refalrts::icEPrepare, 0, 0, __eFiles_M_1_1, 10},
      {refalrts::icEStart, 0, 0, __eFiles_M_1_1, 10},
      {refalrts::icSave, 0, 0, 12, 10},
      {refalrts::icBracketLeft, 0, 0, 6, 12},
      {refalrts::icBracketRight, 0, 0, 8, 6},
      {refalrts::icFuncLeft, 0, 0, 1, 8},
      {refalrts::icEPush, 0, 0, 0, 6},
      {refalrts::icNumRight, 0, 0, 0, 6},
      {refalrts::iceRepeatLeft, (void*)__eFileName_1_2, (void*)__eFileName_1_1, 0, 6},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eOutput2_1_1, 8},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'M', 0},
      {refalrts::icChar, 0, 0, 'A', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'D', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'L', 0},
      {refalrts::icChar, 0, 0, 'I', 0},
      {refalrts::icChar, 0, 0, 'N', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'E', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, 'O', 0},
      {refalrts::icChar, 0, 0, 'R', 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput1_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput2_1_1, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'h', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'f', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
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
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 ( & Output e.Output1#1 ) ) e.Files_M#1 ( e.FileName#1 0 ( & Output e.Output2#1 ) ) e.Files_E#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_B_1_1] = 0;
    context[__eFiles_B_1_1 + 1] = 0;
    do {
      context[10] = context[0];
      context[11] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[10], context[11] ) )
        continue;
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
        continue;
      if( ! refalrts::function_left( & Output, context[4], context[5] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[2], context[3] ) )
        continue;
      context[__eFileName_1_1] = context[2];
      context[__eFileName_1_1 + 1] = context[3];
      context[__eOutput1_1_1] = context[4];
      context[__eOutput1_1_1 + 1] = context[5];
      context[__eFiles_M_1_1] = 0;
      context[__eFiles_M_1_1 + 1] = 0;
      do {
        context[12] = context[10];
        context[13] = context[11];
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_left( context[6], context[7], context[12], context[13] ) )
          continue;
        context[8] = 0;
        context[9] = 0;
        if( ! refalrts::brackets_right( context[8], context[9], context[6], context[7] ) )
          continue;
        if( ! refalrts::function_left( & Output, context[8], context[9] ) )
          continue;
        if( ! refalrts::number_right( 0UL, context[6], context[7] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1], context[6], context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[6], context[7] ) )
          continue;
        context[__eOutput2_1_1] = context[8];
        context[__eOutput2_1_1 + 1] = context[9];
        // Unused closed variable e.Files_E#1

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
        if( ! refalrts::alloc_char( n3, 'O' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_char( n4, 'M' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_char( n5, 'M' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_char( n6, 'A' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_char( n7, 'N' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_char( n8, 'D' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_char( n9, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_char( n10, 'L' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_char( n11, 'I' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_char( n12, 'N' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_char( n13, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_char( n14, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_char( n15, 'E' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_char( n16, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_char( n17, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_char( n18, 'O' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_char( n19, 'R' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n20 = 0;
        if( ! refalrts::alloc_char( n20, ':' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n21 = 0;
        if( ! refalrts::alloc_char( n21, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n22 = 0;
        if( ! refalrts::alloc_char( n22, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n23 = 0;
        if( ! refalrts::alloc_char( n23, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n24 = 0;
        if( ! refalrts::alloc_char( n24, 't' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n25 = 0;
        if( ! refalrts::alloc_char( n25, 'p' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n26 = 0;
        if( ! refalrts::alloc_char( n26, 'u' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n27 = 0;
        if( ! refalrts::alloc_char( n27, 't' ) )
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
        if( ! refalrts::alloc_char( n31, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n32 = 0;
        if( ! refalrts::alloc_char( n32, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n33 = 0;
        if( ! refalrts::alloc_char( n33, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n34 = 0;
        if( ! refalrts::alloc_char( n34, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n35 = 0;
        if( ! refalrts::alloc_char( n35, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n36 = 0;
        if( ! refalrts::alloc_char( n36, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n37 = 0;
        if( ! refalrts::alloc_char( n37, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n38 = 0;
        if( ! refalrts::alloc_char( n38, 'd' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n39 = 0;
        if( ! refalrts::alloc_char( n39, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n40 = 0;
        if( ! refalrts::alloc_char( n40, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n41 = 0;
        if( ! refalrts::alloc_char( n41, 'h' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n42 = 0;
        if( ! refalrts::alloc_char( n42, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n43 = 0;
        if( ! refalrts::alloc_char( n43, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n44 = 0;
        if( ! refalrts::alloc_char( n44, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n45 = 0;
        if( ! refalrts::alloc_char( n45, 's' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n46 = 0;
        if( ! refalrts::alloc_char( n46, 'o' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n47 = 0;
        if( ! refalrts::alloc_char( n47, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n48 = 0;
        if( ! refalrts::alloc_char( n48, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n49 = 0;
        if( ! refalrts::alloc_char( n49, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n50 = 0;
        if( ! refalrts::alloc_char( n50, 'f' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n51 = 0;
        if( ! refalrts::alloc_char( n51, 'i' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n52 = 0;
        if( ! refalrts::alloc_char( n52, 'l' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n53 = 0;
        if( ! refalrts::alloc_char( n53, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n54 = 0;
        if( ! refalrts::alloc_char( n54, 'n' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n55 = 0;
        if( ! refalrts::alloc_char( n55, 'a' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n56 = 0;
        if( ! refalrts::alloc_char( n56, 'm' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n57 = 0;
        if( ! refalrts::alloc_char( n57, 'e' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n58 = 0;
        if( ! refalrts::alloc_char( n58, ' ' ) )
          return refalrts::cNoMemory;
        refalrts::Iter n59 = 0;
        if( ! refalrts::alloc_close_call( n59 ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( n59 );
        refalrts::push_stack( n0 );
        res = refalrts::splice_elem( res, n59 );
        res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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
        res = refalrts::splice_evar( res, context[__eOutput2_1_1], context[__eOutput2_1_1 + 1] );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_evar( res, context[__eOutput1_1_1], context[__eOutput1_1_1 + 1] );
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
      } while ( refalrts::open_evar_advance( context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1], context[10], context[11] ) );
    } while ( refalrts::open_evar_advance( context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tCompiler_1_1 = 12 };
    enum { __eFiles_B_1_1 = 13 };
    enum { __tLocation_1_1 = 15 };
    enum { __eFileName_1_1 = 16 };
    enum { __eFileName_1_2 = 18 };
    enum { __eFiles_M_1_1 = 20 };
    enum { __eOutput_1_1 = 22 };
    enum { __eFiles_E_1_1 = 24 };
    enum { __eFileName_1_3 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Renumerate, "Renumerate" },
      { & MapReduce, "MapReduce" },
      { & DelAccumulator, "DelAccumulator" },
      { & Output, "Output" },
      { & ScanCollisions, "ScanCollisions" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icSave, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 8},
      {refalrts::ictVarRight, 0, 0, __tLocation_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumRight, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icEPrepare, 0, 0, __eFiles_M_1_1, 8},
      {refalrts::icEStart, 0, 0, __eFiles_M_1_1, 8},
      {refalrts::icSave, 0, 0, 10, 8},
      {refalrts::icBracketLeft, 0, 0, 4, 10},
      {refalrts::icBracketRight, 0, 0, 6, 4},
      {refalrts::icFuncLeft, 0, 0, 3, 6},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icNumRight, 0, 0, 0, 4},
      {refalrts::iceRepeatLeft, (void*)__eFileName_1_2, (void*)__eFileName_1_1, 0, 4},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eOutput_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eFiles_E_1_1, 10},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __tLocation_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_M_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_2, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
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
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 t.Location#1 ) e.Files_M#1 ( e.FileName#1 0 ( & Output e.Output#1 ) ) e.Files_E#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_B_1_1] = 0;
    context[__eFiles_B_1_1 + 1] = 0;
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[8], context[9] ) )
        continue;
      if( ! refalrts::tvar_right( context[__tLocation_1_1], context[2], context[3] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[2], context[3] ) )
        continue;
      context[__eFileName_1_1] = context[2];
      context[__eFileName_1_1 + 1] = context[3];
      context[__eFiles_M_1_1] = 0;
      context[__eFiles_M_1_1 + 1] = 0;
      do {
        context[10] = context[8];
        context[11] = context[9];
        context[4] = 0;
        context[5] = 0;
        if( ! refalrts::brackets_left( context[4], context[5], context[10], context[11] ) )
          continue;
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_right( context[6], context[7], context[4], context[5] ) )
          continue;
        if( ! refalrts::function_left( & Output, context[6], context[7] ) )
          continue;
        if( ! refalrts::number_right( 0UL, context[4], context[5] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1], context[4], context[5] ) )
          continue;
        if( ! refalrts::empty_seq( context[4], context[5] ) )
          continue;
        context[__eOutput_1_1] = context[6];
        context[__eOutput_1_1 + 1] = context[7];
        context[__eFiles_E_1_1] = context[10];
        context[__eFiles_E_1_1 + 1] = context[11];

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_evar( context[__eFileName_1_3], context[__eFileName_1_3 + 1], context[__eFileName_1_2], context[__eFileName_1_2 + 1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_number( n3, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_number( n6, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_open_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_name( n8, & Output, "Output" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_close_bracket( n9 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_call( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & DelAccumulator, "DelAccumulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_open_call( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_name( n14, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_bracket( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_number( n18, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_call( n19 ) )
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
        refalrts::push_stack( n11 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::push_stack( n19 );
        refalrts::push_stack( n13 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, context[__eFiles_E_1_1], context[__eFiles_E_1_1 + 1] );
        res = refalrts::splice_elem( res, n18 );
        refalrts::link_brackets( n15, n17 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, context[__eFileName_1_3], context[__eFileName_1_3 + 1] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n5, n10 );
        res = refalrts::splice_elem( res, n10 );
        refalrts::link_brackets( n7, n9 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eOutput_1_1], context[__eOutput_1_1 + 1] );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, context[__eFileName_1_2], context[__eFileName_1_2 + 1] );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1] );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, context[__tLocation_1_1] );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 28 elems
    refalrts::Iter context[28];
    refalrts::zeros( context, 28 );
    enum { __tCompiler_1_1 = 12 };
    enum { __eFiles_B_1_1 = 13 };
    enum { __eFileName_1_1 = 15 };
    enum { __eFileName_1_2 = 17 };
    enum { __eOutput_1_1 = 19 };
    enum { __eFiles_M_1_1 = 21 };
    enum { __eFiles_E_1_1 = 23 };
    enum { __tLocation_1_1 = 25 };
    enum { __eFileName_1_3 = 26 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Renumerate, "Renumerate" },
      { & MapReduce, "MapReduce" },
      { & DelAccumulator, "DelAccumulator" },
      { & Output, "Output" },
      { & ScanCollisions, "ScanCollisions" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icSave, 0, 0, 8, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 8},
      {refalrts::icBracketRight, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 3, 4},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumRight, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eOutput_1_1, 4},
      {refalrts::icEPrepare, 0, 0, __eFiles_M_1_1, 8},
      {refalrts::icEStart, 0, 0, __eFiles_M_1_1, 8},
      {refalrts::icSave, 0, 0, 10, 8},
      {refalrts::icBracketLeft, 0, 0, 6, 10},
      {refalrts::iceRepeatLeft, (void*)__eFileName_1_2, (void*)__eFileName_1_1, 0, 6},
      {refalrts::icEPush, 0, 0, 0, 6},
      {refalrts::icNumLeft, 0, 0, 0, 6},
      {refalrts::icContextSet, 0, 0, __eFiles_E_1_1, 10},
      {refalrts::ictVarLeft, 0, 0, __tLocation_1_1, 6},
      {refalrts::icEmpty, 0, 0, 0, 6},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 4, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_M_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_2, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __tLocation_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
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
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 ( & Output e.Output#1 ) ) e.Files_M#1 ( e.FileName#1 0 t.Location#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_B_1_1] = 0;
    context[__eFiles_B_1_1 + 1] = 0;
    do {
      context[8] = context[0];
      context[9] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[8], context[9] ) )
        continue;
      context[4] = 0;
      context[5] = 0;
      if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
        continue;
      if( ! refalrts::function_left( & Output, context[4], context[5] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[2], context[3] ) )
        continue;
      context[__eFileName_1_1] = context[2];
      context[__eFileName_1_1 + 1] = context[3];
      context[__eOutput_1_1] = context[4];
      context[__eOutput_1_1 + 1] = context[5];
      context[__eFiles_M_1_1] = 0;
      context[__eFiles_M_1_1 + 1] = 0;
      do {
        context[10] = context[8];
        context[11] = context[9];
        context[6] = 0;
        context[7] = 0;
        if( ! refalrts::brackets_left( context[6], context[7], context[10], context[11] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1], context[6], context[7] ) )
          continue;
        if( ! refalrts::number_left( 0UL, context[6], context[7] ) )
          continue;
        context[__eFiles_E_1_1] = context[10];
        context[__eFiles_E_1_1 + 1] = context[11];
        if( ! refalrts::tvar_left( context[__tLocation_1_1], context[6], context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[6], context[7] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_evar( context[__eFileName_1_3], context[__eFileName_1_3 + 1], context[__eFileName_1_2], context[__eFileName_1_2 + 1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_number( n3, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_open_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_name( n5, & Output, "Output" ) )
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
        if( ! refalrts::alloc_number( n9, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_close_bracket( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_open_call( n11 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_name( n12, & DelAccumulator, "DelAccumulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_open_call( n13 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_name( n14, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_open_bracket( n15 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_name( n16, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n17 = 0;
        if( ! refalrts::alloc_close_bracket( n17 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n18 = 0;
        if( ! refalrts::alloc_number( n18, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n19 = 0;
        if( ! refalrts::alloc_close_call( n19 ) )
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
        refalrts::push_stack( n11 );
        res = refalrts::splice_elem( res, n20 );
        refalrts::push_stack( n19 );
        refalrts::push_stack( n13 );
        res = refalrts::splice_elem( res, n19 );
        res = refalrts::splice_evar( res, context[__eFiles_E_1_1], context[__eFiles_E_1_1 + 1] );
        res = refalrts::splice_elem( res, n18 );
        refalrts::link_brackets( n15, n17 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, context[__eFileName_1_3], context[__eFileName_1_3 + 1] );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, context[__tLocation_1_1] );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, context[__eFileName_1_2], context[__eFileName_1_2 + 1] );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1] );
        refalrts::link_brackets( n2, n7 );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n4, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, context[__eOutput_1_1], context[__eOutput_1_1 + 1] );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 25 elems
    refalrts::Iter context[25];
    refalrts::zeros( context, 25 );
    enum { __tCompiler_1_1 = 10 };
    enum { __eFiles_B_1_1 = 11 };
    enum { __tLocation1_1_1 = 13 };
    enum { __eFileName_1_1 = 14 };
    enum { __eFileName_1_2 = 16 };
    enum { __eFiles_M_1_1 = 18 };
    enum { __eFiles_E_1_1 = 20 };
    enum { __tLocation2_1_1 = 22 };
    enum { __eFileName_1_3 = 23 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Renumerate, "Renumerate" },
      { & MapReduce, "MapReduce" },
      { & DelAccumulator, "DelAccumulator" },
      { & ScanCollisions, "ScanCollisions" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icEPrepare, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icSave, 0, 0, 6, 0},
      {refalrts::icBracketLeft, 0, 0, 2, 6},
      {refalrts::ictVarRight, 0, 0, __tLocation1_1_1, 2},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumRight, 0, 0, 0, 2},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icEPrepare, 0, 0, __eFiles_M_1_1, 6},
      {refalrts::icEStart, 0, 0, __eFiles_M_1_1, 6},
      {refalrts::icSave, 0, 0, 8, 6},
      {refalrts::icBracketLeft, 0, 0, 4, 8},
      {refalrts::iceRepeatLeft, (void*)__eFileName_1_2, (void*)__eFileName_1_1, 0, 4},
      {refalrts::icEPush, 0, 0, 0, 4},
      {refalrts::icNumLeft, 0, 0, 0, 4},
      {refalrts::icContextSet, 0, 0, __eFiles_E_1_1, 8},
      {refalrts::ictVarLeft, 0, 0, __tLocation2_1_1, 4},
      {refalrts::icEmpty, 0, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_B_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icInt, 0, 0, 0 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __tLocation1_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_M_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_2, 0},
      {refalrts::icInt, 0, 0, 1 , 0},
      {refalrts::icSpliceSTVar, 0, 0, __tLocation2_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icCopyEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icInt, 0, 0, 2 , 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_E_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icEnd}
    };
    int open_e_stack[2];
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
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 t.Location1#1 ) e.Files_M#1 ( e.FileName#1 0 t.Location2#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_B_1_1] = 0;
    context[__eFiles_B_1_1 + 1] = 0;
    do {
      context[6] = context[0];
      context[7] = context[1];
      context[2] = 0;
      context[3] = 0;
      if( ! refalrts::brackets_left( context[2], context[3], context[6], context[7] ) )
        continue;
      if( ! refalrts::tvar_right( context[__tLocation1_1_1], context[2], context[3] ) )
        continue;
      if( ! refalrts::number_right( 0UL, context[2], context[3] ) )
        continue;
      context[__eFileName_1_1] = context[2];
      context[__eFileName_1_1 + 1] = context[3];
      context[__eFiles_M_1_1] = 0;
      context[__eFiles_M_1_1 + 1] = 0;
      do {
        context[8] = context[6];
        context[9] = context[7];
        context[4] = 0;
        context[5] = 0;
        if( ! refalrts::brackets_left( context[4], context[5], context[8], context[9] ) )
          continue;
        if( ! refalrts::repeated_evar_left( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1], context[4], context[5] ) )
          continue;
        if( ! refalrts::number_left( 0UL, context[4], context[5] ) )
          continue;
        context[__eFiles_E_1_1] = context[8];
        context[__eFiles_E_1_1 + 1] = context[9];
        if( ! refalrts::tvar_left( context[__tLocation2_1_1], context[4], context[5] ) )
          continue;
        if( ! refalrts::empty_seq( context[4], context[5] ) )
          continue;

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::copy_evar( context[__eFileName_1_3], context[__eFileName_1_3 + 1], context[__eFileName_1_2], context[__eFileName_1_2 + 1] ) )
          return refalrts::cNoMemory;
        refalrts::Iter n0 = 0;
        if( ! refalrts::alloc_open_call( n0 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n1 = 0;
        if( ! refalrts::alloc_name( n1, & ScanCollisions, "ScanCollisions" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n2 = 0;
        if( ! refalrts::alloc_open_bracket( n2 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n3 = 0;
        if( ! refalrts::alloc_number( n3, 0UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n4 = 0;
        if( ! refalrts::alloc_close_bracket( n4 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n5 = 0;
        if( ! refalrts::alloc_open_bracket( n5 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n6 = 0;
        if( ! refalrts::alloc_number( n6, 1UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n7 = 0;
        if( ! refalrts::alloc_close_bracket( n7 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n8 = 0;
        if( ! refalrts::alloc_open_call( n8 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n9 = 0;
        if( ! refalrts::alloc_name( n9, & DelAccumulator, "DelAccumulator" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n10 = 0;
        if( ! refalrts::alloc_open_call( n10 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n11 = 0;
        if( ! refalrts::alloc_name( n11, & MapReduce, "MapReduce" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n12 = 0;
        if( ! refalrts::alloc_open_bracket( n12 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n13 = 0;
        if( ! refalrts::alloc_name( n13, & Renumerate, "Renumerate" ) )
          return refalrts::cNoMemory;
        refalrts::Iter n14 = 0;
        if( ! refalrts::alloc_close_bracket( n14 ) )
          return refalrts::cNoMemory;
        refalrts::Iter n15 = 0;
        if( ! refalrts::alloc_number( n15, 2UL ) )
          return refalrts::cNoMemory;
        refalrts::Iter n16 = 0;
        if( ! refalrts::alloc_close_call( n16 ) )
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
        refalrts::push_stack( n17 );
        refalrts::push_stack( n8 );
        res = refalrts::splice_elem( res, n17 );
        refalrts::push_stack( n16 );
        refalrts::push_stack( n10 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_evar( res, context[__eFiles_E_1_1], context[__eFiles_E_1_1 + 1] );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n12, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, context[__eFileName_1_3], context[__eFileName_1_3 + 1] );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, context[__tLocation2_1_1] );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, context[__eFileName_1_2], context[__eFileName_1_2 + 1] );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1] );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, context[__tLocation1_1_1] );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1] );
        res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[__eFiles_M_1_1], context[__eFiles_M_1_1 + 1], context[6], context[7] ) );
    } while ( refalrts::open_evar_advance( context[__eFiles_B_1_1], context[__eFiles_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __tCompiler_1_1 = 2 };
    enum { __eFiles_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & CompileEachFile, "CompileEachFile" },
      { & Map, "Map" },
      { & Link, "Link" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::ictVarLeft, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFiles_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tCompiler_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFiles_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // t.Compiler#1 e.Files#1
    if( ! refalrts::tvar_left( context[__tCompiler_1_1], context[0], context[1] ) )
      break;
    context[__eFiles_1_1] = context[0];
    context[__eFiles_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Link, "Link" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & CompileEachFile, "CompileEachFile" ) )
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
    res = refalrts::splice_evar( res, context[__eFiles_1_1], context[__eFiles_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__tCompiler_1_1] );
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

extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Renumerate(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 18 elems
    refalrts::Iter context[18];
    refalrts::zeros( context, 18 );
    enum { __eFileName_1_1 = 8 };
    enum { __eSource_1_1 = 10 };
    enum { __eOutput_1_1 = 12 };
    enum { __sNextNumber_1_1 = 14 };
    enum { __eFileName_1_2 = 15 };
    enum { __sNextNumber_1_2 = 17 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Source, "Source" },
      { & Inc, "Inc" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketRight, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 0, 4},
      {refalrts::icEPush, 0, 0, 0, 2},
      {refalrts::icNumRight, 0, 0, 0, 2},
      {refalrts::icBracketLeft, 0, 0, 6, 4},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::iceRepeatLeft, (void*)__eFileName_1_2, (void*)__eFileName_1_1, 0, 0},
      {refalrts::icContextSet, 0, 0, __eSource_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eOutput_1_1, 4},
      {refalrts::icsVarLeft, 0, 0, __sNextNumber_1_1, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icCopySTVar, 0, 0, __sNextNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eSource_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
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
    // e.FileName#1 s.NextNumber#1 ( e.FileName#1 0 ( & Source ( e.Source#1 ) e.Output#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & Source, context[4], context[5] ) )
      break;
    if( ! refalrts::number_right( 0UL, context[2], context[3] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      break;
    context[__eFileName_1_1] = context[2];
    context[__eFileName_1_1 + 1] = context[3];
    if( ! refalrts::repeated_evar_left( context[__eFileName_1_2], context[__eFileName_1_2 + 1], context[__eFileName_1_1], context[__eFileName_1_1 + 1], context[0], context[1] ) )
      break;
    context[__eSource_1_1] = context[6];
    context[__eSource_1_1 + 1] = context[7];
    context[__eOutput_1_1] = context[4];
    context[__eOutput_1_1 + 1] = context[5];
    if( ! refalrts::svar_left( context[__sNextNumber_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_stvar( context[__sNextNumber_1_2], context[__sNextNumber_1_1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_open_bracket( n3 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_name( n5, & Source, "Source" ) )
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
    if( ! refalrts::alloc_close_bracket( n9 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n3, n9 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n4, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, context[__eOutput_1_1], context[__eOutput_1_1 + 1] );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, context[__eSource_1_1], context[__eSource_1_1 + 1] );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, context[__sNextNumber_1_2] );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, context[__sNextNumber_1_1] );
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
    enum { __tNextFile_1_1 = 2 };
    enum { __sNextNumber_1_1 = 3 };
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
      {refalrts::ictVarRight, 0, 0, __tNextFile_1_1, 0},
      {refalrts::icsVarRight, 0, 0, __sNextNumber_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNextNumber_1_1, 0},
      {refalrts::icSpliceSTVar, 0, 0, __tNextFile_1_1, 0},
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
    // e.FileName#1 s.NextNumber#1 t.NextFile#1
    if( ! refalrts::tvar_right( context[__tNextFile_1_1], context[0], context[1] ) )
      break;
    if( ! refalrts::svar_right( context[__sNextNumber_1_1], context[0], context[1] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, context[__tNextFile_1_1] );
    res = refalrts::splice_stvar( res, context[__sNextNumber_1_1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SwCompiled(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FileNum(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult CompileEachFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 11 elems
    refalrts::Iter context[11];
    refalrts::zeros( context, 11 );
    enum { __eOutputName_1_1 = 6 };
    enum { __sNum_1_1 = 8 };
    enum { __eOutputName_1_2 = 9 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & Output, "Output" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 1, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eOutputName_1_1, 4},
      {refalrts::icsVarRight, 0, 0, __sNum_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '+', 0},
      {refalrts::icChar, 0, 0, 'L', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'k', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eOutputName_1_1, 0},
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
    // ( e.FileName#1 s.Num#1 ( & Output e.OutputName#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & Output, context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[4];
    context[__eOutputName_1_1 + 1] = context[5];
    if( ! refalrts::svar_right( context[__sNum_1_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eOutputName_1_2], context[__eOutputName_1_2 + 1], context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '+' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_char( n3, 'L' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'k' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_open_bracket( n12 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n12, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_2], context[__eOutputName_1_2 + 1] );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
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
    enum { __eSource_1_1 = 8 };
    enum { __eOutput_1_1 = 10 };
    enum { __sNum_1_1 = 12 };
    enum { __eSource_1_2 = 13 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & FileNum, "FileNum" },
      { & CompileFile, "CompileFile" },
      { & WriteLine, "WriteLine" },
      { & SwCompiled, "SwCompiled" },
      { & Source, "Source" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icBracketRight, 0, 0, 4, 2},
      {refalrts::icFuncLeft, 0, 0, 4, 4},
      {refalrts::icBracketLeft, 0, 0, 6, 4},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eSource_1_1, 6},
      {refalrts::icContextSet, 0, 0, __eOutput_1_1, 4},
      {refalrts::icsVarRight, 0, 0, __sNum_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icChar, 0, 0, '*', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, 'g', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icSpliceEVar, 0, 0, __eSource_1_1, 0},
      {refalrts::icChar, 0, 0, ':', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icCopyEVar, 0, 0, __eSource_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNum_1_1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutput_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
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
    // ( e.FileName#1 s.Num#1 ( & Source ( e.Source#1 ) e.Output#1 ) )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_right( context[4], context[5], context[2], context[3] ) )
      break;
    if( ! refalrts::function_left( & Source, context[4], context[5] ) )
      break;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[4], context[5] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eSource_1_1] = context[6];
    context[__eSource_1_1 + 1] = context[7];
    context[__eOutput_1_1] = context[4];
    context[__eOutput_1_1 + 1] = context[5];
    if( ! refalrts::svar_right( context[__sNum_1_1], context[2], context[3] ) )
      break;
    // Unused closed variable e.FileName#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( context[__eSource_1_2], context[__eSource_1_2 + 1], context[__eSource_1_1], context[__eSource_1_1 + 1] ) )
      return refalrts::cNoMemory;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & SwCompiled, "SwCompiled" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_char( n4, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_char( n8, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'g' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, ':' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_close_call( n16 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_open_call( n17 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_name( n18, & CompileFile, "CompileFile" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_open_bracket( n19 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_close_bracket( n20 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_open_call( n21 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_name( n22, & FileNum, "FileNum" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_close_call( n23 ) )
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
    refalrts::push_stack( n23 );
    refalrts::push_stack( n21 );
    res = refalrts::splice_elem( res, n23 );
    res = refalrts::splice_evar( res, context[__eOutput_1_1], context[__eOutput_1_1 + 1] );
    res = refalrts::splice_stvar( res, context[__sNum_1_1] );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, context[__eSource_1_2], context[__eSource_1_2 + 1] );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, context[__eSource_1_1], context[__eSource_1_1 + 1] );
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

extern refalrts::FnResult StrFromInt(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult FileNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eFile_1_1 = 2 };
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
      {refalrts::icEPush, 0, 0, 0, 0},
      {refalrts::icNumLeft, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eFile_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFile_1_1, 0},
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
    // 0 e.File#1
    if( ! refalrts::number_left( 0UL, context[0], context[1] ) )
      break;
    context[__eFile_1_1] = context[0];
    context[__eFile_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[__eFile_1_1], context[__eFile_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 5 elems
    refalrts::Iter context[5];
    refalrts::zeros( context, 5 );
    enum { __sNumber_1_1 = 2 };
    enum { __eFile_1_1 = 3 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & StrFromInt, "StrFromInt" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icCharRight, 0, 0, (int)'p', 0},
      {refalrts::icCharRight, 0, 0, (int)'p', 0},
      {refalrts::icCharRight, 0, 0, (int)'c', 0},
      {refalrts::icCharRight, 0, 0, (int)'.', 0},
      {refalrts::icsVarLeft, 0, 0, __sNumber_1_1, 0},
      {refalrts::icContextSet, 0, 0, __eFile_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icSpliceEVar, 0, 0, __eFile_1_1, 0},
      {refalrts::icChar, 0, 0, '@', 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icSpliceSTVar, 0, 0, __sNumber_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icChar, 0, 0, '.', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
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
    // s.Number#1 e.File#1 '.cpp'
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( 'p', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( 'c', context[0], context[1] ) )
      break;
    if( ! refalrts::char_right( '.', context[0], context[1] ) )
      break;
    if( ! refalrts::svar_left( context[__sNumber_1_1], context[0], context[1] ) )
      break;
    context[__eFile_1_1] = context[0];
    context[__eFile_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, '@' ) )
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
    if( ! refalrts::alloc_char( n4, '.' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_char( n5, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_char( n6, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_char( n7, 'p' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, context[__sNumber_1_1] );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, context[__eFile_1_1], context[__eFile_1_1 + 1] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  return refalrts::FnResult(
    refalrts::cRecognitionImpossible | (__LINE__ << 8)
  );
}

static refalrts::FnResult SwCompiled(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 4 elems
    refalrts::Iter context[4];
    refalrts::zeros( context, 4 );
    enum { __eOutputName_1_1 = 2 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Success, "Success" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eOutputName_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputName_1_1, 0},
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
    // & Success e.OutputName#1
    if( ! refalrts::function_left( & Success, context[0], context[1] ) )
      break;
    context[__eOutputName_1_1] = context[0];
    context[__eOutputName_1_1 + 1] = context[1];

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
    res = refalrts::splice_evar( res, context[__eOutputName_1_1], context[__eOutputName_1_1 + 1] );
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
      { & Fails, "Fails" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icFuncLeft, 0, 0, 0, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
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
    // & Fails
    if( ! refalrts::function_left( & Fails, context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_name( n0, & Fails, "Fails" ) )
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

static refalrts::FnResult UnBracketSpace(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    // issue here memory for vars with 6 elems
    refalrts::Iter context[6];
    refalrts::zeros( context, 6 );
    enum { __eFileName_1_1 = 4 };
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
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icEmpty, 0, 0, 0, 0},
      {refalrts::icContextSet, 0, 0, __eFileName_1_1, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '"', 0},
      {refalrts::icSpliceEVar, 0, 0, __eFileName_1_1, 0},
      {refalrts::icChar, 0, 0, '"', 0},
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
    // ( e.FileName#1 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      break;
    context[__eFileName_1_1] = context[2];
    context[__eFileName_1_1 + 1] = context[3];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eFileName_1_1], context[__eFileName_1_1 + 1] );
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

static refalrts::FnResult Link(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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
      { & NoCompile, "NoCompile" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 2},
      {refalrts::icEmpty, 0, 0, 0, 2},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // ( & NoCompile ) e.Files#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & NoCompile, context[2], context[3] ) )
      break;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      break;
    // Unused closed variable e.Files#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::cSuccess;
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eOutputs_B_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & Fails, "Fails" },
      { & CompileCommand, "CompileCommand" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 1, 2},
      {refalrts::icEPrepare, 0, 0, __eOutputs_B_1_1, 0},
      {refalrts::icEStart, 0, 0, __eOutputs_B_1_1, 0},
      {refalrts::icSave, 0, 0, 4, 0},
      {refalrts::icFuncLeft, 0, 0, 0, 4},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
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
    // ( & CompileCommand e.Command#1 ) e.Outputs_B#1 & Fails e.Outputs_E#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CompileCommand, context[2], context[3] ) )
      break;
    // Unused closed variable e.Command#1
    context[__eOutputs_B_1_1] = 0;
    context[__eOutputs_B_1_1 + 1] = 0;
    do {
      context[4] = context[0];
      context[5] = context[1];
      if( ! refalrts::function_left( & Fails, context[4], context[5] ) )
        continue;
      // Unused closed variable e.Outputs_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[__eOutputs_B_1_1], context[__eOutputs_B_1_1 + 1], context[0], context[1] ) );
#endif
  } while ( 0 );

  do {
    // issue here memory for vars with 8 elems
    refalrts::Iter context[8];
    refalrts::zeros( context, 8 );
    enum { __eCommand_1_1 = 4 };
    enum { __eOutputs_1_1 = 6 };
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
#ifdef INTERPRET
    static const refalrts::RefalFunction functions[] = {
      { & WriteLine, "WriteLine" },
      { & UnBracketSpace, "UnBracketSpace" },
      { & Map, "Map" },
      { & System, "System" },
      { & CompileCommand, "CompileCommand" }
    };
    using refalrts::labels;
    using refalrts::numbers;
    static refalrts::RASLCommand raa[] = {
      {refalrts::icBracketLeft, 0, 0, 2, 0},
      {refalrts::icFuncLeft, 0, 0, 4, 2},
      {refalrts::icContextSet, 0, 0, __eCommand_1_1, 2},
      {refalrts::icContextSet, 0, 0, __eOutputs_1_1, 0},
      {refalrts::icEmptyResult, 0, 0, 0, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 3, 0},
      {refalrts::icSpliceEVar, 0, 0, __eCommand_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 2, 0},
      {refalrts::icFunc, 0, 0, 1, 0},
      {refalrts::icSpliceEVar, 0, 0, __eOutputs_1_1, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall, 0},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall, 0},
      {refalrts::icFunc, 0, 0, 0, 0},
      {refalrts::icChar, 0, 0, '*', 0},
      {refalrts::icChar, 0, 0, '*', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 'C', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'm', 0},
      {refalrts::icChar, 0, 0, 'p', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'l', 0},
      {refalrts::icChar, 0, 0, 'a', 0},
      {refalrts::icChar, 0, 0, 't', 0},
      {refalrts::icChar, 0, 0, 'i', 0},
      {refalrts::icChar, 0, 0, 'o', 0},
      {refalrts::icChar, 0, 0, 'n', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'u', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'c', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 's', 0},
      {refalrts::icChar, 0, 0, 'e', 0},
      {refalrts::icChar, 0, 0, 'd', 0},
      {refalrts::icChar, 0, 0, ' ', 0},
      {refalrts::icChar, 0, 0, '*', 0},
      {refalrts::icChar, 0, 0, '*', 0},
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
    // ( & CompileCommand e.Command#1 ) e.Outputs#1
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      break;
    if( ! refalrts::function_left( & CompileCommand, context[2], context[3] ) )
      break;
    context[__eCommand_1_1] = context[2];
    context[__eCommand_1_1 + 1] = context[3];
    context[__eOutputs_1_1] = context[0];
    context[__eOutputs_1_1 + 1] = context[1];

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::Iter n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_name( n1, & System, "System" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n3 = 0;
    if( ! refalrts::alloc_name( n3, & Map, "Map" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n4 = 0;
    if( ! refalrts::alloc_name( n4, & UnBracketSpace, "UnBracketSpace" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return refalrts::cNoMemory;
    refalrts::Iter n8 = 0;
    if( ! refalrts::alloc_name( n8, & WriteLine, "WriteLine" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n9 = 0;
    if( ! refalrts::alloc_char( n9, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n10 = 0;
    if( ! refalrts::alloc_char( n10, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n11 = 0;
    if( ! refalrts::alloc_char( n11, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n12 = 0;
    if( ! refalrts::alloc_char( n12, 'C' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n13 = 0;
    if( ! refalrts::alloc_char( n13, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n14 = 0;
    if( ! refalrts::alloc_char( n14, 'm' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n15 = 0;
    if( ! refalrts::alloc_char( n15, 'p' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n16 = 0;
    if( ! refalrts::alloc_char( n16, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n17 = 0;
    if( ! refalrts::alloc_char( n17, 'l' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n18 = 0;
    if( ! refalrts::alloc_char( n18, 'a' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n19 = 0;
    if( ! refalrts::alloc_char( n19, 't' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n20 = 0;
    if( ! refalrts::alloc_char( n20, 'i' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n21 = 0;
    if( ! refalrts::alloc_char( n21, 'o' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n22 = 0;
    if( ! refalrts::alloc_char( n22, 'n' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n23 = 0;
    if( ! refalrts::alloc_char( n23, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n24 = 0;
    if( ! refalrts::alloc_char( n24, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n25 = 0;
    if( ! refalrts::alloc_char( n25, 'u' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n26 = 0;
    if( ! refalrts::alloc_char( n26, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n27 = 0;
    if( ! refalrts::alloc_char( n27, 'c' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n28 = 0;
    if( ! refalrts::alloc_char( n28, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n29 = 0;
    if( ! refalrts::alloc_char( n29, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n30 = 0;
    if( ! refalrts::alloc_char( n30, 's' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n31 = 0;
    if( ! refalrts::alloc_char( n31, 'e' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n32 = 0;
    if( ! refalrts::alloc_char( n32, 'd' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n33 = 0;
    if( ! refalrts::alloc_char( n33, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n34 = 0;
    if( ! refalrts::alloc_char( n34, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n35 = 0;
    if( ! refalrts::alloc_char( n35, '*' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n36 = 0;
    if( ! refalrts::alloc_close_call( n36 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n36 );
    refalrts::push_stack( n7 );
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
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, context[__eOutputs_1_1], context[__eOutputs_1_1 + 1] );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, context[__eCommand_1_1], context[__eCommand_1_1 + 1] );
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


//End of file
