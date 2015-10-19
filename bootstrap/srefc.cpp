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
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Main, (void*) "Main"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ArgList, (void*) "ArgList"},
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eProgName_1_b_1;
    static refalrts::Iter eProgName_1_e_1;
    static refalrts::Iter eConfig_1_b_1;
    static refalrts::Iter eConfig_1_e_1;
    // ( e.ProgName#1 ) ( '@ e.Config#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_0, be_0 ) )
      break;
    if( ! refalrts::char_left( '@', bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eProgName_1_b_1 = bb_1;
    eProgName_1_e_1 = be_1;
    eConfig_1_b_1 = bb_2;
    eConfig_1_e_1 = be_2;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Main, (void*) "Main"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eProgName_1_b_1, & eProgName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & LoadFile, (void*) "LoadFile"},
      {refalrts::icSpliceEVar, & eConfig_1_b_1, & eConfig_1_e_1},
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
    res = refalrts::splice_evar( res, eConfig_1_b_1, eConfig_1_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eProgName_1_b_1, eProgName_1_e_1 );
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
    static refalrts::Iter eArguments_1_b_1;
    static refalrts::Iter eArguments_1_e_1;
    // ( e.ProgName#1 ) e.Arguments#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.ProgName#1
    eArguments_1_b_1 = bb_0;
    eArguments_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Compile_And_Link, (void*) "Compile_And_Link"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FindFiles_Compilers, (void*) "FindFiles_Compilers"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ParseCommandLine, (void*) "ParseCommandLine"},
      {refalrts::icSpliceEVar, & eArguments_1_b_1, & eArguments_1_e_1},
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
    res = refalrts::splice_evar( res, eArguments_1_b_1, eArguments_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompilers_1_1;
    static refalrts::Iter eFolders_1_b_1;
    static refalrts::Iter eFolders_1_e_1;
    static refalrts::Iter eFiles_1_b_1;
    static refalrts::Iter eFiles_1_e_1;
    // t.Compilers#1 ( e.Folders#1 ) e.Files#1
    if( ! refalrts::tvar_left( tCompilers_1_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    eFolders_1_b_1 = bb_1;
    eFolders_1_e_1 = be_1;
    eFiles_1_b_1 = bb_0;
    eFiles_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & tCompilers_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FindFiles, (void*) "FindFiles"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFolders_1_b_1, & eFolders_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eFiles_1_b_1, & eFiles_1_e_1},
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
    res = refalrts::splice_evar( res, eFiles_1_b_1, eFiles_1_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFolders_1_b_1, eFolders_1_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, tCompilers_1_1 );
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
    static refalrts::Iter eMessage_1_b_1;
    static refalrts::Iter eMessage_1_e_1;
    // ( & CmdLineError e.Message#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdLineError, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eMessage_1_b_1 = bb_1;
    eMessage_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & CmdLineError, (void*) "CmdLineError"},
      {refalrts::icSpliceEVar, & eMessage_1_b_1, & eMessage_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & CmdLineError, "CmdLineError" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eMessage_1_b_1, eMessage_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eMessage_1_b_1;
    static refalrts::Iter eMessage_1_e_1;
    // ( & CmdLineError e.Message#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CmdLineError, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eMessage_1_b_1 = bb_1;
    eMessage_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eMessage_1_b_1, & eMessage_1_e_1},
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
    res = refalrts::splice_evar( res, eMessage_1_b_1, eMessage_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eFiles_E_1_b_1;
    static refalrts::Iter eFiles_E_1_e_1;
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_B_1_b_1;
    static refalrts::Iter eFiles_B_1_e_1;
    // t.Compiler#1 e.Files_B#1 ( & NotFound e.FileName#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_B_1_b_1 = 0;
    eFiles_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_2 = bb_0;
      refalrts::Iter be_2 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_2, be_2 ) )
        continue;
      if( ! refalrts::function_left( & NotFound, bb_1, be_1 ) )
        continue;
      eFileName_1_b_1 = bb_1;
      eFileName_1_e_1 = be_1;
      eFiles_E_1_b_1 = bb_2;
      eFiles_E_1_e_1 = be_2;
#ifdef INTERPRET
      const static refalrts::ResultAction raa[] = {
        {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
        {refalrts::icFunc, (void*) & Map, (void*) "Map"},
        {refalrts::icFunc, (void*) & PrintNotFound, (void*) "PrintNotFound"},
        {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
        {refalrts::icFunc, (void*) & NotFound, (void*) "NotFound"},
        {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
        {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
        {refalrts::icSpliceEVar, & eFiles_E_1_b_1, & eFiles_E_1_e_1},
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
      res = refalrts::splice_evar( res, eFiles_E_1_b_1, eFiles_E_1_e_1 );
      refalrts::link_brackets( n3, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::cSuccess;
#endif
    } while ( refalrts::open_evar_advance( eFiles_B_1_b_1, eFiles_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_1_b_1;
    static refalrts::Iter eFiles_1_e_1;
    // t.Compiler#1 e.Files#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_1_b_1 = bb_0;
    eFiles_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
      {refalrts::icSpliceSTVar, & tCompiler_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & GetFileName, (void*) "GetFileName"},
      {refalrts::icSpliceEVar, & eFiles_1_b_1, & eFiles_1_e_1},
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
    res = refalrts::splice_evar( res, eFiles_1_b_1, eFiles_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    // ( & NotFound e.FileName#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & NotFound, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_1;
    eFileName_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'd'},
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
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // ( & Output e.FileName#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Output, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    // Unused closed variable e.FileName#1
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
    // ( & Source ( e.Source#1 ) e.Output#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Source, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    // Unused closed variable e.Source#1
    // Unused closed variable e.Output#1
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

static refalrts::FnResult GetFileName_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult DoGetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult GetFileName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    // ( & Output e.FileName#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Output, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_1;
    eFileName_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GetFileName_Aux, (void*) "GetFileName_Aux"},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Output, (void*) "Output"},
      {refalrts::icCopyEVar, & eFileName_1_b_1, & eFileName_1_e_1},
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
    if( ! refalrts::copy_evar( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eFileName_1_b_2, eFileName_1_e_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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
    static refalrts::Iter eSource_1_b_1;
    static refalrts::Iter eSource_1_e_1;
    static refalrts::Iter eOutput_1_b_1;
    static refalrts::Iter eOutput_1_e_1;
    static refalrts::Iter eOutput_1_b_2;
    static refalrts::Iter eOutput_1_e_2;
    // ( & Source ( e.Source#1 ) e.Output#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & Source, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_left( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSource_1_b_1 = bb_2;
    eSource_1_e_1 = be_2;
    eOutput_1_b_1 = bb_1;
    eOutput_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & GetFileName_Aux, (void*) "GetFileName_Aux"},
      {refalrts::icSpliceEVar, & eOutput_1_b_1, & eOutput_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icInt, 0, 0, 0 },
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSource_1_b_1, & eSource_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icCopyEVar, & eOutput_1_b_1, & eOutput_1_e_1},
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
    if( ! refalrts::copy_evar( eOutput_1_b_2, eOutput_1_e_2, eOutput_1_b_1, eOutput_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eOutput_1_b_2, eOutput_1_e_2 );
    refalrts::link_brackets( n7, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, eSource_1_b_1, eSource_1_e_1 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eOutput_1_b_1, eOutput_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    // e.FileName#1 '.cpp'
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( 'c', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_0;
    eFileName_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGetFileName, (void*) "DoGetFileName"},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
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
    if( ! refalrts::alloc_name( n1, & DoGetFileName, "DoGetFileName" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // e.FileName#1 '/'
    if( ! refalrts::char_right( '/', bb_0, be_0 ) )
      break;
    // Unused closed variable e.FileName#1
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
    // e.FileName#1 '\\'
    if( ! refalrts::char_right( '\\', bb_0, be_0 ) )
      break;
    // Unused closed variable e.FileName#1
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
    static refalrts::Iter sLast_1_1;
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    // e.FileName#1 s.Last#1
    if( ! refalrts::svar_right( sLast_1_1, bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_0;
    eFileName_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoGetFileName, (void*) "DoGetFileName"},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Lower, (void*) "Lower"},
      {refalrts::icSpliceSTVar, & sLast_1_1},
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
    res = refalrts::splice_stvar( res, sLast_1_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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

static refalrts::FnResult DoLower(refalrts::Iter arg_begin, refalrts::Iter arg_end);

static refalrts::FnResult Lower(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sChar_1_1;
    // s.Char#1
    if( ! refalrts::svar_left( sChar_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLower, (void*) "DoLower"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icChar, 0, 0, 'A'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 'B'},
      {refalrts::icChar, 0, 0, 'b'},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'D'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, 'E'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'F'},
      {refalrts::icChar, 0, 0, 'f'},
      {refalrts::icChar, 0, 0, 'G'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, 'H'},
      {refalrts::icChar, 0, 0, 'h'},
      {refalrts::icChar, 0, 0, 'I'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'J'},
      {refalrts::icChar, 0, 0, 'j'},
      {refalrts::icChar, 0, 0, 'K'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'M'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'N'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'O'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'P'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'Q'},
      {refalrts::icChar, 0, 0, 'q'},
      {refalrts::icChar, 0, 0, 'R'},
      {refalrts::icChar, 0, 0, 'r'},
      {refalrts::icChar, 0, 0, 'S'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'T'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'U'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'V'},
      {refalrts::icChar, 0, 0, 'v'},
      {refalrts::icChar, 0, 0, 'W'},
      {refalrts::icChar, 0, 0, 'w'},
      {refalrts::icChar, 0, 0, 'X'},
      {refalrts::icChar, 0, 0, 'x'},
      {refalrts::icChar, 0, 0, 'Y'},
      {refalrts::icChar, 0, 0, 'y'},
      {refalrts::icChar, 0, 0, 'Z'},
      {refalrts::icChar, 0, 0, 'z'},
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
    res = refalrts::splice_stvar( res, sChar_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter sLower_1_1;
    static refalrts::Iter sUpper_1_1;
    static refalrts::Iter sUpper_1_2;
    // s.Upper#1 s.Upper#1 s.Lower#1 e.Tail#1
    if( ! refalrts::svar_left( sUpper_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::repeated_stvar_left( sUpper_1_2, sUpper_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLower_1_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.Tail#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sLower_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sLower_1_1 );
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
    static refalrts::Iter sChar_1_1;
    static refalrts::Iter eTail_1_b_1;
    static refalrts::Iter eTail_1_e_1;
    static refalrts::Iter sUpper_1_1;
    static refalrts::Iter sLower_1_1;
    // s.Char#1 s.Upper#1 s.Lower#1 e.Tail#1
    if( ! refalrts::svar_left( sChar_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sUpper_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sLower_1_1, bb_0, be_0 ) )
      break;
    eTail_1_b_1 = bb_0;
    eTail_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & DoLower, (void*) "DoLower"},
      {refalrts::icSpliceSTVar, & sChar_1_1},
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
    if( ! refalrts::alloc_name( n1, & DoLower, "DoLower" ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eTail_1_b_1, eTail_1_e_1 );
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
    static refalrts::Iter sChar_1_1;
    // s.Char#1
    if( ! refalrts::svar_left( sChar_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sChar_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, sChar_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eOutput1_1_b_1;
    static refalrts::Iter eOutput1_1_e_1;
    static refalrts::Iter eOutput2_1_b_1;
    static refalrts::Iter eOutput2_1_e_1;
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_B_1_b_1;
    static refalrts::Iter eFiles_B_1_e_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    static refalrts::Iter eFiles_M_1_b_1;
    static refalrts::Iter eFiles_M_1_e_1;
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 ( & Output e.Output1#1 ) ) e.Files_M#1 ( e.FileName#1 0 ( & Output e.Output2#1 ) ) e.Files_E#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_B_1_b_1 = 0;
    eFiles_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_5 = bb_0;
      refalrts::Iter be_5 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_5, be_5 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
        continue;
      if( ! refalrts::function_left( & Output, bb_2, be_2 ) )
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) )
        continue;
      eFileName_1_b_1 = bb_1;
      eFileName_1_e_1 = be_1;
      eOutput1_1_b_1 = bb_2;
      eOutput1_1_e_1 = be_2;
      eFiles_M_1_b_1 = 0;
      eFiles_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_6 = bb_5;
        refalrts::Iter be_6 = be_5;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_6, be_6 ) )
          continue;
        refalrts::Iter bb_4 = 0;
        refalrts::Iter be_4 = 0;
        if( ! refalrts::brackets_right( bb_4, be_4, bb_3, be_3 ) )
          continue;
        if( ! refalrts::function_left( & Output, bb_4, be_4 ) )
          continue;
        if( ! refalrts::number_right( 0UL, bb_3, be_3 ) )
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::empty_seq( bb_3, be_3 ) )
          continue;
        eOutput2_1_b_1 = bb_4;
        eOutput2_1_e_1 = be_4;
        // Unused closed variable e.Files_E#1
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
          {refalrts::icChar, 0, 0, 'C'},
          {refalrts::icChar, 0, 0, 'O'},
          {refalrts::icChar, 0, 0, 'M'},
          {refalrts::icChar, 0, 0, 'M'},
          {refalrts::icChar, 0, 0, 'A'},
          {refalrts::icChar, 0, 0, 'N'},
          {refalrts::icChar, 0, 0, 'D'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'L'},
          {refalrts::icChar, 0, 0, 'I'},
          {refalrts::icChar, 0, 0, 'N'},
          {refalrts::icChar, 0, 0, 'E'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'E'},
          {refalrts::icChar, 0, 0, 'R'},
          {refalrts::icChar, 0, 0, 'R'},
          {refalrts::icChar, 0, 0, 'O'},
          {refalrts::icChar, 0, 0, 'R'},
          {refalrts::icChar, 0, 0, ':'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'u'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, 'p'},
          {refalrts::icChar, 0, 0, 'u'},
          {refalrts::icChar, 0, 0, 't'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icSpliceEVar, & eOutput1_1_b_1, & eOutput1_1_e_1},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, 'd'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icSpliceEVar, & eOutput2_1_b_1, & eOutput2_1_e_1},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'h'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 's'},
          {refalrts::icChar, 0, 0, 'o'},
          {refalrts::icChar, 0, 0, 'm'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icChar, 0, 0, 'f'},
          {refalrts::icChar, 0, 0, 'i'},
          {refalrts::icChar, 0, 0, 'l'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, 'n'},
          {refalrts::icChar, 0, 0, 'a'},
          {refalrts::icChar, 0, 0, 'm'},
          {refalrts::icChar, 0, 0, 'e'},
          {refalrts::icChar, 0, 0, ' '},
          {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
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
        res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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
        res = refalrts::splice_evar( res, eOutput2_1_b_1, eOutput2_1_e_1 );
        res = refalrts::splice_elem( res, n39 );
        res = refalrts::splice_elem( res, n38 );
        res = refalrts::splice_elem( res, n37 );
        res = refalrts::splice_elem( res, n36 );
        res = refalrts::splice_elem( res, n35 );
        res = refalrts::splice_evar( res, eOutput1_1_b_1, eOutput1_1_e_1 );
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
      } while ( refalrts::open_evar_advance( eFiles_M_1_b_1, eFiles_M_1_e_1, bb_5, be_5 ) );
    } while ( refalrts::open_evar_advance( eFiles_B_1_b_1, eFiles_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_B_1_b_1;
    static refalrts::Iter eFiles_B_1_e_1;
    static refalrts::Iter tLocation_1_1;
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    static refalrts::Iter eFiles_M_1_b_1;
    static refalrts::Iter eFiles_M_1_e_1;
    static refalrts::Iter eOutput_1_b_1;
    static refalrts::Iter eOutput_1_e_1;
    static refalrts::Iter eFiles_E_1_b_1;
    static refalrts::Iter eFiles_E_1_e_1;
    static refalrts::Iter eFileName_1_b_3;
    static refalrts::Iter eFileName_1_e_3;
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 t.Location#1 ) e.Files_M#1 ( e.FileName#1 0 ( & Output e.Output#1 ) ) e.Files_E#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_B_1_b_1 = 0;
    eFiles_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_0;
      refalrts::Iter be_4 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_4, be_4 ) )
        continue;
      if( ! refalrts::tvar_right( tLocation_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) )
        continue;
      eFileName_1_b_1 = bb_1;
      eFileName_1_e_1 = be_1;
      eFiles_M_1_b_1 = 0;
      eFiles_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_5, be_5 ) )
          continue;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_right( bb_3, be_3, bb_2, be_2 ) )
          continue;
        if( ! refalrts::function_left( & Output, bb_3, be_3 ) )
          continue;
        if( ! refalrts::number_right( 0UL, bb_2, be_2 ) )
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1, bb_2, be_2 ) )
          continue;
        if( ! refalrts::empty_seq( bb_2, be_2 ) )
          continue;
        eOutput_1_b_1 = bb_3;
        eOutput_1_e_1 = be_3;
        eFiles_E_1_b_1 = bb_5;
        eFiles_E_1_e_1 = be_5;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1_1},
          {refalrts::icSpliceEVar, & eFiles_B_1_b_1, & eFiles_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_1_b_1, & eFiles_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_2, & eFileName_1_e_2},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Output, (void*) "Output"},
          {refalrts::icSpliceEVar, & eOutput_1_b_1, & eOutput_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccumulator, (void*) "DelAccumulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_1_b_1, & eFiles_E_1_e_1},
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
        if( ! refalrts::copy_evar( eFileName_1_b_3, eFileName_1_e_3, eFileName_1_b_2, eFileName_1_e_2 ) )
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
        res = refalrts::splice_evar( res, eFiles_E_1_b_1, eFiles_E_1_e_1 );
        res = refalrts::splice_elem( res, n18 );
        refalrts::link_brackets( n15, n17 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, eFileName_1_b_3, eFileName_1_e_3 );
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
        res = refalrts::splice_evar( res, eOutput_1_b_1, eOutput_1_e_1 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eFileName_1_b_2, eFileName_1_e_2 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eFiles_M_1_b_1, eFiles_M_1_e_1 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, tLocation_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_1_b_1, eFiles_B_1_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eFiles_M_1_b_1, eFiles_M_1_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eFiles_B_1_b_1, eFiles_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_B_1_b_1;
    static refalrts::Iter eFiles_B_1_e_1;
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    static refalrts::Iter eOutput_1_b_1;
    static refalrts::Iter eOutput_1_e_1;
    static refalrts::Iter eFiles_M_1_b_1;
    static refalrts::Iter eFiles_M_1_e_1;
    static refalrts::Iter eFiles_E_1_b_1;
    static refalrts::Iter eFiles_E_1_e_1;
    static refalrts::Iter tLocation_1_1;
    static refalrts::Iter eFileName_1_b_3;
    static refalrts::Iter eFileName_1_e_3;
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 ( & Output e.Output#1 ) ) e.Files_M#1 ( e.FileName#1 0 t.Location#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_B_1_b_1 = 0;
    eFiles_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_4 = bb_0;
      refalrts::Iter be_4 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_4, be_4 ) )
        continue;
      refalrts::Iter bb_2 = 0;
      refalrts::Iter be_2 = 0;
      if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
        continue;
      if( ! refalrts::function_left( & Output, bb_2, be_2 ) )
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) )
        continue;
      eFileName_1_b_1 = bb_1;
      eFileName_1_e_1 = be_1;
      eOutput_1_b_1 = bb_2;
      eOutput_1_e_1 = be_2;
      eFiles_M_1_b_1 = 0;
      eFiles_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_5 = bb_4;
        refalrts::Iter be_5 = be_4;
        refalrts::Iter bb_3 = 0;
        refalrts::Iter be_3 = 0;
        if( ! refalrts::brackets_left( bb_3, be_3, bb_5, be_5 ) )
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::number_left( 0UL, bb_3, be_3 ) )
          continue;
        eFiles_E_1_b_1 = bb_5;
        eFiles_E_1_e_1 = be_5;
        if( ! refalrts::tvar_left( tLocation_1_1, bb_3, be_3 ) )
          continue;
        if( ! refalrts::empty_seq( bb_3, be_3 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1_1},
          {refalrts::icSpliceEVar, & eFiles_B_1_b_1, & eFiles_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Output, (void*) "Output"},
          {refalrts::icSpliceEVar, & eOutput_1_b_1, & eOutput_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_1_b_1, & eFiles_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_2, & eFileName_1_e_2},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccumulator, (void*) "DelAccumulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_1_b_1, & eFiles_E_1_e_1},
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
        if( ! refalrts::copy_evar( eFileName_1_b_3, eFileName_1_e_3, eFileName_1_b_2, eFileName_1_e_2 ) )
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
        res = refalrts::splice_evar( res, eFiles_E_1_b_1, eFiles_E_1_e_1 );
        res = refalrts::splice_elem( res, n18 );
        refalrts::link_brackets( n15, n17 );
        res = refalrts::splice_elem( res, n17 );
        res = refalrts::splice_evar( res, eFileName_1_b_3, eFileName_1_e_3 );
        res = refalrts::splice_elem( res, n16 );
        res = refalrts::splice_elem( res, n15 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        refalrts::link_brackets( n8, n10 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_stvar( res, tLocation_1_1 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_evar( res, eFileName_1_b_2, eFileName_1_e_2 );
        res = refalrts::splice_elem( res, n8 );
        res = refalrts::splice_evar( res, eFiles_M_1_b_1, eFiles_M_1_e_1 );
        refalrts::link_brackets( n2, n7 );
        res = refalrts::splice_elem( res, n7 );
        refalrts::link_brackets( n4, n6 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eOutput_1_b_1, eOutput_1_e_1 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_1_b_1, eFiles_B_1_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eFiles_M_1_b_1, eFiles_M_1_e_1, bb_4, be_4 ) );
    } while ( refalrts::open_evar_advance( eFiles_B_1_b_1, eFiles_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_B_1_b_1;
    static refalrts::Iter eFiles_B_1_e_1;
    static refalrts::Iter tLocation1_1_1;
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    static refalrts::Iter eFiles_M_1_b_1;
    static refalrts::Iter eFiles_M_1_e_1;
    static refalrts::Iter eFiles_E_1_b_1;
    static refalrts::Iter eFiles_E_1_e_1;
    static refalrts::Iter tLocation2_1_1;
    static refalrts::Iter eFileName_1_b_3;
    static refalrts::Iter eFileName_1_e_3;
    // t.Compiler#1 e.Files_B#1 ( e.FileName#1 0 t.Location1#1 ) e.Files_M#1 ( e.FileName#1 0 t.Location2#1 ) e.Files_E#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_B_1_b_1 = 0;
    eFiles_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_3 = bb_0;
      refalrts::Iter be_3 = be_0;
      refalrts::Iter bb_1 = 0;
      refalrts::Iter be_1 = 0;
      if( ! refalrts::brackets_left( bb_1, be_1, bb_3, be_3 ) )
        continue;
      if( ! refalrts::tvar_right( tLocation1_1_1, bb_1, be_1 ) )
        continue;
      if( ! refalrts::number_right( 0UL, bb_1, be_1 ) )
        continue;
      eFileName_1_b_1 = bb_1;
      eFileName_1_e_1 = be_1;
      eFiles_M_1_b_1 = 0;
      eFiles_M_1_e_1 = 0;
      do {
        refalrts::Iter bb_4 = bb_3;
        refalrts::Iter be_4 = be_3;
        refalrts::Iter bb_2 = 0;
        refalrts::Iter be_2 = 0;
        if( ! refalrts::brackets_left( bb_2, be_2, bb_4, be_4 ) )
          continue;
        if( ! refalrts::repeated_evar_left( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1, bb_2, be_2 ) )
          continue;
        if( ! refalrts::number_left( 0UL, bb_2, be_2 ) )
          continue;
        eFiles_E_1_b_1 = bb_4;
        eFiles_E_1_e_1 = be_4;
        if( ! refalrts::tvar_left( tLocation2_1_1, bb_2, be_2 ) )
          continue;
        if( ! refalrts::empty_seq( bb_2, be_2 ) )
          continue;
#ifdef INTERPRET
        const static refalrts::ResultAction raa[] = {
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & ScanCollisions, (void*) "ScanCollisions"},
          {refalrts::icSpliceSTVar, & tCompiler_1_1},
          {refalrts::icSpliceEVar, & eFiles_B_1_b_1, & eFiles_B_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icInt, 0, 0, 0 },
          {refalrts::icSpliceSTVar, & tLocation1_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icSpliceEVar, & eFiles_M_1_b_1, & eFiles_M_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icSpliceEVar, & eFileName_1_b_2, & eFileName_1_e_2},
          {refalrts::icInt, 0, 0, 1 },
          {refalrts::icSpliceSTVar, & tLocation2_1_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & DelAccumulator, (void*) "DelAccumulator"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
          {refalrts::icFunc, (void*) & MapReduce, (void*) "MapReduce"},
          {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
          {refalrts::icFunc, (void*) & Renumerate, (void*) "Renumerate"},
          {refalrts::icCopyEVar, & eFileName_1_b_1, & eFileName_1_e_1},
          {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
          {refalrts::icInt, 0, 0, 2 },
          {refalrts::icSpliceEVar, & eFiles_E_1_b_1, & eFiles_E_1_e_1},
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
        if( ! refalrts::copy_evar( eFileName_1_b_3, eFileName_1_e_3, eFileName_1_b_2, eFileName_1_e_2 ) )
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
        res = refalrts::splice_evar( res, eFiles_E_1_b_1, eFiles_E_1_e_1 );
        res = refalrts::splice_elem( res, n15 );
        refalrts::link_brackets( n12, n14 );
        res = refalrts::splice_elem( res, n14 );
        res = refalrts::splice_evar( res, eFileName_1_b_3, eFileName_1_e_3 );
        res = refalrts::splice_elem( res, n13 );
        res = refalrts::splice_elem( res, n12 );
        res = refalrts::splice_elem( res, n11 );
        res = refalrts::splice_elem( res, n10 );
        res = refalrts::splice_elem( res, n9 );
        res = refalrts::splice_elem( res, n8 );
        refalrts::link_brackets( n5, n7 );
        res = refalrts::splice_elem( res, n7 );
        res = refalrts::splice_stvar( res, tLocation2_1_1 );
        res = refalrts::splice_elem( res, n6 );
        res = refalrts::splice_evar( res, eFileName_1_b_2, eFileName_1_e_2 );
        res = refalrts::splice_elem( res, n5 );
        res = refalrts::splice_evar( res, eFiles_M_1_b_1, eFiles_M_1_e_1 );
        refalrts::link_brackets( n2, n4 );
        res = refalrts::splice_elem( res, n4 );
        res = refalrts::splice_stvar( res, tLocation1_1_1 );
        res = refalrts::splice_elem( res, n3 );
        res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
        res = refalrts::splice_elem( res, n2 );
        res = refalrts::splice_evar( res, eFiles_B_1_b_1, eFiles_B_1_e_1 );
        res = refalrts::splice_stvar( res, tCompiler_1_1 );
        res = refalrts::splice_elem( res, n1 );
        res = refalrts::splice_elem( res, n0 );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::cSuccess;
#endif
      } while ( refalrts::open_evar_advance( eFiles_M_1_b_1, eFiles_M_1_e_1, bb_3, be_3 ) );
    } while ( refalrts::open_evar_advance( eFiles_B_1_b_1, eFiles_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter tCompiler_1_1;
    static refalrts::Iter eFiles_1_b_1;
    static refalrts::Iter eFiles_1_e_1;
    // t.Compiler#1 e.Files#1
    if( ! refalrts::tvar_left( tCompiler_1_1, bb_0, be_0 ) )
      break;
    eFiles_1_b_1 = bb_0;
    eFiles_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Link, (void*) "Link"},
      {refalrts::icSpliceSTVar, & tCompiler_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & CompileEachFile, (void*) "CompileEachFile"},
      {refalrts::icSpliceEVar, & eFiles_1_b_1, & eFiles_1_e_1},
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
    res = refalrts::splice_evar( res, eFiles_1_b_1, eFiles_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tCompiler_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    static refalrts::Iter eSource_1_b_1;
    static refalrts::Iter eSource_1_e_1;
    static refalrts::Iter eOutput_1_b_1;
    static refalrts::Iter eOutput_1_e_1;
    static refalrts::Iter sNextNumber_1_1;
    static refalrts::Iter eFileName_1_b_2;
    static refalrts::Iter eFileName_1_e_2;
    static refalrts::Iter sNextNumber_1_2;
    // e.FileName#1 s.NextNumber#1 ( e.FileName#1 0 ( & Source ( e.Source#1 ) e.Output#1 ) )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_right( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & Source, bb_2, be_2 ) )
      break;
    if( ! refalrts::number_right( 0UL, bb_1, be_1 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) )
      break;
    eFileName_1_b_1 = bb_1;
    eFileName_1_e_1 = be_1;
    if( ! refalrts::repeated_evar_left( eFileName_1_b_2, eFileName_1_e_2, eFileName_1_b_1, eFileName_1_e_1, bb_0, be_0 ) )
      break;
    eSource_1_b_1 = bb_3;
    eSource_1_e_1 = be_3;
    eOutput_1_b_1 = bb_2;
    eOutput_1_e_1 = be_2;
    if( ! refalrts::svar_left( sNextNumber_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Inc, (void*) "Inc"},
      {refalrts::icSpliceSTVar, & sNextNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
      {refalrts::icCopySTVar, & sNextNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icFunc, (void*) & Source, (void*) "Source"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eSource_1_b_1, & eSource_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icSpliceEVar, & eOutput_1_b_1, & eOutput_1_e_1},
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
    if( ! refalrts::copy_stvar( sNextNumber_1_2, sNextNumber_1_1 ) )
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
    res = refalrts::splice_evar( res, eOutput_1_b_1, eOutput_1_e_1 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eSource_1_b_1, eSource_1_e_1 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNextNumber_1_2 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sNextNumber_1_1 );
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
    static refalrts::Iter tNextFile_1_1;
    static refalrts::Iter sNextNumber_1_1;
    // e.FileName#1 s.NextNumber#1 t.NextFile#1
    if( ! refalrts::tvar_right( tNextFile_1_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_right( sNextNumber_1_1, bb_0, be_0 ) )
      break;
    // Unused closed variable e.FileName#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceSTVar, & sNextNumber_1_1},
      {refalrts::icSpliceSTVar, & tNextFile_1_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_stvar( res, tNextFile_1_1 );
    res = refalrts::splice_stvar( res, sNextNumber_1_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOutputName_1_b_1;
    static refalrts::Iter eOutputName_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eOutputName_1_b_2;
    static refalrts::Iter eOutputName_1_e_2;
    // ( e.FileName#1 s.Num#1 ( & Output e.OutputName#1 ) )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & Output, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eOutputName_1_b_1 = bb_2;
    eOutputName_1_e_1 = be_2;
    if( ! refalrts::svar_right( sNum_1_1, bb_1, be_1 ) )
      break;
    // Unused closed variable e.FileName#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '+'},
      {refalrts::icChar, 0, 0, 'L'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'k'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::copy_evar( eOutputName_1_b_2, eOutputName_1_e_2, eOutputName_1_b_1, eOutputName_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eOutputName_1_b_2, eOutputName_1_e_2 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eOutputName_1_b_1, eOutputName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eSource_1_b_1;
    static refalrts::Iter eSource_1_e_1;
    static refalrts::Iter eOutput_1_b_1;
    static refalrts::Iter eOutput_1_e_1;
    static refalrts::Iter sNum_1_1;
    static refalrts::Iter eSource_1_b_2;
    static refalrts::Iter eSource_1_e_2;
    // ( e.FileName#1 s.Num#1 ( & Source ( e.Source#1 ) e.Output#1 ) )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    refalrts::Iter bb_2 = 0;
    refalrts::Iter be_2 = 0;
    if( ! refalrts::brackets_right( bb_2, be_2, bb_1, be_1 ) )
      break;
    if( ! refalrts::function_left( & Source, bb_2, be_2 ) )
      break;
    refalrts::Iter bb_3 = 0;
    refalrts::Iter be_3 = 0;
    if( ! refalrts::brackets_left( bb_3, be_3, bb_2, be_2 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eSource_1_b_1 = bb_3;
    eSource_1_e_1 = be_3;
    eOutput_1_b_1 = bb_2;
    eOutput_1_e_1 = be_2;
    if( ! refalrts::svar_right( sNum_1_1, bb_1, be_1 ) )
      break;
    // Unused closed variable e.FileName#1
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & SwCompiled, (void*) "SwCompiled"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, 'g'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icSpliceEVar, & eSource_1_b_1, & eSource_1_e_1},
      {refalrts::icChar, 0, 0, ':'},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & CompileFile, (void*) "CompileFile"},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icCopyEVar, & eSource_1_b_1, & eSource_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseBracket},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & FileNum, (void*) "FileNum"},
      {refalrts::icSpliceSTVar, & sNum_1_1},
      {refalrts::icSpliceEVar, & eOutput_1_b_1, & eOutput_1_e_1},
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
    if( ! refalrts::copy_evar( eSource_1_b_2, eSource_1_e_2, eSource_1_b_1, eSource_1_e_1 ) )
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
    res = refalrts::splice_evar( res, eOutput_1_b_1, eOutput_1_e_1 );
    res = refalrts::splice_stvar( res, sNum_1_1 );
    res = refalrts::splice_elem( res, n22 );
    res = refalrts::splice_elem( res, n21 );
    refalrts::link_brackets( n19, n20 );
    res = refalrts::splice_elem( res, n20 );
    res = refalrts::splice_evar( res, eSource_1_b_2, eSource_1_e_2 );
    res = refalrts::splice_elem( res, n19 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    refalrts::push_stack( n16 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_evar( res, eSource_1_b_1, eSource_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFile_1_b_1;
    static refalrts::Iter eFile_1_e_1;
    // 0 e.File#1
    if( ! refalrts::number_left( 0UL, bb_0, be_0 ) )
      break;
    eFile_1_b_1 = bb_0;
    eFile_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eFile_1_b_1, & eFile_1_e_1},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, eFile_1_b_1, eFile_1_e_1 );
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
    static refalrts::Iter eFile_1_b_1;
    static refalrts::Iter eFile_1_e_1;
    // s.Number#1 e.File#1 '.cpp'
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( 'p', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( 'c', bb_0, be_0 ) )
      break;
    if( ! refalrts::char_right( '.', bb_0, be_0 ) )
      break;
    if( ! refalrts::svar_left( sNumber_1_1, bb_0, be_0 ) )
      break;
    eFile_1_b_1 = bb_0;
    eFile_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icSpliceEVar, & eFile_1_b_1, & eFile_1_e_1},
      {refalrts::icChar, 0, 0, '@'},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & StrFromInt, (void*) "StrFromInt"},
      {refalrts::icSpliceSTVar, & sNumber_1_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icChar, 0, 0, '.'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    res = refalrts::splice_stvar( res, sNumber_1_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eFile_1_b_1, eFile_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eOutputName_1_b_1;
    static refalrts::Iter eOutputName_1_e_1;
    // & Success e.OutputName#1
    if( ! refalrts::function_left( & Success, bb_0, be_0 ) )
      break;
    eOutputName_1_b_1 = bb_0;
    eOutputName_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenBracket},
      {refalrts::icSpliceEVar, & eOutputName_1_b_1, & eOutputName_1_e_1},
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
    res = refalrts::splice_evar( res, eOutputName_1_b_1, eOutputName_1_e_1 );
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
    // & Fails
    if( ! refalrts::function_left( & Fails, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icFunc, (void*) & Fails, (void*) "Fails"},
      {refalrts::icEnd}
    };
    refalrts::Iter allocs[2*sizeof(raa)/sizeof(raa[0])];
    refalrts::FnResult res = refalrts::interpret_array( raa, allocs, arg_begin, arg_end );
    return res;
#else

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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eFileName_1_b_1;
    static refalrts::Iter eFileName_1_e_1;
    // ( e.FileName#1 )
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::empty_seq( bb_0, be_0 ) )
      break;
    eFileName_1_b_1 = bb_1;
    eFileName_1_e_1 = be_1;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '"'},
      {refalrts::icSpliceEVar, & eFileName_1_b_1, & eFileName_1_e_1},
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
    if( ! refalrts::alloc_char( n0, ' ' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n1 = 0;
    if( ! refalrts::alloc_char( n1, '"' ) )
      return refalrts::cNoMemory;
    refalrts::Iter n2 = 0;
    if( ! refalrts::alloc_char( n2, '"' ) )
      return refalrts::cNoMemory;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eFileName_1_b_1, eFileName_1_e_1 );
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
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    // ( & NoCompile ) e.Files#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & NoCompile, bb_1, be_1 ) )
      break;
    if( ! refalrts::empty_seq( bb_1, be_1 ) )
      break;
    // Unused closed variable e.Files#1
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
    static refalrts::Iter eOutputs_B_1_b_1;
    static refalrts::Iter eOutputs_B_1_e_1;
    // ( & CompileCommand e.Command#1 ) e.Outputs_B#1 & Fails e.Outputs_E#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CompileCommand, bb_1, be_1 ) )
      break;
    // Unused closed variable e.Command#1
    eOutputs_B_1_b_1 = 0;
    eOutputs_B_1_e_1 = 0;
    do {
      refalrts::Iter bb_2 = bb_0;
      refalrts::Iter be_2 = be_0;
      if( ! refalrts::function_left( & Fails, bb_2, be_2 ) )
        continue;
      // Unused closed variable e.Outputs_E#1
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
    } while ( refalrts::open_evar_advance( eOutputs_B_1_b_1, eOutputs_B_1_e_1, bb_0, be_0 ) );
  } while ( 0 );

  do {
    refalrts::Iter bb_0 = arg_begin;
    refalrts::Iter be_0 = arg_end;
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_left( bb_0, be_0 );
    refalrts::move_right( bb_0, be_0 );
    static refalrts::Iter eCommand_1_b_1;
    static refalrts::Iter eCommand_1_e_1;
    static refalrts::Iter eOutputs_1_b_1;
    static refalrts::Iter eOutputs_1_e_1;
    // ( & CompileCommand e.Command#1 ) e.Outputs#1
    refalrts::Iter bb_1 = 0;
    refalrts::Iter be_1 = 0;
    if( ! refalrts::brackets_left( bb_1, be_1, bb_0, be_0 ) )
      break;
    if( ! refalrts::function_left( & CompileCommand, bb_1, be_1 ) )
      break;
    eCommand_1_b_1 = bb_1;
    eCommand_1_e_1 = be_1;
    eOutputs_1_b_1 = bb_0;
    eOutputs_1_e_1 = be_0;
#ifdef INTERPRET
    const static refalrts::ResultAction raa[] = {
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & System, (void*) "System"},
      {refalrts::icSpliceEVar, & eCommand_1_b_1, & eCommand_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & Map, (void*) "Map"},
      {refalrts::icFunc, (void*) & UnBracketSpace, (void*) "UnBracketSpace"},
      {refalrts::icSpliceEVar, & eOutputs_1_b_1, & eOutputs_1_e_1},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibCloseCall},
      {refalrts::icBracket, 0, 0, refalrts::ibOpenCall},
      {refalrts::icFunc, (void*) & WriteLine, (void*) "WriteLine"},
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 'C'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'm'},
      {refalrts::icChar, 0, 0, 'p'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'l'},
      {refalrts::icChar, 0, 0, 'a'},
      {refalrts::icChar, 0, 0, 't'},
      {refalrts::icChar, 0, 0, 'i'},
      {refalrts::icChar, 0, 0, 'o'},
      {refalrts::icChar, 0, 0, 'n'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'u'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'c'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 's'},
      {refalrts::icChar, 0, 0, 'e'},
      {refalrts::icChar, 0, 0, 'd'},
      {refalrts::icChar, 0, 0, ' '},
      {refalrts::icChar, 0, 0, '*'},
      {refalrts::icChar, 0, 0, '*'},
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
    res = refalrts::splice_evar( res, eOutputs_1_b_1, eOutputs_1_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eCommand_1_b_1, eCommand_1_e_1 );
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
